#pragma once

#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <map>
#include <unordered_map>

std::string missionsDir = "../plugins/SuperiorSkyblock2/modules/missions/categories/";

std::vector<std::string> MissionType
{
	"BlocksMissions",		/* 0 */
	"BrewingMissions",		/* 1 */
	"CraftingMissions",		/* 2 */
	"EnchantingMissions",	/* 3 */
	"FarmingMissions",		/* 4 */
	"FishingMissions",		/* 5 */
	"IslandMissions",		/* 6 */
	"ItemsMissions",		/* 7 */
	"KillsMissions",		/* 8 */
	"StatisticsMissions"	/* 9 */
};

const std::unordered_map<std::string, std::string> defaultOptions {
	{"auto-reward", "false"}, 
	{"reset-after-finish", "true"}, 
	{"disband-reset", "true"},
	{"only-show-if-required-completed", "true"},
	{"island", "true"},
};

// struct Options
// {
	// bool autoReward;
	// bool resetAfterFinish;
	// bool disbandReset;
	// bool reuiredCompleted;
	// bool islandMission;
// };

// Options defaultOptions {false, true, true, true, true};

struct Item
{
	std::string itemName;
	int itemAmount;
	std::string itemDescription;
};

struct Reward
{
	std::vector<Item> receivedItems;
	int money = 0;
};

struct Mission
{
	Reward reward;
	std::string missionType;
	std::unordered_map<std::string, std::string> options;
};


// struct Goal
// {
	// std::vector<std::string> description;
	// std::string task;
	// int amount;
// };

struct TestStruct
{
	int name;
	int surname;
};


// class Missi
// {
// public:
template<typename K, typename V>
void print_map(std::ofstream& missionYml, std::unordered_map<K, V> const &options)
{
    for (auto const &option: options) {
        missionYml << option.first << ": " << option.second << std::endl;
    }
	missionYml << std::endl;
}
// }



// void gree();


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
