#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include <algorithm>

struct Goal
{
	std::vector<std::string> description;
	std::string task;
	int amount;
};

struct TestStruct
{
	int name;
	int surname;
};

struct Reward
{
	std::string icon;
	int islandExperience;
	int crystals;
	int money;
	int playerExperience;
	std::string sound;
};
	
struct Mission
{
	std::string name;
	std::string material;
	std::string displayName;
	std::vector<Goal> goals;
	Reward reward;
	std::string missionType;
	std::string completeSound;
	std::string author = "IridiumSkyblock Team";
};

// void readableGoalsPrinter(std::ofstream& missionsYml, std::vector<Goal>& goals);
// void rewardsPrinter(std::ofstream& missionsYml, Reward& reward, std::string prefix);
// void goalsPrinter(std::ofstream& missionsYml, std::vector<Goal>& goals);
// void dailySlotsPrinter(std::ofstream& missionsYml, int slotsAmount);
// void customMaterialsPrinter(std::ofstream& missionsYml, std::vector<std::pair<std::string, std::vector<std::string>>>& customMaterialListsVec);
