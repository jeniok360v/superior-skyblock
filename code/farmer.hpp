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
                    "BlocksMissions", defaultOptions, {},
                    {{}},
                    {100, {"give", "unlockworld"},
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
                    "BlocksMissions", defaultOptions, {},
                    {{}},
                    {100, {"give", "unlockworld"},
                    {
                        {"carrot", "Морковь", 131, "Вырастить морковки"}, {"potato", "Картошка", 121, "Вырастить картошки"}
                    }
                    }
                }, // Mission
                {
                    "BlocksMissions", defaultOptions, {},
                    {{}},
                    {100, {"give", "unlockworld"},
                    {
                        {"carrot", "Морковь", 141, "Вырастить морковки"}, {"potato", "Картошка", 122, "Вырастить картошки"}
                    }
                    }
                }, // Mission                
                {
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
                    "BlocksMissions", defaultOptions, {},
                    {{}},
                    {100, {"give"},
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
