#include "farmer.hpp"
#include "MissionPack.hpp"
#include "MissionPackager.hpp"
#include <iostream>
#include <fstream>
#include <map>

#include <filesystem>
namespace fs = std::filesystem;


int main()
{
    std::ofstream ofs(missionsDir + "test/a.txt");

    MissionPackager packager;
    packager.printAllMissions();

    // ofs << "mission goal: " << packager.allMissionPacks["farmer"].missionGroups.at(0).missions.at(0).goal.goalStr << std::endl;
    MissionPack mission {packager.allMissionPacks["farmer"]};

    ofs << mission.missionGroups.at(0).missions.at(0).reward.receivedItems.at(0).itemName << std::endl; 
    ofs << mission.missionGroups.at(0).missions.at(0).reward.receivedItems.at(0).itemAmount << std::endl;
    ofs << "pack tag: " << mission.packTag << std::endl;
    ofs << "group tag: " << mission.missionGroups.at(0).groupTag << std::endl;
    ofs << "previousRequired: " << mission.missionGroups.at(0).missions.at(0).associations.previousRequired << std::endl;
    // ofs << "mission goal: " << mission.missionGroups.at(0).missions.at(0).goal.goalStr << std::endl;
    ofs << mission.missionGroups.at(0).missions.at(0).options["island"] << std::endl; 
    ofs << "mission-file: " << "BlocksMissions" << std::endl; 
    mission.missionGroups.at(0).missions.at(0).printOptions(ofs, defaultOptions);

    ofs.close();
    return 0;
}





















