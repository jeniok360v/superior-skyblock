#pragma once

#include "MissionPack.hpp"

const std::string fish1 = "eyJ0ZXh0dXJlcyI6eyJTS0lOIjp7InVybCI6Imh0dHA6Ly90ZXh0dXJlcy5taW5lY3JhZnQubmV0L3RleHR1cmUvMTNhMWQxODBlODcwOTE3YTBiNmUwMzlkMTkxYzMwM2MxNGU0NGZkMjhkYWIyY2QyNmNlN2E1ZDk4MzNhZTllNSJ9fX0=";
const std::string fish2 = "eyJ0ZXh0dXJlcyI6eyJTS0lOIjp7InVybCI6Imh0dHA6Ly90ZXh0dXJlcy5taW5lY3JhZnQubmV0L3RleHR1cmUvYzc0MGZhMWZhOTA5MmUzNjhlNjc5OGY5YmNmZThjODMxOGUwMzk5NmEyMDJiZWFlOTE5ZTVjYjkwMDAzOWQ0YyJ9fX0=";
const std::string fish3 = "eyJ0ZXh0dXJlcyI6eyJTS0lOIjp7InVybCI6Imh0dHA6Ly90ZXh0dXJlcy5taW5lY3JhZnQubmV0L3RleHR1cmUvMjBhNWJiMDcxNjQ3MzlhMmZjNjRlMjFiNjI5Yzk5OWZkMDVhMzEzOTk5MDk4NTEwODRiZWEyYTBjN2ZjMjRiZCJ9fX0=";




MissionPack beginnerPack
{
    "beginner",
    {
        {
            "fisher", "Рыбалка", "PLAYER_HEAD", fish1,
            {
                {
                    {},
                    "FishingMissions", defaultOptions, {},
                    {{{"cod", "Треска", 10, "Выловлено трески"}, 
                    {"salmon", "Лосось", 10, "Выловлено лосося"} }, {}, {}},
                    {300, {},
                    {},
                    }
                }, // Mission
            }
        }, // MissionGroup
    }
}; // MissionPack
