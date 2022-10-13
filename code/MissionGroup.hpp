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
        for (int i = 0; i < missions.size(); i++)
        {
            std::ofstream ofs(missionsDir + packTag + "/" + groupTag + "_" + std::to_string(i+1) + ".yml");
            missions.at(i).printMission(ofs, i+1, groupTag, groupName);
            ofs.close();
        }
    }
};
