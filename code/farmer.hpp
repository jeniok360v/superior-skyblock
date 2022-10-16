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
                    {},
                    "BlocksMissions", defaultOptions, {},
                    {},
                    {100, {{"unlockworld", "open world"}},
                    {
                        {"carrot", "Морковь", 121, "Вырастить морковки"}, {"potato", "Картошка", 112, "Вырастить картошки"}
                    }
                    }
                }, // Mission
            }
        }, // MissionGroup
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
        {
            "wheatTAG", "Фермер", "PLAYER_HEAD", farmer_head,
            {
                {
                    {},
                    "BlocksMissions", defaultOptions, {},
                    {{}},
                    {100, {},
                    {
                        {"carrot", "Морковь", 131, "Вырастить морковки"}, {"potato", "Картошка", 121, "Вырастить картошки"}
                    }
                    }
                }, // Mission
                {
                    {},
                    "CraftingMissions", defaultOptions, {},
                    {{{"crafting_Table", "верстак", 2, "скрафтить верстак"}, {"chest", "сундук", 3, "скрафтить сундук"}}},
                    {100, {{"give", "дасть денег"}, {"unlockworld", "open world"}},
                    {
                        {"carrot", "Морковь", 141, "Вырастить морковки"}, {"potato", "Картошка", 122, "Вырастить картошки"}
                    }
                    }
                }, // Mission                
                {
                    {},
                    "BlocksMissions", defaultOptions, {},
                    {{}},
                    {100, {},
                    {
                        {"carrot", "Морковь", 115, "Вырастить морковки"}, {"potato", "Картошка", 132, "Вырастить картошки"}
                    }
                    }
                }, // Mission                
                // dynamic_cast<FarmerMission*>
                {
                    {},
                    "BlocksMissions", defaultOptions, {},
                    {{}},
                    {100, {{"give", "дасть денег"}},
                    {
                        {"carrot", "Морковь", 111, "Вырастить морковки"}, {"potato", "Картошка", 124, "Вырастить картошки"}
                    }
                    },
                    // {"sfs", "saf"}
                }, // Mission
            }
        }, // MissionGroup
    }
}; // MissionPack
