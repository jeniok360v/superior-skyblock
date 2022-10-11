#include "MissionPack.hpp"
#include "farmer.hpp"


class MissionPackager
{
public:
    MissionPackager() 
    {
        allMissionPacks.push_back(mission);
    }
    std::vector<MissionPack> allMissionPacks;
    
    printAllMissions();
    printPack();
};

