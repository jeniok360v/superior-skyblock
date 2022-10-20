#pragma once

#include "MissionPack.hpp"

const std::string farmer_head = "";

/*
    std::vector<std::string> missionDescription;
    std::string missionType;
    std::unordered_map<std::string, std::string> options;
    MissionAssociations associations;
    Goal goal;
    Reward reward;
*/

MissionPack farmerPack
{
    "farmer",
    {
        {
            "brewerTag", "варитель", "PLAYER_HEAD", farmer_head,
            {
                {
                    {},
                    "BrewingMissions", defaultOptions, {},
                    {{},{}, {{"speed", "скорость 2", "true", "true", "true", 3, "скорость 2 сплэш"}, {"weakness", "слабость 2", "false", "false", "false", 2, "тупа слабость"}}},
                    {100, {{"unlockworld", "открыт мир"}},
                    {
                        {"carrot", "Морковь", 121, "Вырастить морковки"}, {"potato", "Картошка", 112, "Вырастить картошки"}
                    }
                    }
                }, // Mission
            }
        }, // MissionGroup
    }
}; // MissionPack
