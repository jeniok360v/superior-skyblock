#pragma once

#include "MissionPack.hpp"

const std::string headBeginner = "eyJ0ZXh0dXJlcyI6eyJTS0lOIjp7InVybCI6Imh0dHA6Ly90ZXh0dXJlcy5taW5lY3JhZnQubmV0L3RleHR1cmUvODQ0OWI5MzE4ZTMzMTU4ZTY0YTQ2YWIwZGUxMjFjM2Q0MDAwMGUzMzMyYzE1NzQ5MzJiM2M4NDlkOGZhMGRjMiJ9fX0=";
const std::string headDesertBeginner = "eyJ0ZXh0dXJlcyI6eyJTS0lOIjp7InVybCI6Imh0dHA6Ly90ZXh0dXJlcy5taW5lY3JhZnQubmV0L3RleHR1cmUvNDY0YjZiNjA2MmFjMzU4ZDMzM2YzNDIyNmYwYzlkZjhmMjg2ZjcxMjdlN2NiZGEzODZiOGFjOWU2NjJjMTcyMiJ9fX0=";
const std::string headMushroomBeginner = "eyJ0ZXh0dXJlcyI6eyJTS0lOIjp7InVybCI6Imh0dHA6Ly90ZXh0dXJlcy5taW5lY3JhZnQubmV0L3RleHR1cmUvN2JlYTM0ZDA4OWVlNjY2OTE3NjU5Y2ZkOWZlYWIxNDY4ZTcwMzdiYzUxZmJiMzM2ZWNmYTA4N2UwYjc4MTAzNiJ9fX0=";
const std::string food1 = "eyJ0ZXh0dXJlcyI6eyJTS0lOIjp7InVybCI6Imh0dHA6Ly90ZXh0dXJlcy5taW5lY3JhZnQubmV0L3RleHR1cmUvZjZkMDc4ZmVkOTJmOTQwNzI1MGY5YTZlNzZhMWRjZmUzOWZkNjMzZjllMDAzMTRhNzY3ZGU1ZGQ1MWM3MmVjOSJ9fX0=";
const std::string food2 = "eyJ0ZXh0dXJlcyI6eyJTS0lOIjp7InVybCI6Imh0dHA6Ly90ZXh0dXJlcy5taW5lY3JhZnQubmV0L3RleHR1cmUvZWQyMzhmNDI4NzljZDE4OGJjZjQ5ODkzMTA4ZjllZGEyM2U3NTAyNzRhN2QwMTM3MjZhNjNlMDhkYWI2YmUzZSJ9fX0=";
const std::string birch1 = "eyJ0ZXh0dXJlcyI6eyJTS0lOIjp7InVybCI6Imh0dHA6Ly90ZXh0dXJlcy5taW5lY3JhZnQubmV0L3RleHR1cmUvOGFiY2VhNjEzYzhkZWMzZjUyNjllZDljNzQ4NTBhZjE0M2IxNGYwOWI3MmNiN2Q5YzE3ZWM0OTA1ODZlZDcwNyJ9fX0=";
const std::string birch2 = "eyJ0ZXh0dXJlcyI6eyJTS0lOIjp7InVybCI6Imh0dHA6Ly90ZXh0dXJlcy5taW5lY3JhZnQubmV0L3RleHR1cmUvMTM4N2RjODQ0ZTk4ZWMyMmZjMzU1NTgzNGE5YTIxNjlhODZlNTg3MWNkODU0YjgyNGQxYjNhODI1NWFmYmUifX19";
const std::string birch3 = "eyJ0ZXh0dXJlcyI6eyJTS0lOIjp7InVybCI6Imh0dHA6Ly90ZXh0dXJlcy5taW5lY3JhZnQubmV0L3RleHR1cmUvMThlMTNiZmYzNmUxNmZjYmQ1MzZjODNkMjlkMDk3NzhkOGI5NWFlNWIxNmUzYmQwYzg2MjY1NjVkYTY1ZjM4NyJ9fX0=";
const std::string zombie1 = "eyJ0ZXh0dXJlcyI6eyJTS0lOIjp7InVybCI6Imh0dHA6Ly90ZXh0dXJlcy5taW5lY3JhZnQubmV0L3RleHR1cmUvZjhlNjYyMzljNmYzYzk3YjhiYWE1MGIzMmVmZDYzYzYxZTk0ZThlZGU2MDY2NGU3YjllZGM0ZWZkNjRmMzk2MyJ9fX0=";
// const std::string zombie1 = "";
// const std::string zombie1 = "";



