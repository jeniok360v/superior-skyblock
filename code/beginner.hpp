#pragma once

#include "MissionPack.hpp"

const std::string beginner_head = "";

MissionPack beginnerPack
{
    "beginnerTest",
    {
        {
            "beginTAG", "начало", "PLAYER_HEAD", farmer_head,
            {
                {
                    MissionType.at("blocks"), defaultOptions, {},
                    {"goalStr"},
                    {100, {"give", "unlockworld"},
                    {
                        {"beetroots", 32, "Морковь"}, {"potato", 11, "Картошка"}
                    }
                    }
                }, // Mission
            }
        }, // MissionGroup
        {
            "beginnerTAG", "начальник", "PLAYER_HEAD", farmer_head,
            {
                {
                    MissionType.at("blocks"), defaultOptions, {},
                    {"goalStr"},
                    {100, {"give", "unlockworld"},
                    {
                        {"beetroots", 30, "Морковь"}, {"potato", 11, "Картошка"}
                    }
                    }
                }, // Mission
                {
                    MissionType.at("blocks"), defaultOptions, {},
                    {"goalStr"},
                    {100, {"give", "unlockworld"},
                    {
                        {"beetroots", 31, "Морковь"}, {"potato", 11, "Картошка"}
                    }
                    }
                }, // Mission
            }
        }, // MissionGroup
    }
}; // MissionPack
