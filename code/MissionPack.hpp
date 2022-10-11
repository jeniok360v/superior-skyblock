#pragma once

#include "MissionGroup.hpp"
#include <filesystem>
namespace fs = std::filesystem;


class MissionPack
{
public:
    std::string packTag;
    std::vector<MissionGroup> missionGroups;
    
    void makePackDirectory(std::string directory)
    {
        if(fs::exists(directory))
        {
            fs::remove_all(directory);
        }
        fs::create_directories(directory);
    }
    
    void printPack()
    {
        for (auto& missionGroup : missionGroups)
        {
            missionGroup.printGroup(packTag);
        }
    }
};

