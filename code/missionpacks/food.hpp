#pragma once

#include "MissionPack.hpp"

const std::string food1 = "eyJ0ZXh0dXJlcyI6eyJTS0lOIjp7InVybCI6Imh0dHA6Ly90ZXh0dXJlcy5taW5lY3JhZnQubmV0L3RleHR1cmUvY2E5Yzg3NTM3ODBlYmMzOWMzNTFkYThlZmQ5MWJjZTkwYmQ4Y2NhN2I1MTFmOTNlNzhkZjc1ZjY2MTVjNzlhNiJ9fX0=";
const std::string food2 = "eyJ0ZXh0dXJlcyI6eyJTS0lOIjp7InVybCI6Imh0dHA6Ly90ZXh0dXJlcy5taW5lY3JhZnQubmV0L3RleHR1cmUvMTU5MWI2MTUyOWQyNWE3ZWNkNmJlYzAwOTQ4ZTZmZTE1NWUzMDA3ZjJkN2ZlNTU5ZjNhODNjNmY4MDhlNDM0ZCJ9fX0=";
const std::string food3 = "eyJ0ZXh0dXJlcyI6eyJTS0lOIjp7InVybCI6Imh0dHA6Ly90ZXh0dXJlcy5taW5lY3JhZnQubmV0L3RleHR1cmUvZTU3MTZmNDA4MDg0OGFhNGI3OWRhMzcwNmI5NGU3YjcyZmU0YjFiZDY0OTM4YzA4Y2Q1YzAzYWUzYjczNTk5In19fQ==";
const std::string food4 = "eyJ0ZXh0dXJlcyI6eyJTS0lOIjp7InVybCI6Imh0dHA6Ly90ZXh0dXJlcy5taW5lY3JhZnQubmV0L3RleHR1cmUvZTJmNTYzOGMyMTNlYTJhNWE5NGU2NTk4MTY2YmM0N2VlZWI0MGY1ZGY4NGRhNzBjZDkyMzNjMTgxMmRmMTEwIn19fQ==";
const std::string food5 = "eyJ0ZXh0dXJlcyI6eyJTS0lOIjp7InVybCI6Imh0dHA6Ly90ZXh0dXJlcy5taW5lY3JhZnQubmV0L3RleHR1cmUvZGE3MjE1ODA1ZmJhZGJlMThkNDZjYzFhNjFlZjIxNjI1Y2FmYTJiMjlkOGJlN2VjMjE1NDVhZDQ4YzA4OCJ9fX0=";

MissionPack foodPack
{
    "food",
    {
        {
            "food", "Звезда Мишлен", "PLAYER_HEAD", food5,
            {
                {
                    {},
                    "CraftingMissions", defaultOptions, {},
                    {{{"beetroot_soup", "Свекольного супа", 100, "Сварено свекольного супа"}}, {}, {}},
                    {2000, {},
                    {},
                    }
                }, // Mission
                {
                    {},
                    "CraftingMissions", defaultOptions, {},
                    {{{"mushroom_stew", "Грибного супа", 100, "Сварено грибного супа"}}, {}, {}},
                    {2000, {},
                    {},
                    }
                }, // Mission
                {
                    {},
                    "CraftingMissions", defaultOptions, {},
                    {{{"pumpkin_pie", "Тыквенного пирога", 200, "Скрафчено тыквенного пирога"}}, {}, {}},
                    {3000, {},
                    {},
                    }
                }, // Mission
                {
                    {},
                    "CraftingMissions", defaultOptions, {},
                    {{{"cookie", "Печенья", 1000, "Сделано печенья"}}, {}, {}},
                    {2500, {},
                    {},
                    }
                }, // Mission
                {
                    {},
                    "CraftingMissions", defaultOptions, {},
                    {{{"bread", "Хлеба", 400, "Скрафчено хлеба"}}, {}, {}},
                    {3000, {},
                    {},
                    }
                }, // Mission
                {
                    {},
                    "CraftingMissions", defaultOptions, {},
                    {{{"honeycomb_block", "Блоков пчелиных сот", 80, "Скрафчено блоков пчелиных сот"}}, {}, {}},
                    {2000, {},
                    {},
                    }
                }, // Mission
                {
                    {},
                    "CraftingMissions", defaultOptions, {},
                    {{{"cake", "Тортов", 50, "Испечено тортов"}}, {}, {}},
                    {3000, {},
                    {},
                    }
                }, // Mission
                {
                    {},
                    "CraftingMissions", defaultOptions, {},
                    {{{"golden_apple", "Золотых яблок", 150, "Скрафчено золотых яблок"}}, {}, {}},
                    {4000, {},
                    {},
                    }
                }, // Mission
                {
                    {},
                    "CraftingMissions", defaultOptions, {},
                    {{{"rabbit_stew", "Тарелок кроличьего рагу", 200, "Сделано кроличьего рагу"}}, {}, {}},
                    {5000, {},
                    {},
                    }
                }, // Mission
                {
                    {},
                    "CraftingMissions", defaultRepeatableOptions, {},
                    {{{"golden_carrot", "Золотой моркови", 1000, "Сделано золотой моркови"}}, {}, {}},
                    {1500, {},
                    {
                        {"enchanted_golden_apple", "Зачарованное золотое яблоко", 1, "Получено зачарованных золотых яблок"}
                    },
                    }
                }, // Mission
            }
        }, // MissionGroup
    }
}; // MissionPack