MissionPack beginnerPack
{
    "beginner",
    {
        {
            "beginner", "Начало", "PLAYER_HEAD", headBeginner,
            {
                {
                    {},
                    "CraftingMissions", defaultOptions, {},
                    {{{"wooden_pickaxe", "Деревянная кирка", 1, "Деревянная кирка, скрафчено"}}, {}, {}},
                    {200, {},
                    {},
                    }
                }, // Mission
                {
                    {"Постройте генератор и добудьте из него булыжник"},
                    "BlocksMissions", defaultNaturalBlocksOptions, {},
                    {{{"cobblestone", "Булыжник", 3/*90*/, "Добыто булыжника"}}, {}, {}},
                    {300, {},
                    {
                        {"hopper", "Воронка", 1, "Получено воронок"}
                    },
                    }
                }, // Mission                
                {
                    {},
                    "BlocksMissions", defaultNaturalBlocksOptions, {},
                    {{{"cobblestone", "Булыжник", 3/*200*/, "Добыто булыжника"}}, {}, {}},
                    {500, {{"is admin rankup %player% generator-rates", "Улучшение генератора булыжника"}},
                    {},
                    }
                }, // Mission
            }
        }, // MissionGroup
        {
            "birch", "Берёзовая роща", "PLAYER_HEAD", birch2,
            {
                {
                    {},
                    "BlocksMissions", defaultNaturalBlocksOptions, {},
                    {{{"birch_log", "Берёзовые брёвна", 5, "Срублено берёзы"}}},
                    {250, {},
                    {
                        {"birch_sapling", "Саженцы берёзы", 3, "Получено саженцев берёзы"}
                    }
                    }
                }, // Mission
                {
                    {},
                    "BlocksMissions", defaultNaturalBlocksOptions, {},
                    {{{"birch_log", "Берёзовые брёвна", 15, "Срублено берёзы"}}},
                    {1000, {},
                    {
                        {"birch_sapling", "Саженцы берёзы", 2, "Получено саженцев берёзы"}
                    }
                    }
                }, // Mission
            }
        }, // MissionGroup
        {
            "food", "Пора подумать о еде", "PLAYER_HEAD", food1,
            {
                {
                    {},
                    "CraftingMissions", defaultOptions, {},
                    {{{"stone_hoe", "Каменная мотыга", 1, "Каменная мотыга, скрафчено"}}, {}, {}},
                    {300, {},
                    {
                        {"wheat_seeds", "Семена пшеницы", 10, "Получено семян"}
                    },
                    }
                }, // Mission
                {
                    {"Испеките немного хлеба"},
                    "CraftingMissions", defaultOptions, {},
                    {{{"bread", "Хлеб", 15, "Сделано хлеба"}}, {}, {}},
                    {500, {},
                    {
                        {"beetroot_seeds", "Семена свеклы", 15, "Получено семян"}
                    },
                    }
                }, // Mission
                {
                    {},
                    "FarmingMissions", defaultOptions, {},
                    {{{"beetroots", "Свекла", 60, "Выращено свеклы"}}, {}, {}},
                    {900, {},
                    {},
                    }
                }, // Mission
            }
        }, // MissionGroup
        {
            "killer", "Нечисть", "PLAYER_HEAD", zombie1,
            {
                {
                    {},
                    "KillsMissions", defaultOptions, {},
                    {{{"zombie", "Зомби", 5, "Зомби убито"}}, {}, {}},
                    {200, {},
                    {},
                    }
                }, // Mission
                {
                    {},
                    "KillsMissions", defaultOptions, {},
                    {{{"zombie", "Зомби", 8, "Зомби убито"}, 
                    {"skeleton", "Скелет", 10, "Скелетов убито"}, 
                    {"creeper", "Крипер", 15, "Криперов убито"}, 
                    {"spider", "Паук", 8, "Пауков убито"}}, {}, {}},
                    {500, {},
                    {},
                    }
                }, // Mission
                {
                    {},
                    "KillsMissions", defaultOptions, {},
                    {{{"zombie", "Зомби", 15, "Зомби убито"}, 
                    {"enderman", "Эндермен", 1, "Эндерменов убито"}, 
                    {"phantom", "Фантом", 3, "Фантомов убито"}, 
                    {"skeleton", "Скелет", 25, "Скелетов убито"}, 
                    {"creeper", "Крипер", 25, "Криперов убито"}, 
                    {"spider", "Паук", 20, "Пауков убито"}}, {}, {}},
                    {1000, {},
                    {},
                    }
                }, // Mission
            }
        }, // MissionGroup
    }
}; // MissionPack
