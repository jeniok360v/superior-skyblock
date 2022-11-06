#pragma once

#include "MissionPack.hpp"

const std::string brewer1 = "eyJ0ZXh0dXJlcyI6eyJTS0lOIjp7InVybCI6Imh0dHA6Ly90ZXh0dXJlcy5taW5lY3JhZnQubmV0L3RleHR1cmUvOTI3YjdlY2VjMDIwZDVkYmViMzQyMGFkZjRiZDk1ZjRlNWE1MmI0NzdmNjVmNWJjNTAwMWJhYTE4Y2Y5YjlhNSJ9fX0=";

MissionPack brewerPack
{
    "brewer",
    {
        {
            "brewer", "Зельеварение", "PLAYER_HEAD", brewer1,
            {
                {
                    {},
                    "CraftingMissions", defaultOptions, {},
                    {{{"brewing_stand", "Зельеварочная стойка", 1, "Зельеварочная стойка, скрафчено"}}, {}, {}},
                    {500, {},
                    {},
                    }
                }, // Mission
                {
                    {},
                    "BrewingMissions", defaultOptions, {},
                    {{},{}, {{"weakness", "Взрывных зелья слабости I", "false", "false", "true", 2, "Не определено"}}},
                    {500, {},
                    {}
                    }
                }, // Mission
                {
                    {},
                    "CraftingMissions", defaultOptions, {},
                    {{{"golden_apple", "Золотое яблоко", 1, "Золотое яблоко, скрафчено"}}, {}, {}},
                    {200, {},
                    {},
                    }
                }, // Mission
                {
                    {},
                    "StatisticsMissions", defaultOptions, {},
                    {{{"traded_with_villager", "Сделок с жителями", 50, "Проведено сделок с жителями"}}, {}, {}},
                    {1500, {},
                    {},
                    }
                }, // Mission
                {
                    {},
                    "BrewingMissions", defaultOptions, {},
                    {{},{}, {{"INSTANT_HEAL", "Взрывных зелий лечения II", "true", "false", "true", 15, "Не определено"},
                    {"strength", "Зелий силы II", "true", "false", "false", 5, "Не определено"}}},
                    {2000, {},
                    {}
                    }
                }, // Mission
                {
                    {},
                    "StatisticsMissions", defaultOptions, {},
                    {{{"raid_win", "Побеждённых рейдов на деревню", 5, "Побеждено рейдов"}}, {}, {}},
                    {5000, {},
                    {},
                    }
                }, // Mission
                {
                    {},
                    "FarmingMissions", defaultRepeatableOptions, {},
                    {{{"nether_wart", "Адского нароста", 1000, "Собрано адского нароста"}}, {}, {}},
                    {1000, {},
                    {
                        {"soul_sand", "Песка душ", 30, "Получено песка душ"}
                    },
                    }
                }, // Mission
            }
        }, // MissionGroup
    }
}; // MissionPack
