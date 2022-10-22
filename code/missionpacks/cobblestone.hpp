#pragma once

#include "MissionPack.hpp"

const std::string cobblestone1 = "eyJ0ZXh0dXJlcyI6eyJTS0lOIjp7InVybCI6Imh0dHA6Ly90ZXh0dXJlcy5taW5lY3JhZnQubmV0L3RleHR1cmUvMjA1MGRlNTcyY2Y4YmYxNDk2YjUyNzg1YWQzNDlkMDJhY2RkYTY0NDc5YjFiZTc1MDkzZTlhMWY3OTI4ZGQyIn19fQ==";

MissionPack cobblestonePack
{
    "cobblestone",
    {
        {
            "cobblestone", "Булыжник", "PLAYER_HEAD", cobblestone1,
            {
                {
                    {"Постройте генератор и добудьте из него булыжник"},
                    "BlocksMissions", defaultNaturalBlocksOptions, {},
                    {{{"cobblestone", "Булыжник", 20, "Добыто булыжника"}}, {}, {}},
                    {200, {},
                    {
                        {"hopper", "Воронка", 1, "Получено воронок"}
                    },
                    }
                }, // Mission  
                {
                    {},
                    "BlocksMissions", defaultNaturalBlocksOptions, {},
                    {{{"cobblestone", "Булыжник", 40, "Добыто булыжника"}}, {}, {}},
                    {300, {},
                    {},
                    }
                }, // Mission                
                {
                    {},
                    "BlocksMissions", defaultNaturalBlocksOptions, {},
                    {{{"cobblestone", "Булыжник", 200, "Добыто булыжника"}}, {}, {}},
                    {500, {{"is admin rankup %player% generator-rates", "Улучшение генератора булыжника"}},
                    {},
                    }
                }, // Mission
                {
                    {},
                    "BlocksMissions", defaultNaturalBlocksOptions, {},
                    {{{"cobblestone", "Булыжник", 250, "Добыто булыжника"}}, {}, {}},
                    {500, {},
                    {},
                    }
                }, // Mission
                {
                    {},
                    "BlocksMissions", defaultNaturalBlocksOptions, {},
                    {{{"cobblestone", "Булыжник", 500, "Добыто булыжника"}}, {}, {}},
                    {800, {},
                    {},
                    }
                }, // Mission
                {
                    {},
                    "BlocksMissions", defaultNaturalBlocksOptions, {},
                    {{{"cobblestone", "Булыжник", 600, "Добыто булыжника"}}, {}, {}},
                    {1000, {},
                    {},
                    }
                }, // Mission
                {
                    {},
                    "BlocksMissions", defaultNaturalBlocksOptions, {},
                    {{{"cobblestone", "Булыжник", 800, "Добыто булыжника"}}, {}, {}},
                    {1000, {{"is admin rankup %player% generator-rates", "Улучшение генератора булыжника"}},
                    {},
                    }
                }, // Mission
                {
                    {},
                    "BlocksMissions", defaultNaturalBlocksOptions, {},
                    {{{"cobblestone", "Булыжник", 1000, "Добыто булыжника"}}, {}, {}},
                    {1500, {},
                    {},
                    }
                }, // Mission
                {
                    {},
                    "BlocksMissions", defaultRepeatableOptions, {},
                    {{{"cobblestone", "Булыжник", 5000, "Добыто булыжника"}}, {}, {}},
                    {500, {},
                    {},
                    }
                }, // Mission
            }
        }, // MissionGroup
    }
}; // MissionPack
