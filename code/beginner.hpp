#pragma once

#include "MissionPack.hpp"

const std::string beginner_head = "";

MissionPack beginnerPack
{
    "beginnerTest",
    {
        {
            "beginTAG", "начало", "PLAYER_HEAD", beginner_head,
            {
                {
                    {"default mission description"},
                    "BlocksMissions", defaultOptions, {},
                    {{{"beetroots", "бурак", 3, "добыть бурак"}, {"potato", "картошка", 2, "собери Картошка"}}, {}, {}},
                    {100, {{"give", "дасть денег"}, {"unlockworld", "open world"}},
                    {
                        {"beetroots", "бурак", 3, "добыть бурак"}, {"potato", "картошка", 2, "собери Картошка"}
                    }
                    }
                }, // Mission
            }
        }, // MissionGroup
        {
            "beginnerTAG", "начальник", "PLAYER_HEAD", beginner_head,
            {
                {
                    {},
                    "BlocksMissions", defaultOptions, {},
                    {{}},
                    {100, {{"give", "дасть денег"}},
                    {
                        {"beetroots", "бурак", 32, "добыть бурак"}, {"potato", "картошка", 12, "собери Картошка"}
                    }
                    }
                }, // Mission
                {
                    {},
                    "BlocksMissions", defaultOptions, {},
                    {{}},
                    {100, {{"unlockworld", "open world"}},
                    {
                        {"beetroots", "бурак", 31, "добыть бурак"}, {"potato", "картошка", 11, "собери Картошка"}
                    }
                }, // Mission
                    }
            }
        }, // MissionGroup
    }
}; // MissionPack
