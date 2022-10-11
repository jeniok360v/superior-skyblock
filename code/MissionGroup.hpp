#pragma once

#include "Mission.hpp"
#include <fstream>

class MissionGroup
{
public:
    std::string groupTag;// = "groupTag";
    std::string groupName; //шахтёр
    std::string groupIcon; //PLAYER_HEAD
    std::string headTag; // eyJ...
    std::vector<Mission> missions;
    
    //groupDescription
    
    // void printMissionGroupIcon()
    // {
        // ofs << groupIcon
        // if groupIcon == "PLAYER_HEAD"
            // print headTag
    // }

    void printGroup(std::string packTag)
    {
        int k = 1;
        for (auto& mission : missions)
        {
            std::ofstream ofs(missionsDir + packTag + "/" + groupTag + "_" + std::to_string(k) + ".yml");
            k++;
            //missionGroup.printMission();
        }
    }

    // void printGroup()
    // {
        // for (auto& missionGroup : missionGroups)
        // {
            // std::ofstream ofs(missionsDir + groupTag + "/" groupTag  "test/a.txt");
            // missionGroup.printMission();
        // }
    // }
};
