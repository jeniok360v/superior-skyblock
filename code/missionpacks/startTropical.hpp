#pragma once

#include "MissionPack.hpp"

const std::string startTropical1 = "eyJ0ZXh0dXJlcyI6eyJTS0lOIjp7InVybCI6Imh0dHA6Ly90ZXh0dXJlcy5taW5lY3JhZnQubmV0L3RleHR1cmUvODQ0OWI5MzE4ZTMzMTU4ZTY0YTQ2YWIwZGUxMjFjM2Q0MDAwMGUzMzMyYzE1NzQ5MzJiM2M4NDlkOGZhMGRjMiJ9fX0=";

MissionPack startTropicalPack
{
    "startTropical",
    {
        {
            "startTropical", "Начало", "PLAYER_HEAD", startTropical1,
            {
                {
                    {},
                    "BlocksMissions", defaultNaturalBlocksOptions, {},
                    {{{"jungle_wood", "Тропическое дерево", 5, "Добыто тропического дерева"}}, {}, {}},
                    {200, {},
                    {
                        {"jungle_sapling", "Саженец тропического дерева", 4, "Получено саженцев"}
                    },
                    }
                }, // Mission 
                {
                    {},
                    "CraftingMissions", defaultOptions, {},
                    {{{"wooden_pickaxe", "Деревянная кирка", 1, "Деревянная кирка, скрафчено"}}, {}, {}},
                    {200, {},
                    {
                        {"ice", "Лёд", 1, "Получено льда"},
                        {"lava_bucket", "Ведро лавы", 1, "Получено вёдер лавы"},
                    },
                    }
                }, // Mission
                {
                    {},
                    "BlocksMissions", defaultNaturalBlocksOptions, {},
                    {{{"jungle_log", "Тропическая древесина", 25, "Добыто тропической древесины"}}, {}, {}},
                    {250, {},
                    {
                        {"jungle_sapling", "Саженец тропического дерева", 3, "Получено саженцев"},
                        {"dirt", "Земля", 20, "Получено земли"},
                    },
                    }
                }, // Mission 
                {
                    {},
                    "BlocksMissions", defaultNaturalBlocksOptions, {},
                    {{{"jungle_log", "Тропическая древесина", 50, "Добыто тропической древесины"}}, {}, {}},
                    {500, {},
                    {
                        {"birch_sapling", "Саженцы берёзы", 3, "Получено саженцев"},
                        {"dirt", "Земля", 10, "Получено земли"},
                        {"water_bucket", "Ведро воды", 1, "Получено вёдер"},
                    },
                    }
                }, // Mission
            }
        }, // MissionGroup
    }
}; // MissionPack
