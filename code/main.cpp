#include "MissionPackager.hpp"

const std::string missionsDir = "../plugins/SuperiorSkyblock2/modules/missions/categories/"; //extern
const std::string testMissionsDir = "../test/categories/"; //extern

int main()
{
    MissionPackager packager;
    packager.printAllMissions(missionsDir, false);
    packager.printAllMissions(testMissionsDir, true);

    return 0;
}
