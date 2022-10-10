#include "farmer.hpp"
#include "structs.hpp"
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
    
    ofs << mission.reward.receivedItems.at(0).itemName << std::endl; 
    ofs << mission.reward.receivedItems.at(0).itemAmount << std::endl; 
    ofs << mission.options["island"] << std::endl; 
    ofs << "mission-file: " << MissionType.at("blocks") << std::endl; 
    mission.printOptions(ofs, defaultOptions);
    ofs.close();
    // mission.xxx();

    return 0;
}