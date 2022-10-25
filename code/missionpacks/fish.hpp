#pragma once

#include "MissionPack.hpp"

const std::string fish1 = "eyJ0ZXh0dXJlcyI6eyJTS0lOIjp7InVybCI6Imh0dHA6Ly90ZXh0dXJlcy5taW5lY3JhZnQubmV0L3RleHR1cmUvMTNhMWQxODBlODcwOTE3YTBiNmUwMzlkMTkxYzMwM2MxNGU0NGZkMjhkYWIyY2QyNmNlN2E1ZDk4MzNhZTllNSJ9fX0=";
const std::string fish2 = "eyJ0ZXh0dXJlcyI6eyJTS0lOIjp7InVybCI6Imh0dHA6Ly90ZXh0dXJlcy5taW5lY3JhZnQubmV0L3RleHR1cmUvYzc0MGZhMWZhOTA5MmUzNjhlNjc5OGY5YmNmZThjODMxOGUwMzk5NmEyMDJiZWFlOTE5ZTVjYjkwMDAzOWQ0YyJ9fX0=";
const std::string fish3 = "eyJ0ZXh0dXJlcyI6eyJTS0lOIjp7InVybCI6Imh0dHA6Ly90ZXh0dXJlcy5taW5lY3JhZnQubmV0L3RleHR1cmUvMjBhNWJiMDcxNjQ3MzlhMmZjNjRlMjFiNjI5Yzk5OWZkMDVhMzEzOTk5MDk4NTEwODRiZWEyYTBjN2ZjMjRiZCJ9fX0=";

MissionPack fishPack
{
    "fish",
    {
        {
            "fish", "Рыбалка", "PLAYER_HEAD", fish1,
            {
                {
                    {},
                    "FishingMissions", defaultOptions, {},
                    {{{"cod", "Трески", 5, "Выловлено трески"},
                    {"salmon", "Лосося", 5, "Выловлено лосося"} }, {}, {}},
                    {300, {},
                    {},
                    }
                }, // Mission
                {
                    {},
                    "FishingMissions", defaultOptions, {},
                    {{{"cod", "Трески", 20, "Выловлено трески"},
                    {"salmon", "Лосося", 4, "Выловлено лосося"},
                    {"pufferfish", "Иглобрюха", 2, "Выловлено иглобрюхов"}}, {}, {}},
                    {500, {},
                    {},
                    }
                }, // Mission
                {
                    {},
                    "FishingMissions", defaultOptions, {},
                    {{{"tropical_fish", "Рыба-клоун", 1, "Выловлено рыб-клоунов"}}, {}, {}},
                    {1000, {},
                    {},
                    }
                }, // Mission
            }
        }, // MissionGroup
    }
}; // MissionPack
