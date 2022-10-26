#pragma once

#include "MissionPack.hpp"

const std::string test1 = "eyJ0ZXh0dXJlcyI6eyJTS0lOIjp7InVybCI6Imh0dHA6Ly90ZXh0dXJlcy5taW5lY3JhZnQubmV0L3RleHR1cmUvMWVkODBiZjk5ZGZiMDc1MTkyYjAyYTVkZDZiZjkxZWRkZDRjYjFmNDgxODkyMzIxMjExZmUyMTQyZDlkZjIyYyJ9fX0=";
// const std::string pigman2 = "";


MissionPack testPack
{
    "test",
    {
        {
            "test", "Тестовые миссии", "PLAYER_HEAD", pigman1,
            {
                {
                    {},
                    "StatisticsMissions", defaultOptions, {},
                    {{{"boat_one_cm", "Метров проплыть на лодке", 10000, "Проплыто метров"}}, {}, {}},
                    {1500, {},
                    {
                        // {"obsidian", "Обсидиана", 10, "Получено обсидиана"},
                    },
                    }
                }, // Mission

                {
                    {},
                    "StatisticsMissions", defaultRepeatableOptions, {},
                    {{{"bell_ring", "Раз постучать в колокол", 10, "Сделано ударов в колокол"}}, {}, {}},
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
