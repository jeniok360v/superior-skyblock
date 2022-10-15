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
    "BlocksMissions",       /* 0 */
    "BrewingMissions",      /* 1 */
    "CraftingMissions",     /* 2 */
    "EnchantingMissions",   /* 3 */
    "FarmingMissions",      /* 4 */
    "FishingMissions",      /* 5 */
    "IslandMissions",       /* 6 */
    "ItemsMissions",        /* 7 */
    "KillsMissions",        /* 8 */
    "StatisticsMissions"    /* 9 */
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

struct Potion
{
    std::string potionName;
    std::string upgraded;
    std::string extended;
    std::string splash;
    int amount;
};

struct Goal
{
    std::vector<Item> requiredItems;
    std::vector<std::string> events;
    std::string check;
    std::vector<Potion> potions;
};

struct Reward
{
    int money = 0;
    std::vector<std::string> commands;
    std::vector<Item> receivedItems;
};

class Mission
{
public:
    std::string missionType;
    std::unordered_map<std::string, std::string> options;
    MissionAssociations associations;
    Goal goal;
    Reward reward;

    void printWikiLink(std::ofstream& ofs);
    void printMissionType(std::ofstream& ofs);
    void printOptions(std::ofstream& ofs, std::unordered_map<std::string, std::string> const &options);

    void printReward(std::ofstream& ofs, int missionNumber, std::string groupName);
    void printRewardItems(std::ofstream& ofs);
    void printRewardMoney(std::ofstream& ofs);
    void printRewardAdditionalCommands(std::ofstream& ofs);

    void printRequiredMissions(std::ofstream& ofs, int missionNumber, std::string groupTag);

    void printGoal(std::ofstream& ofs);
    void printGoalBlocksMissions(std::ofstream& ofs);
    void printGoalBrewingMissions(std::ofstream& ofs);
    void printGoalCraftingMissions(std::ofstream& ofs);
    void printGoalEnchantingMissions(std::ofstream& ofs);
    void printGoalFarmingMissions(std::ofstream& ofs);
    void printGoalFishingMissions(std::ofstream& ofs);
    void printGoalIslandMissions(std::ofstream& ofs);
    void printGoalItemsMissions(std::ofstream& ofs);
    void printGoalKillsMissions(std::ofstream& ofs);
    void printGoalStatisticsMissions(std::ofstream& ofs);

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













