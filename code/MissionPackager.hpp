#include "MissionPack.hpp"
#include "missionpacks/startTropical.hpp"
#include "missionpacks/startMushroom.hpp"
#include "missionpacks/startDesert.hpp"
#include "missionpacks/cobblestone.hpp"
#include "missionpacks/farmer.hpp"
#include "missionpacks/autumn.hpp"
#include "missionpacks/fish.hpp"
#include "missionpacks/undead.hpp"

#include "missionpacks/grove.hpp"
#include "missionpacks/forest.hpp"

#include "missionpacks/pigman.hpp"

#include "missionpacks/test.hpp"

std::vector<std::string> menuPattern(54, "%");
// std::fill(menuPattern.begin(), menuPattern.end(), "*");   // (*) means empty

std::vector<std::string> patternFiller = {
    "a", "b", "c", "d", "e", "f", "g", "h", "i",
    "j", "k", "l", "m", "n", "o", "p", "q", "r",
    "s", "t", "u", "v", "w", "x", "y", "z", "0",
    "A", "B", "C", "D", "E", "F", "G", "H", "I",
    "J", "K", "L", "M", "N", "O", "P", "Q", "R",
    "S", "T", "U", "V", "W", "X", "Y", "Z", "1"
};

/*
// +----+----+----+----+----+----+----+----+----+
// | 0  | 1  | 2  | 3  | 4  | 5  | 6  | 7  | 8  |
// +----+----+----+----+----+----+----+----+----+
// | 9  | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 |
// +----+----+----+----+----+----+----+----+----+
// | 18 | 19 | 20 | 21 | 22 | 23 | 24 | 25 | 26 |
// +----+----+----+----+----+----+----+----+----+
// | 27 | 28 | 29 | 30 | 31 | 32 | 33 | 34 | 35 |
// +----+----+----+----+----+----+----+----+----+
// | 36 | 37 | 38 | 39 | 40 | 41 | 42 | 43 | 44 |
// +----+----+----+----+----+----+----+----+----+
// | 45 | 46 | 47 | 48 | 49 | 50 | 51 | 52 | 53 |
// +----+----+----+----+----+----+----+----+----+
*/

class MissionPackager
{
public:
    MissionPackager()
    {
        allMissionPacks.insert(std::make_pair(9, startTropicalPack));
        allMissionPacks.insert(std::make_pair(10, startMushroomPack));
        allMissionPacks.insert(std::make_pair(11, startDesertPack));
        allMissionPacks.insert(std::make_pair(12, cobblestonePack));
        allMissionPacks.insert(std::make_pair(13, farmerPack));
        allMissionPacks.insert(std::make_pair(14, autumnPack));
        allMissionPacks.insert(std::make_pair(15, fishPack));
        allMissionPacks.insert(std::make_pair(16, undeadPack));

        allMissionPacks.insert(std::make_pair(18, grovePack));
        allMissionPacks.insert(std::make_pair(19, forestPack));

        allMissionPacks.insert(std::make_pair(27, pigmanPack));

        allMissionPacks.insert(std::make_pair(44, testPack));
    }
    std::map<int, MissionPack> allMissionPacks;
    
    void printAllMissions(std::string missionsDir, bool isTest)
    {
        for (auto& [key, pack] : allMissionPacks)
        {
            pack.makePackDirectory(missionsDir + pack.packTag);
            pack.printPack(missionsDir, isTest);
        }
    }
    
    void printMissionsConfig(std::string configDir)
    {
        std::ofstream ofs(configDir);
        ofs << "# https://wiki.bg-software.com/superiorskyblock/missions" << std::endl << std::endl;
        ofs << "enabled: true" << std::endl << std::endl;

        ofs << "categories:" << std::endl;
        for (auto& [key, pack] : allMissionPacks)
        {
            ofs << "  " + pack.packTag + ":" << std::endl;
            ofs << "    name: " + pack.missionGroups.at(0).groupName << std::endl;
            ofs << "    slot: " + std::to_string(key) << std::endl;
            // ofs << std::endl;
        }
        ofs.close();
    }

    void printMissionsMenu(std::string menuDir)
    {
        std::ofstream ofs(menuDir);

        ofs << "title: '&lМиссии'" << std::endl;
        ofs << "previous-menu: true" << std::endl << std::endl;
        ofs << "pattern:" << std::endl;

        //remove later
        for(int i = 0; i < 9; i++)
        {
            menuPattern.at(i) = "$";
        }
        for(int i = 45; i < 54; i++)
        {
            menuPattern.at(i) = "$";
        }

        for (auto& [key, pack] : allMissionPacks)
        {
            menuPattern.at(key) = patternFiller.at(key);
        }
        
        for(int line = 0; line < 6; line++)
        {
            ofs << "  - '";
            for(int character = 0; character < 8; character++)
            {
                ofs << menuPattern.at(line*9 + character) + " ";
            }
            ofs << menuPattern.at(line*9 + 8) + "'" << std::endl;
        }
        ofs << std::endl;

        ofs << "items:" << std::endl;
        ofs << "  '$':" << std::endl;
        ofs << "    type: BLACK_STAINED_GLASS_PANE" << std::endl;
        ofs << "    name: '&f'" << std::endl;
        ofs << "  '%':" << std::endl;
        ofs << "    type: LIME_STAINED_GLASS_PANE" << std::endl;
        ofs << "    name: '&f'" << std::endl;
        for(int i = 0; i < menuPattern.size(); i++)
        {
            std::string c = menuPattern.at(i);
            if(c != "*" && c != "$" && c != "%")
            {
                ofs << "  '" + c + "':" << std::endl;
                ofs << "    type: PLAYER_HEAD" << std::endl;
                ofs << "    skull: '" + allMissionPacks[i].missionGroups.at(0).headTag + "'" << std::endl;
                ofs << "    name: '&e" + allMissionPacks[i].missionGroups.at(0).groupName + "'" << std::endl;
                ofs << "    lore:" << std::endl;
                ofs << "      - '&7Нажмите, чтобы начать миссии'" << std::endl;
            }
        }
        ofs << std::endl;

        ofs << "sounds:" << std::endl;
        for(int i = 0; i < menuPattern.size(); i++)
        {
            std::string c = menuPattern.at(i);
            if(c != "*" && c != "$" && c != "%")
            {
                ofs << "  '" + c + "':" << std::endl;
                ofs << "    type: BLOCK_CHEST_OPEN" << std::endl;
                ofs << "    volume: 0.6" << std::endl;
                ofs << "    pitch: 1" << std::endl;
            }
        }
    }
};









