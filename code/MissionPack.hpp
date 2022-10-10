#pragma once

#include "MissionGroup.hpp"


class MissionPack
{
public:
    std::vector<MissionGroup> missionGroups;
    std::string packTag = "packTag";
};