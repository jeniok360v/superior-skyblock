#pragma once

#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <map>
#include <unordered_map>

const std::string headChest = "eyJ0ZXh0dXJlcyI6eyJTS0lOIjp7InVybCI6Imh0dHA6Ly90ZXh0dXJlcy5taW5lY3JhZnQubmV0L3RleHR1cmUvNTZkN2ZkYjUwZjE0YzczMWM3MjdiMGUwZDE4OWI2YTg3NDMxOWZjMGQ3OWM4YTA5OWFjZmM3N2M3YjJkOTE5NiJ9fX0=";
const std::string headCompleted = "eyJ0ZXh0dXJlcyI6eyJTS0lOIjp7InVybCI6Imh0dHA6Ly90ZXh0dXJlcy5taW5lY3JhZnQubmV0L3RleHR1cmUvZDI4ODcyZGM5ZDYzNGQyNzRjNGMwZTgwZGU2MTc2M2MyMmI2Y2JlNDk3NDBlODdlMzY1N2JjMzZkM2VkNGJlYSJ9fX0=";
// const std::string headCompleted = "";


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

const std::unordered_map<std::string, std::string> defaultVisibleOptions {
    {"auto-reward", "false"}, 
    {"reset-after-finish", "true"}, 
    {"disband-reset", "true"},
    {"only-show-if-required-completed", "false"},
    {"island", "true"},
};

const std::unordered_map<std::string, std::string> defaultNaturalBlocksOptions {
    {"auto-reward", "false"}, 
    {"reset-after-finish", "true"}, 
    {"disband-reset", "true"},
    {"only-show-if-required-completed", "true"},
    {"island", "true"},
    {"only-natural-blocks", "true"},
};

const std::unordered_map<std::string, std::string> defaultRepeatableOptions {
    {"auto-reward", "false"}, 
    {"reset-after-finish", "true"}, 
    {"disband-reset", "true"},
    {"only-show-if-required-completed", "true"},
    {"island", "true"},
    {"reset-amount", "10000"},
};

struct MissionAssociations
{
    // int level; //?
    std::vector<std::pair<std::string, std::string>> additionalRequirements;
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
    std::string russianItemName;
    std::string upgraded;
    std::string extended;
    std::string splash;
    int amount;
    std::string descriptions;
};

struct Event
{
    std::string russianItemName;
    std::string event;
    std::string successCheck;
    std::string description;
};

struct Goal
{
    std::vector<Item> requiredItems;
    std::vector<Event> events;
    std::vector<Potion> potions;
};

struct Command
{
    std::string command; //line?
    std::string description;
};

struct Reward
{
    int money = 0;
    std::vector<Command> commands;
    std::vector<Item> receivedItems;
};

class Mission
{
public:
    std::vector<std::string> missionDescription;
    std::string missionType;
    std::unordered_map<std::string, std::string> options;
    MissionAssociations associations;
    Goal goal;
    Reward reward;

    void printWikiLink(std::ofstream& ofs);
    void printMissionType(std::ofstream& ofs);
    void printOptions(std::ofstream& ofs, std::unordered_map<std::string, std::string> const &options, int missionNumber);

    void printReward(std::ofstream& ofs, int missionNumber, std::string groupName);
    void printRewardItems(std::ofstream& ofs);
    void printRewardMoney(std::ofstream& ofs);
    void printRewardAdditionalCommands(std::ofstream& ofs);

    void printRequiredMissions(std::ofstream& ofs, int missionNumber, std::string groupTag);

    void printGoal(std::ofstream& ofs, bool isTest);
    void printGoalBlocksMissions(std::ofstream& ofs, bool isTest);
    void printGoalBrewingMissions(std::ofstream& ofs, bool isTest);
    void printGoalCraftingMissions(std::ofstream& ofs, bool isTest);
    void printGoalEnchantingMissions(std::ofstream& ofs, bool isTest);
    void printGoalFarmingMissions(std::ofstream& ofs, bool isTest);
    void printGoalFishingMissions(std::ofstream& ofs, bool isTest);
    void printGoalIslandMissions(std::ofstream& ofs, bool isTest);
    void printGoalItemsMissions(std::ofstream& ofs, bool isTest);
    void printGoalKillsMissions(std::ofstream& ofs, bool isTest);
    void printGoalStatisticsMissions(std::ofstream& ofs, bool isTest);
    void printGoalMissionsMultiType(std::ofstream& ofs, bool isTest);
    void printGoalAmount(std::ofstream& ofs, bool isTest, int amount);

    void printLore(std::ofstream& ofs, int missionNumber, std::string groupName, std::string icon, std::string skull, bool isTest);
    void printLoreSegment(std::ofstream& ofs, int missionNumber, std::string groupName, std::string icon, std::string skull, std::string completness, bool isTest);
    void printLoreHeader(std::ofstream& ofs, int missionNumber, std::string groupName, std::string icon, std::string skull, bool isTest);
    void printLoreRequirements(std::ofstream& ofs);
    void printLoreReward(std::ofstream& ofs);
    void printLoreProgress(std::ofstream& ofs, std::string completness);
    void printLorePrerequisite(std::ofstream& ofs);
    void printLoreFooter(std::ofstream& ofs, std::string completness);

    void printMission(std::ofstream& ofs, int missionNumber, std::string groupTag, std::string groupName, std::string icon, std::string skull, bool isTest)
    {
        printWikiLink(ofs);
        printMissionType(ofs);
        printOptions(ofs, options, missionNumber);
        printReward(ofs, missionNumber, groupName);
        printRequiredMissions(ofs, missionNumber, groupTag);
        printGoal(ofs, isTest);
        printLore(ofs, missionNumber, groupName, icon, skull, isTest);
    }
};













