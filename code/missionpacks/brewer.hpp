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
                    {{},{}, {{"weakness", "слабость 2", "false", "false", "false", 2, "тупа слабость"}}},
                    {100, {},
                    {}
                    }
                }, // Mission

//слабость
//золотые яблоки
//поторговаться
//отогнать рейд
//вырастить нароста
            }
        }, // MissionGroup
    }
}; // MissionPack
