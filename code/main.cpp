#include "farmer.hpp"
#include "MissionPack.hpp"
#include <iostream>
#include <fstream>
#include <map>

#include <filesystem>
namespace fs = std::filesystem;


int main()
{
    if(fs::exists(missionsDir + "test"))
    {
        fs::remove_all(missionsDir + "test");
    }
    fs::create_directories(missionsDir + "test");
    
    std::ofstream ofs(missionsDir + "test/a.txt");
    
    ofs << mission.missionGroups.at(0).missions.at(0).reward.receivedItems.at(0).itemName << std::endl; 
    ofs << mission.missionGroups.at(0).missions.at(0).reward.receivedItems.at(0).itemAmount << std::endl;
    ofs << mission.packTag << std::endl;
    ofs << mission.missionGroups.at(0).groupTag << std::endl;
    ofs << mission.missionGroups.at(0).missions.at(0).associations.level << std::endl;
    ofs << mission.missionGroups.at(0).missions.at(0).options["island"] << std::endl; 
    ofs << "mission-file: " << MissionType.at("blocks") << std::endl; 
    mission.missionGroups.at(0).missions.at(0).printOptions(ofs, defaultOptions);
    ofs.close();
    // mission.xxx();

    return 0;
}