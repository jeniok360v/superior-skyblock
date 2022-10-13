#pragma once

#include "MissionPack.hpp"

const std::string farmer_head = "";

MissionPack farmerPack
{
    "farmerTest",
    {
        {
            "farmerTAG", "Фермер", "PLAYER_HEAD", farmer_head,
            {
                {
                    MissionType.at("blocks"), defaultOptions, {},
                    {"goalStr"},
                    {100, {"give", "unlockworld"},
                    {
                        {"carrot", 22, "Морковь"}, {"potato", 11, "Картошка"}
                    }
                    }
                }, // Mission
            }
        }, // MissionGroup
        {
            "wheatTAG", "Фермер", "PLAYER_HEAD", farmer_head,
            {
                {
                    MissionType.at("blocks"), defaultOptions, {},
                    {"goalStr"},
                    {100, {"give", "unlockworld"},
                    {
                        {"wheat", 10, "Морковь"}, {"potato", 11, "Картошка"}
                    }
                    }
                }, // Mission
                {
                    MissionType.at("blocks"), defaultOptions, {},
                    {"goalStr"},
                    {100, {"give", "unlockworld"},
                    {
                        {"carrot", 11, "Морковь"}, {"potato", 11, "Картошка"}
                    }
                    }
                }, // Mission                
                {
                    MissionType.at("blocks"), defaultOptions, {},
                    {"goalStr"},
                    {100, {},
                    {
                        {"carrot", 11, "Морковь"}, {"potato", 11, "Картошка"}
                    }
                    }
                }, // Mission                
                {
                    MissionType.at("blocks"), defaultOptions, {},
                    {"goalStr"},
                    {100, {"give"},
                    {
                        {"carrot", 11, "Морковь"}, {"potato", 11, "Картошка"}
                    }
                    }
                }, // Mission
            }
        }, // MissionGroup
    }
}; // MissionPack
