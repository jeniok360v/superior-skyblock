#pragma once

#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <map>
#include <unordered_map>

const std::string missionsDir = "../plugins/SuperiorSkyblock2/modules/missions/categories/"; //extern

const std::vector<std::string> MissionType
{
    "BlocksMissions",
    "BrewingMissions",
    "CraftingMissions",
    "EnchantingMissions",
    "FarmingMissions",
    "FishingMissions",
    "IslandMissions",
    "ItemsMissions",
    "KillsMissions",
    "StatisticsMissions",
};

const std::unordered_map<std::string, std::string> defaultOptions {
    {"auto-reward", "false"}, 
    {"reset-after-finish", "true"}, 
    {"disband-reset", "true"},
    {"only-show-if-required-completed", "true"},
    {"island", "true"},
};

struct MissionAssociations
{
    // int level; //?
    std::vector<std::string> additionalRequirements;
    bool previousRequired = true;
    
};

struct Item
{
    std::string itemName;
    std::string russianItemName;
    int itemAmount;
    std::string itemDescription;
};

struct Goal
{
    std::vector<Item> requiredItems;
    std::vector<std::string> events;
    std::string check;
};

struct Reward
{
    int money = 0;
    std::vector<std::string> commands;
    std::vector<Item> receivedItems;
};

// struct Goal
// {
    // std::string goalStr;
// };

class Mission
{
public:
    std::string missionType;
    std::unordered_map<std::string, std::string> options;
    MissionAssociations associations;
    Goal goal;
    Reward reward;

    void printWikiLink(std::ofstream& ofs)
    {
        ofs << "# https://wiki.bg-software.com/superiorskyblock/overview/missions" << std::endl << std::endl;
    }

    void printMissionType(std::ofstream& ofs)
    {
        ofs << "mission-file: " << missionType << std::endl << std::endl;
    }

    template<typename K, typename V>
    void printOptions(std::ofstream& missionYml, std::unordered_map<K, V> const &options);

    void printReward(std::ofstream& ofs, int missionNumber, std::string groupName)
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

    void printRewardItems(std::ofstream& ofs)
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

    void printRewardMoney(std::ofstream& ofs)
    {
        if(reward.money > 0)
        {
            ofs << "    - 'eco give %player% " + std::to_string(reward.money) + "'" << std::endl;
        }
    }

    void printRewardAdditionalCommands(std::ofstream& ofs)
    {
        if(!reward.commands.empty())
        {
            for (int i = 0; i < reward.commands.size(); i++)
            {
                ofs << "    - '" + reward.commands.at(i) + "'" << std::endl;
            }
        }
    }

    void printRequiredMissions(std::ofstream& ofs, int missionNumber, std::string groupTag)
    {
        if((associations.previousRequired && missionNumber > 1) || !associations.additionalRequirements.empty())
        {
            ofs << "required-missions:" << std::endl;
        }
        
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

    // template<class T> 
    // T& get() const;

    void printGoal(std::ofstream& ofs)
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

    void printMission(std::ofstream& ofs, int missionNumber, std::string groupTag, std::string groupName)
    {
        printWikiLink(ofs);
        printMissionType(ofs);
        printOptions(ofs, options);
        printReward(ofs, missionNumber, groupName);
        printRequiredMissions(ofs, missionNumber, groupTag);
        printGoal(ofs);
        //printLore
        
    }
};

template<typename K, typename V>
void Mission::printOptions(std::ofstream& ofs, std::unordered_map<K, V> const &options)
{
    for (auto const &option: options)
    {
        ofs << option.first << ": " << option.second << std::endl;// << std::endl;
    }
    ofs << std::endl;
}



// struct Goal
// {
    // std::vector<std::string> description;
    // std::string task;
    // int amount;
// };


// struct Reward
// {
    // std::string icon;
    // int islandExperience;
    // int crystals;
    // int money;
    // int playerExperience;
    // std::string sound;
// };
    
// struct Mission
// {
    // std::string name;
    // std::string material;
    // std::string displayName;
    // std::vector<Goal> goals;
    // Reward reward;
    // std::string missionType;
    // std::string completeSound;
    // std::string author = "IridiumSkyblock Team";
// };

// void readableGoalsPrinter(std::ofstream& missionsYml, std::vector<Goal>& goals);
// void rewardsPrinter(std::ofstream& missionsYml, Reward& reward, std::string prefix);
// void goalsPrinter(std::ofstream& missionsYml, std::vector<Goal>& goals);
// void dailySlotsPrinter(std::ofstream& missionsYml, int slotsAmount);
// void customMaterialsPrinter(std::ofstream& missionsYml, std::vector<std::pair<std::string, std::vector<std::string>>>& customMaterialListsVec);
