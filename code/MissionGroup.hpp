#pragma once

#include "Mission.hpp"


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
};
