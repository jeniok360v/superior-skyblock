#include "Mission.hpp"
#include <fstream>
#include <iostream>

// void Mission::xxx() {std::cout << "HHHHHHHHHHH" <<std::endl;}

void Mission::printWikiLink(std::ofstream& ofs)
{
    ofs << "# https://wiki.bg-software.com/superiorskyblock/overview/missions" << std::endl << std::endl;
}

void Mission::printMissionType(std::ofstream& ofs)
{
    ofs << "mission-file: " << missionType << std::endl << std::endl;
}

void Mission::printOptions(std::ofstream& ofs, std::unordered_map<std::string, std::string> const &options)
{
    for (auto const &option: options)
    {
        ofs << option.first << ": " << option.second << std::endl;
    }
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
    ofs << "    - 'is admin msg %player% &b" + groupName + " | &7Вы успешно завершили миссию &a\"" + groupName + " " + std::to_string(missionNumber) + "\"&r&7!'" << std::endl;
    ofs << "    - 'is admin msg %player% &b" + groupName + " |'" << std::endl << std::endl;
}

void Mission::printRewardItems(std::ofstream& ofs)
{
    if(!reward.receivedItems.empty())
    {
        ofs << "  items:" << std::endl;
        for (int i = 0; i < reward.receivedItems.size(); i++)
        {
            ofs << "    '" + std::to_string(i + 1) + "':" << std::endl;
            ofs << "      type: " + reward.receivedItems.at(i).itemName << std::endl;
            ofs << "      amount: " + std::to_string(reward.receivedItems.at(i).itemAmount) << std::endl;
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
            ofs << "    - '" + reward.commands.at(i) + "'" << std::endl;
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
            for(int i = 1; i < missionNumber; i++)
            {
                ofs << "  - '" + groupTag + "_" + std::to_string(i) + "'" << std::endl;
            }
        }
        if(!associations.additionalRequirements.empty())
        {
            for(auto& requiredMission : associations.additionalRequirements)
            {
                ofs << "  - '" + requiredMission + "'" << std::endl;
            }
        }
        ofs << std::endl;
    }    
}

void Mission::printGoal(std::ofstream& ofs)
{
    // BlocksMissions -> 0
    int type = std::distance(MissionType.cbegin(), std::find(MissionType.cbegin(), MissionType.cend(), missionType));
    switch(type)
    {
        case 0:
            printGoalBlocksMissions(ofs);
            break;
        case 1:
            printGoalBrewingMissions(ofs);
            break;
        case 2:
            printGoalCraftingMissions(ofs);
            break;
        case 3:
            printGoalEnchantingMissions(ofs);
            break;
        case 4:
            printGoalFarmingMissions(ofs);
            break;
        case 5:
            printGoalFishingMissions(ofs);
            break;
        case 6:
            printGoalIslandMissions(ofs);
            break;
        case 7:
            printGoalItemsMissions(ofs);
            break;
        case 8:
            printGoalKillsMissions(ofs);
            break;
        case 9:
            printGoalStatisticsMissions(ofs);
            break;
        default:
            std::cout << "Unknown mission type, ERROR!" << std::endl;
    }
    ofs << std::endl;
}

void Mission::printGoalBlocksMissions(std::ofstream& ofs)
{
    ofs << "required-blocks:" << std::endl;
    for(int i = 0; i < goal.requiredItems.size(); i++)
    {
        std::string itemPrint = goal.requiredItems.at(i).itemName;
        std::transform(itemPrint.begin(), itemPrint.end(),itemPrint.begin(), ::toupper);
        ofs << "  '" + std::to_string(i + 1) + "':" << std::endl;
        ofs << "    types:" << std::endl;
        ofs << "      - '" + itemPrint + "'" << std::endl;
        ofs << "    amount: " + std::to_string(goal.requiredItems.at(i).itemAmount) << std::endl;
    }        
}

void Mission::printGoalBrewingMissions(std::ofstream& ofs)
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
        ofs << "    amount: " + std::to_string(goal.potions.at(i).amount) << std::endl;
    }
}

