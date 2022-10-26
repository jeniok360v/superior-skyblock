// адский нарост
#pragma once

#include "MissionPack.hpp"

const std::string pigman1 = "eyJ0ZXh0dXJlcyI6eyJTS0lOIjp7InVybCI6Imh0dHA6Ly90ZXh0dXJlcy5taW5lY3JhZnQubmV0L3RleHR1cmUvMWVkODBiZjk5ZGZiMDc1MTkyYjAyYTVkZDZiZjkxZWRkZDRjYjFmNDgxODkyMzIxMjExZmUyMTQyZDlkZjIyYyJ9fX0=";
// const std::string food1 = "";


MissionPack pigmanPack
{
    "pigman",
    {
        {
            "pigman", "Адские создания", "PLAYER_HEAD", pigman1,
            {
                {
                    {},
                    "FarmingMissions", defaultOptions, {},
                    {{{"nether_wart", "Адского нароста", 9, "Собрано адского нароста"}}, {}, {}},
                    {300, {},
                    {
                        {"soul_sand", "Песка душ", 30, "Получено песка душ"}
                    },
                    }
                }, // Mission
                {
                    {},
                    "KillsMissions", defaultRepeatableOptions, {},
                    {{{"zombified_piglin", "Свинозомби", 600, "Убито свинозомби"}, 
                    {"ghast", "Гастов", 30, "Убито гастов"}}, {}, {}},
                    {1000, {},
                    {
                        {"blaze_rod", "Стерженя ифрита", 3, "Получено стрежней"}
                    },
                    }
                }, // Mission
            }
        }, // MissionGroup
    }
}; // MissionPack
