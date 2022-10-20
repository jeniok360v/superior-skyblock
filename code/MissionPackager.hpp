#include "MissionPack.hpp"
#include "missionpacks/beginner.hpp"
#include "missionpacks/farmer.hpp"
#include "missionpacks/nether.hpp"

class MissionPackager
{
public:
    MissionPackager() 
    {
        allMissionPacks.insert(std::make_pair("beginner", beginnerPack));
        allMissionPacks.insert(std::make_pair("farmer", farmerPack));
        allMissionPacks.insert(std::make_pair("nether", netherPack));
    }
    std::map<std::string, MissionPack> allMissionPacks;
    
    void printAllMissions()
    {
        for (auto& [key, pack] : allMissionPacks)
        {
            pack.makePackDirectory(missionsDir + pack.packTag);
            pack.printPack();
        }
    }
};