void Mission::printGoalCraftingMissions(std::ofstream& ofs)
{
    ofs << "craftings:" << std::endl;
    for(int i = 0; i < goal.requiredItems.size(); i++)
    {
        std::string itemPrint = goal.requiredItems.at(i).itemName;
        std::transform(itemPrint.begin(), itemPrint.end(),itemPrint.begin(), ::toupper);
        ofs << "  '" + std::to_string(i + 1) + "':" << std::endl;
        ofs << "    type: '" + itemPrint + "'" << std::endl;
        ofs << "    amount: " + std::to_string(goal.requiredItems.at(i).itemAmount) << std::endl;
    }
}

void Mission::printGoalEnchantingMissions(std::ofstream& ofs)
{
    
}

void Mission::printGoalFarmingMissions(std::ofstream& ofs)
{
    ofs << "required-plants:" << std::endl;
    for(int i = 0; i < goal.requiredItems.size(); i++)//  auto& item : goal.requiredItems)
    {
        std::string itemPrint = goal.requiredItems.at(i).itemName;
        std::transform(itemPrint.begin(), itemPrint.end(),itemPrint.begin(), ::toupper);
        ofs << "  '" + std::to_string(i + 1) + "':" << std::endl;
        ofs << "    types:" << std::endl;
        ofs << "      - '" + itemPrint + "'" << std::endl;
        ofs << "    amount: " + std::to_string(goal.requiredItems.at(i).itemAmount) << std::endl;
    }        
}

void Mission::printGoalFishingMissions(std::ofstream& ofs)
{
    
}

void Mission::printGoalIslandMissions(std::ofstream& ofs)
{
    
}

void Mission::printGoalItemsMissions(std::ofstream& ofs)
{
    
}

void Mission::printGoalKillsMissions(std::ofstream& ofs)
{
    
}

void Mission::printGoalStatisticsMissions(std::ofstream& ofs)
{
    
}

void Mission::printLore(std::ofstream& ofs, int missionNumber, std::string groupName, std::string icon, std::string skull)
{
    ofs << "icons:" << std::endl;
    ofs << "  not-completed:" << std::endl;
    printLoreSegment(ofs, missionNumber, groupName, icon, skull);
    ofs << "  can-complete:" << std::endl;
    // printLoreSegment()
    ofs << "  completed:" << std::endl;
    // printLoreSegment()
    
}

void Mission::printLoreSegment(std::ofstream& ofs, int missionNumber, std::string groupName, std::string icon, std::string skull)
{
    printLoreHeader(ofs, missionNumber, groupName, icon, skull);
    printLoreRequirements(ofs);
    // printLoreReward()
    // printLoreProgress()
}

void Mission::printLoreHeader(std::ofstream& ofs, int missionNumber, std::string groupName, std::string icon, std::string skull)
{
    ofs << "    type: " + icon << std::endl;
    if(icon == "PLAYER_HEAD")
    {
        ofs << "    skull: " + skull << std::endl;
    }
    ofs << "    name: '&bМиссия \"" + groupName + " " + std::to_string(missionNumber) + "\"'" << std::endl;
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
    for(auto& item : goal.requiredItems)
    {
        ofs << "      - '&b  - &ax" + std::to_string(item.itemAmount) + " &7" + item.russianItemName + "'" << std::endl;
    }
    for(auto& event : goal.events)
    {
        ofs << "      - '&b  - &7" + event.description + "'" << std::endl;
    }
    for(auto& potion : goal.potions)
    {
        ofs << "      - '&b  - &ax" + std::to_string(potion.amount) + " &7" + potion.russianItemName + "'" << std::endl;
    }
    ofs << "      - ' '" << std::endl;
}

