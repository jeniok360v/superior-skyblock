#include "MissionPack.hpp"
#include "farmer.hpp"

class MissionPackager
{
public:
    MissionPackager() 
    {
        allMissionPacks.insert(std::make_pair("farmer", farmerPack));
    }
    std::map<std::string, MissionPack> allMissionPacks;
    
        // printAllMissions();
        // printPack();
};

