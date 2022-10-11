#pragma once

#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <map>
#include <unordered_map>

const std::string missionsDir = "../plugins/SuperiorSkyblock2/modules/missions/categories/"; //extern

const std::map<std::string, std::string> MissionType
{
    {"blocks", "BlocksMissions"},
    {"brewing", "BrewingMissions"},
    {"crafting", "CraftingMissions"},
    {"enchanting", "EnchantingMissions"},
    {"farming", "FarmingMissions"},
    {"fishing", "FishingMissions"},
    {"island", "IslandMissions"},
    {"obtaining", "ItemsMissions"},
    {"killing", "KillsMissions"},
    {"stats", "StatisticsMissions"},
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
    int itemAmount;
    std::string itemDescription;
};

struct Reward
{
    int money = 0;
    std::vector<std::string> commands;
    std::vector<Item> receivedItems;
};

struct Goal
{
    std::string goalStr;
};

class Mission
{
public:
    std::string missionType;
    std::unordered_map<std::string, std::string> options;
    MissionAssociations associations;
    Goal goal;
    Reward reward;

    void printMission(std::ofstream& ofs)
    {
        ofs << "# https://wiki.bg-software.com/superiorskyblock/overview/missions" << std::endl << std::endl;
        ofs << "mission-file: " << missionType << std::endl << std::endl; 
        printOptions(ofs, options);
        //printReward
        //printRequiredMissions
        //printGoal
        //printLore
        
    }

    template<typename K, typename V>
    void printOptions(std::ofstream& missionYml, std::unordered_map<K, V> const &options);
};

template<typename K, typename V>
void Mission::printOptions(std::ofstream& missionYml, std::unordered_map<K, V> const &options)
{
    for (auto const &option: options)
    {
        missionYml << option.first << ": " << option.second << std::endl;// << std::endl;
    }
    missionYml << std::endl;
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