/*
void Mission::printLoreReward()
{
    
}

void Mission::printLoreProgress()
{
    
}

# Icons used in the menus.
icons:
  not-completed:
    type: PLAYER_HEAD
    skull: 'eyJ0ZXh0dXJlcyI6eyJTS0lOIjp7InVybCI6Imh0dHA6Ly90ZXh0dXJlcy5taW5lY3JhZnQubmV0L3RleHR1cmUvODMzNmUzMTVlMWFlOTk1NzJkYzljNzJhNjJhMTRiODU3Nzc0MWRjMzQ3MmM3NDEzZDdlYWE2NjdhMzA3YTNkNyJ9fX0='
    name: '&bМиссия фермера №1'
    lore:
      - ' '
      - '&b * &7Требования (вырастить на грядке):'
      - '&b  - &ax10 &7Морковь'
      - '&b  - &ax10 &7Картофель'
      - '&b  - &ax10 &7Пшеница'
      - ' '
      - '&b * &7Награда:'
      - '&b  - &ax1 &7Семя свеклы'
      - '&b  - &ax1 &7Семя тыквы'
      - '&b  - &ax1 &7Семя арбуза'
      - '&b  - &a$2,500'
      - ' '
      - '&b * &7Прогресс: &a{0}%'
      - '&b  - &7Выращенная морковь: &a{value_carrots}/10'
      - '&b  - &7Выращенный картофель: &a{value_potatoes}/10'
      - '&b  - &7Выращенная пшеница: &a{value_wheat}/10'
      - ' '
      - '&c ✘ &7Не завершен'
  can-complete:
    type: PLAYER_HEAD
    skull: 'eyJ0ZXh0dXJlcyI6eyJTS0lOIjp7InVybCI6Imh0dHA6Ly90ZXh0dXJlcy5taW5lY3JhZnQubmV0L3RleHR1cmUvNTQyYTI0MTUyYWExM2FjMzE1YjI3MWQ2OThiODJiNGE3YTE3ZjEwZjE3ZjBlOGM0OTVmYjZmOGNiMzljNTU2NCJ9fX0='
    name: '&bМиссия фермера №1'
    lore:
      - ' '
      - '&b * &7Требования (вырастить на грядке):'
      - '&b  - &ax10 &7Морковь'
      - '&b  - &ax10 &7Картофель'
      - '&b  - &ax10 &7Пшеница'
      - ' '
      - '&b * &7Награда:'
      - '&b  - &ax1 &7Семя свеклы'
      - '&b  - &ax1 &7Семя тыквы'
      - '&b  - &ax1 &7Семя арбуза'
      - '&b  - &a$2,500'
      - ' '
      - '&b * &7Прогресс: &a100%'
      - '&b  - &7Выращенная морковь: &a{value_carrots}/10'
      - '&b  - &7Выращенный картофель: &a{value_potatoes}/10'
      - '&b  - &7Выращенная пшеница: &a{value_wheat}/10'
      - ' '
      - '&8 ✔ &7Нажмите, чтобы получить награду.'
  completed:
    type: PLAYER_HEAD
    skull: 'eyJ0ZXh0dXJlcyI6eyJTS0lOIjp7InVybCI6Imh0dHA6Ly90ZXh0dXJlcy5taW5lY3JhZnQubmV0L3RleHR1cmUvZDI4ODcyZGM5ZDYzNGQyNzRjNGMwZTgwZGU2MTc2M2MyMmI2Y2JlNDk3NDBlODdlMzY1N2JjMzZkM2VkNGJlYSJ9fX0='
    name: '&bМиссия фермера №1'
    lore:
      - ' '
      - '&b * &7Требования (вырастить на грядке):'
      - '&b  - &ax10 &7Морковь'
      - '&b  - &ax10 &7Картофель'
      - '&b  - &ax10 &7Пшеница'
      - ' '
      - '&b * &7Награда:'
      - '&b  - &ax1 &7Семя свеклы'
      - '&b  - &ax1 &7Семя тыквы'
      - '&b  - &ax1 &7Семя арбуза'
      - '&b  - &a$2,500'
      - ' '
      - '&b * &7Прогресс: &a100%'
      - '&b  - &7Выращенная морковь: &a10/10'
      - '&b  - &7Выращенный картофель: &a10/10'
      - '&b  - &7Выращенная пшеница: &a10/10'
      - ' '
      - '&a ✔ &7Уже выполненно, награда получена.'


*/















