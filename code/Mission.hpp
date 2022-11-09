#pragma once

#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <map>
#include <unordered_map>
#include "predefined.hpp"

struct MissionAssociations
{
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

struct Event
{
    std::string russianItemName;
    std::string event;
    std::string successCheck;
    std::string description;
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

struct Enchant
{
    std::string item;
    std::string russianItemName;
    int amount;
    std::string enchant;
    std::string russianEnchantName;
    int level;
    std::string descriptions;
};

struct Goal
{
    std::vector<Item> items;
    std::vector<Event> events;
    std::vector<Potion> potions;
    std::vector<Enchant> enchants;
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
    std::vector<Item> items;
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
    void printGoalMissionsMultiTypeWithString(std::ofstream& ofs, bool isTest, std::string type);
    void printGoalMissionsBrewingType(std::ofstream& ofs, bool isTest);
    void printGoalMissionsOneType(std::ofstream& ofs, bool isTest);
    void printGoalMissionsEnchantType(std::ofstream& ofs, bool isTest);
    void printGoalAmount(std::ofstream& ofs, bool isTest, int amount);

    int getChestLevel(int missionNumber, int groupSize, int chestsAmount);
    void printHighlighted(std::ofstream& ofs);

    void printLore(std::ofstream& ofs, int missionNumber, int groupSize, std::string groupName, std::string icon, std::string skull, bool isTest);
    void printLoreSegment(std::ofstream& ofs, int missionNumber, std::string groupName, std::string icon, std::string skull, std::string completness, bool isTest);
    void printLoreHeader(std::ofstream& ofs, int missionNumber, std::string groupName, std::string icon, std::string skull, bool isTest);
    void printLoreRequirements(std::ofstream& ofs);
    void printLoreReward(std::ofstream& ofs);
    void printLoreProgress(std::ofstream& ofs, std::string completness);
    void printLorePrerequisite(std::ofstream& ofs);
    void printLoreFooter(std::ofstream& ofs, std::string completness);

    void printMission(std::ofstream& ofs, int missionNumber, int groupSize, std::string groupTag, std::string groupName, std::string icon, std::string skull, bool isTest)
    {
        printWikiLink(ofs);
        printMissionType(ofs);
        printOptions(ofs, options, missionNumber);
        printReward(ofs, missionNumber, groupName);
        printRequiredMissions(ofs, missionNumber, groupTag);
        printGoal(ofs, isTest);
        printLore(ofs, missionNumber, groupSize, groupName, icon, skull, isTest);
    }
};
