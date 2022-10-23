#include "MissionPack.hpp"
#include "missionpacks/startTropical.hpp"
#include "missionpacks/startMushroom.hpp"
#include "missionpacks/startDesert.hpp"
#include "missionpacks/cobblestone.hpp"
#include "missionpacks/farmer.hpp"
#include "missionpacks/autumn.hpp"
#include "missionpacks/pigman.hpp"

class MissionPackager
{
public:
    MissionPackager() 
    {
        allMissionPacks.insert(std::make_pair("startTropical", startTropicalPack));
        allMissionPacks.insert(std::make_pair("startMushroom", startMushroomPack));
        allMissionPacks.insert(std::make_pair("startDesert", startDesertPack));
        allMissionPacks.insert(std::make_pair("cobblestone", cobblestonePack));
        allMissionPacks.insert(std::make_pair("farmer", farmerPack));
        allMissionPacks.insert(std::make_pair("autumn", autumnPack));
        allMissionPacks.insert(std::make_pair("pigman", pigmanPack));
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
