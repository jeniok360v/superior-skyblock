#pragma once

#include "MissionPack.hpp"

const std::string farmer_head = "";

static MissionPack mission
{
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
                } // Mission
            }
        } // MissionGroup
    }
}; // MissionPack
