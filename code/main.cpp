#include "MissionPackager.hpp"

const std::string missionsDir = "../plugins/SuperiorSkyblock2/modules/missions/categories/"; //extern
const std::string missionsConfigFile = "../plugins/SuperiorSkyblock2/modules/missions/config.yml";
const std::string missionsMenuFile = "../plugins/SuperiorSkyblock2/menus/missions.yml";

const std::string testMissionsDir = "../test/categories/";
const std::string testMissionsConfigFile = "../test/config.yml";
const std::string testMissionsMenuFile = "../test/missions.yml";

int main()
{
    MissionPackager packager;
    packager.printAllMissions(missionsDir, false);
    packager.printMissionsConfig(missionsConfigFile);
    packager.printMissionsMenu(missionsMenuFile);

    packager.printAllMissions(testMissionsDir, true);
    packager.printMissionsConfig(testMissionsConfigFile);
    packager.printMissionsMenu(testMissionsMenuFile);

    return 0;
}
