#include "Mission.hpp"
#include <fstream>
#include <iostream>

std::string to_roman(int n)
{
    std::string str_romans[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    std::string result = "";

    for (auto i = 0; i < 13; ++i)
    {
        while(n - values[i] >= 0)
        {
            result += str_romans[i];
            n -= values[i];
        }
    }
    return result;
}

void Mission::printWikiLink(std::ofstream& ofs)
{
    ofs << "# https://wiki.bg-software.com/superiorskyblock/overview/missions" << std::endl << std::endl;
}

void Mission::printMissionType(std::ofstream& ofs)
{
    ofs << "mission-file: " << missionType << std::endl << std::endl;
}

void Mission::printOptions(std::ofstream& ofs, std::unordered_map<std::string, std::string> const &options, int missionNumber)
{
    for (auto const &option: options)
    {
        ofs << option.first << ": " << option.second << std::endl;
    }
    ofs << "weight: " << std::to_string(missionNumber) << std::endl;
    ofs << std::endl;
}

void Mission::printReward(std::ofstream& ofs, int missionNumber, std::string groupName)
{
    ofs << "rewards:" << std::endl;
    printRewardItems(ofs);
    ofs << "  commands:" << std::endl;
    printRewardMoney(ofs);
    printRewardAdditionalCommands(ofs);
    ofs << "    - 'is admin msg %player% &b" + groupName + " |'" << std::endl;
    ofs << "    - 'is admin msg %player% &b" + groupName + " | &7Вы успешно завершили миссию &a\"" + groupName + " " + to_roman(missionNumber) + "\"&r&7!'" << std::endl;
    ofs << "    - 'is admin msg %player% &b" + groupName + " |'" << std::endl << std::endl;
}

void Mission::printRewardItems(std::ofstream& ofs)
{
    if(!reward.items.empty())
    {
        ofs << "  items:" << std::endl;
        for (int i = 0; i < reward.items.size(); i++)
        {
            std::string itemPrint = reward.items.at(i).itemName;
            std::transform(itemPrint.begin(), itemPrint.end(),itemPrint.begin(), ::toupper);
            ofs << "    '" + std::to_string(i + 1) + "':" << std::endl;
            ofs << "      type: " + itemPrint << std::endl;
            ofs << "      amount: " + std::to_string(reward.items.at(i).itemAmount) << std::endl;
        }
    }
}

void Mission::printRewardMoney(std::ofstream& ofs)
{
    if(reward.money > 0)
    {
        ofs << "    - 'eco give %player% " + std::to_string(reward.money) + "'" << std::endl;
    }
}

void Mission::printRewardAdditionalCommands(std::ofstream& ofs)
{
    if(!reward.commands.empty())
    {
        for (int i = 0; i < reward.commands.size(); i++)
        {
            ofs << "    - '" + reward.commands.at(i).command + "'" << std::endl;
        }
    }
}

void Mission::printRequiredMissions(std::ofstream& ofs, int missionNumber, std::string groupTag)
{
    if((associations.previousRequired && missionNumber > 1) || !associations.additionalRequirements.empty())
    {
        ofs << "required-missions:" << std::endl;
        if(associations.previousRequired && missionNumber > 1)
        {
            ofs << "  - '" + groupTag + "_" + std::to_string(missionNumber-1) + "'" << std::endl;
        }
        if(!associations.additionalRequirements.empty())
        {
            for(auto& requiredMission : associations.additionalRequirements)
            {
                ofs << "  - '" + requiredMission.first + "'" << std::endl;
            }
        }
        ofs << std::endl;
    }    
}

void Mission::printGoal(std::ofstream& ofs, bool isTest)
{
    // BlocksMissions -> 0
    int type = std::distance(MissionType.cbegin(), std::find(MissionType.cbegin(), MissionType.cend(), missionType));
    switch(type)
    {
        case 0:
            printGoalBlocksMissions(ofs, isTest);
            break;
        case 1:
            printGoalBrewingMissions(ofs, isTest);
            break;
        case 2:
            printGoalCraftingMissions(ofs, isTest);
            break;
        case 3:
            printGoalEnchantingMissions(ofs, isTest);
            break;
        case 4:
            printGoalFarmingMissions(ofs, isTest);
            break;
        case 5:
            printGoalFishingMissions(ofs, isTest);
            break;
        case 6:
            printGoalIslandMissions(ofs, isTest);
            break;
        case 7:
            printGoalItemsMissions(ofs, isTest);
            break;
        case 8:
            printGoalKillsMissions(ofs, isTest);
            break;
        case 9:
            printGoalStatisticsMissions(ofs, isTest);
            break;
        default:
            std::cout << "Unknown mission type, ERROR!" << std::endl;
    }
    ofs << std::endl;
}

void Mission::printGoalBlocksMissions(std::ofstream& ofs, bool isTest)
{
    ofs << "required-blocks:" << std::endl;
    printGoalMissionsMultiType(ofs, isTest);
}

void Mission::printGoalBrewingMissions(std::ofstream& ofs, bool isTest)
{
    ofs << "required-potions:" << std::endl;
    for(int i = 0; i < goal.potions.size(); i++)
    {
        std::string itemPrint = goal.potions.at(i).potionName;
        std::transform(itemPrint.begin(), itemPrint.end(),itemPrint.begin(), ::toupper);
        ofs << "  '" + std::to_string(i + 1) + "':" << std::endl;
        ofs << "    potions:" << std::endl;
        ofs << "      '1':" << std::endl;
        ofs << "        type: " + itemPrint << std::endl;
        ofs << "        upgraded: " + goal.potions.at(i).upgraded << std::endl;
        ofs << "        extended: " + goal.potions.at(i).extended << std::endl;
        ofs << "        splash: " + goal.potions.at(i).splash << std::endl;
        printGoalAmount(ofs, isTest, goal.potions.at(i).amount);
    }
}

void Mission::printGoalCraftingMissions(std::ofstream& ofs, bool isTest)
{
    ofs << "craftings:" << std::endl;
    for(int i = 0; i < goal.items.size(); i++)
    {
        std::string itemPrint = goal.items.at(i).itemName;
        std::transform(itemPrint.begin(), itemPrint.end(),itemPrint.begin(), ::toupper);

        ofs << "  '" + std::to_string(i + 1) + "':" << std::endl;
        ofs << "    type: '" + itemPrint + "'" << std::endl;
        printGoalAmount(ofs, isTest, goal.items.at(i).itemAmount);
    }
}

void Mission::printGoalEnchantingMissions(std::ofstream& ofs, bool isTest)
{
    ofs << "required-enchants:" << std::endl;
    for(int i = 0; i < goal.enchants.size(); i++)
    {
        std::string itemPrint = goal.enchants.at(i).item;
        std::transform(itemPrint.begin(), itemPrint.end(),itemPrint.begin(), ::toupper);
        std::string enchantPrint = goal.enchants.at(i).enchant;
        std::transform(enchantPrint.begin(), enchantPrint.end(),enchantPrint.begin(), ::toupper);

        ofs << "  '" + std::to_string(i + 1) + "':" << std::endl;
        ofs << "    types:" << std::endl;
        ofs << "      - '" + itemPrint + "'" << std::endl;
        ofs << "    enchants:" << std::endl;
        ofs << "      " + enchantPrint + ": " + std::to_string(goal.enchants.at(i).level) << std::endl;
        printGoalAmount(ofs, isTest, goal.enchants.at(i).amount);
    }
}

void Mission::printGoalFarmingMissions(std::ofstream& ofs, bool isTest)
{
    ofs << "required-plants:" << std::endl;
    printGoalMissionsMultiType(ofs, isTest);    
}

void Mission::printGoalFishingMissions(std::ofstream& ofs, bool isTest)
{
    ofs << "required-caughts:" << std::endl;
    printGoalMissionsMultiType(ofs, isTest);
}

void Mission::printGoalIslandMissions(std::ofstream& ofs, bool isTest)
{
    // events?
}

void Mission::printGoalItemsMissions(std::ofstream& ofs, bool isTest)
{
    ofs << "required-items:" << std::endl;
    printGoalMissionsMultiType(ofs, isTest);
}

void Mission::printGoalKillsMissions(std::ofstream& ofs, bool isTest)
{
    ofs << "required-entities:" << std::endl;
    printGoalMissionsMultiType(ofs, isTest);
}

// bad missions: 
//   not resetable
//   gather stats from whole server activity, not only skyblock (?)
void Mission::printGoalStatisticsMissions(std::ofstream& ofs, bool isTest)
{
    ofs << "required-statistics:" << std::endl;
    printGoalMissionsMultiTypeWithString(ofs, isTest, "statistics");
}

void Mission::printGoalMissionsMultiTypeWithString(std::ofstream& ofs, bool isTest, std::string type)
{
    for(int i = 0; i < goal.items.size(); i++)
    {
        std::string itemPrint = goal.items.at(i).itemName;
        std::transform(itemPrint.begin(), itemPrint.end(),itemPrint.begin(), ::toupper);
        ofs << "  '" + std::to_string(i + 1) + "':" << std::endl;
        ofs << "    " + type + ":" << std::endl;
        ofs << "      - '" + itemPrint + "'" << std::endl;
        printGoalAmount(ofs, isTest, goal.items.at(i).itemAmount);
    }
}

void Mission::printGoalMissionsMultiType(std::ofstream& ofs, bool isTest)
{
    printGoalMissionsMultiTypeWithString(ofs, isTest, "types");
}

void Mission::printGoalAmount(std::ofstream& ofs, bool isTest, int amount)
{
    if(isTest)
    {
        ofs << "    amount: 3" << std::endl;
    }
    else
    {
        ofs << "    amount: " + std::to_string(amount) << std::endl;
    }
}

int Mission::getChestLevel(int missionNumber, int groupSize, int chestsAmount)
{
    if(groupSize < chestsAmount)
    {
        return missionNumber;
    }
    return (missionNumber*chestsAmount)/groupSize;
}

void Mission::printHighlighted(std::ofstream& ofs)
{
    ofs << "    enchants:" << std::endl;
    ofs << "      DURABILITY: 1" << std::endl;
    ofs << "    flags:" << std::endl;
    ofs << "      - HIDE_ENCHANTS" << std::endl;
}

void Mission::printLore(std::ofstream& ofs, int missionNumber, int groupSize, std::string groupName, std::string icon, std::string skull, bool isTest)
{
    std::string leveledChest = headLeveledChest.at(getChestLevel(missionNumber, groupSize, headLeveledChest.size()));
    ofs << "icons:" << std::endl;
    ofs << "  not-completed:" << std::endl;
    printLoreSegment(ofs, missionNumber, groupName, icon, skull, "not completed", isTest);
    ofs << "  can-complete:" << std::endl;
    printLoreSegment(ofs, missionNumber, groupName, icon, leveledChest, "can complete", isTest); // headChest
    printHighlighted(ofs);
    ofs << "  completed:" << std::endl;
    printLoreSegment(ofs, missionNumber, groupName, icon, headCompleted, "completed", isTest);
}

void Mission::printLoreSegment(std::ofstream& ofs, int missionNumber, std::string groupName, std::string icon, std::string skull, std::string completness, bool isTest)
{
    printLoreHeader(ofs, missionNumber, groupName, icon, skull, isTest);
    printLoreRequirements(ofs);
    printLoreReward(ofs);
    printLoreProgress(ofs, completness);
    printLorePrerequisite(ofs);
    printLoreFooter(ofs, completness);
}

void Mission::printLoreHeader(std::ofstream& ofs, int missionNumber, std::string groupName, std::string icon, std::string skull, bool isTest)
{
    ofs << "    type: " + icon << std::endl;
    if(icon == "PLAYER_HEAD")
    {
        ofs << "    skull: '" + skull + "'" << std::endl;
    }

    ofs << "    name: '&bМиссия \"" + groupName + " " + to_roman(missionNumber) + "\"";
    if(isTest)
    {
        ofs << " &4(TEST)";
    }
    ofs << "'" << std::endl;

    ofs << "    lore:" << std::endl;
    if(!missionDescription.empty())
    {
        ofs << "      - ' '" << std::endl;
        for(auto& line : missionDescription)
        {
            ofs << "      - '&b * &7" + line + "'" << std::endl;
        }
    }
    ofs << "      - ' '" << std::endl;
}

void Mission::printLoreRequirements(std::ofstream& ofs)
{
    ofs << "      - '&b * &7Требования:'" << std::endl;
    for(auto& item : goal.items)
    {
        ofs << "      - '&b  - &a" + std::to_string(item.itemAmount) + " &7" + item.russianItemName + "'" << std::endl;
    }
    for(auto& event : goal.events)
    {
        ofs << "      - '&b  - &7" + event.description + "'" << std::endl;
    }
    for(auto& potion : goal.potions)
    {
        ofs << "      - '&b  - &a" + std::to_string(potion.amount) + " &7" + potion.russianItemName + "'" << std::endl;
    }
    for(auto& enchant : goal.enchants)
    {
        ofs << "      - '&b  - &7" + enchant.russianItemName + " (" + enchant.russianEnchantName + " " + to_roman(enchant.level) + ")'" << std::endl;
    }
    ofs << "      - ' '" << std::endl;
}

void Mission::printLoreReward(std::ofstream& ofs)
{
    ofs << "      - '&b * &7Награды:'" << std::endl;
    for(auto& item : reward.items)
    {
        ofs << "      - '&b  - &a" + std::to_string(item.itemAmount) + " &7" + item.russianItemName + "'" << std::endl;
    }
    for(auto& command : reward.commands)
    {
        ofs << "      - '&b  - &7" + command.description + "'" << std::endl;
    }
    if(reward.money > 0)
    {
        ofs << "      - '&b  - &a$" + std::to_string(reward.money) + "'" << std::endl;
    }
    ofs << "      - ' '" << std::endl;
}

void Mission::printLoreProgress(std::ofstream& ofs, std::string completness)
{
    if(completness == "not completed")
    {
        ofs << "      - '&b * &7Прогресс: &a{0}%'" << std::endl;
    }
    else
    {
        ofs << "      - '&b * &7Прогресс: &a100%'" << std::endl;
    }

    if(missionType == "ItemsMissions")
    {
        ofs << "      - '&b * &7&nПримечание:&r&7 Предметы должны быть в инвентаре'" << std::endl;
    }
    else if(missionType == "EnchantingMissions")
    {
        ofs << "      - '&b * &7&nПримечание:&r&7 Можно использовать стол зачарований либо наковальню'" << std::endl;
    }
    else if(missionType == "BrewingMissions")
    {
        ofs << "      - '&b * &7&nПримечание:&r&7 Используйте варочную стойку'" << std::endl;
    }
    else
    {
        if(completness == "not completed")
        {
            for(auto& item : goal.items)
            {
                ofs << "      - '&b  - &7" + item.itemDescription + ": &a{value_" + item.itemName + "}/" + std::to_string(item.itemAmount) + "'" << std::endl;
            }
        }
        else
        {
            for(auto& item : goal.items)
            {
                ofs << "      - '&b  - &7" + item.itemDescription + ": &a" + std::to_string(item.itemAmount) + "/" + std::to_string(item.itemAmount) + "'" << std::endl;
            }
        }
    }

    for(auto& event : goal.events)
    {
        ofs << "      - '&b  - &7" + event.description + "'" << std::endl;
    }
    if(!goal.potions.empty())
    {
        ofs << "      - '&b * &7&nПримечание:&r&7 счётчик зелий не ведется'" << std::endl;
    }
    ofs << "      - ' '" << std::endl;
}

void Mission::printLorePrerequisite(std::ofstream& ofs)
{
    if(!associations.additionalRequirements.empty())
    {
        ofs << "      - '&b * &7&nВыполните условия, чтобы открыть миссию:'" << std::endl;
        for(auto& requiredMission : associations.additionalRequirements)
        {
            ofs << "      - '&b  - &7Пройдите миссию: &a\"" + requiredMission.second + "\"'" << std::endl;
        }
        ofs << "      - ' '" << std::endl;
    }
}

void Mission::printLoreFooter(std::ofstream& ofs, std::string completness)
{
    if(completness == "not completed")
    {
        ofs << "      - '&c ✘ &7Миссия не завершена'" << std::endl;
    }
    else if(completness == "can complete")
    {
        ofs << "      - '&8 ✔ &7Нажмите, чтобы получить награду.'" << std::endl;
    }
    else if(completness == "completed")
    {
        ofs << "      - '&a ✔ &7Миссия выполнена, награда получена.'" << std::endl;
    }

    // ofs << "      - ' '" << std::endl;
}
