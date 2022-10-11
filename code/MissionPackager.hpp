#include "MissionPack.hpp"
#include "beginner.hpp"
#include "farmer.hpp"

class MissionPackager
{
public:
    MissionPackager() 
    {
        allMissionPacks.insert(std::make_pair("beginner", beginnerPack));
        allMissionPacks.insert(std::make_pair("farmer", farmerPack));
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
