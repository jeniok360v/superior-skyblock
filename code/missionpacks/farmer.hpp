#pragma once

#include "MissionPack.hpp"

const std::string carrots1 = "eyJ0ZXh0dXJlcyI6eyJTS0lOIjp7InVybCI6Imh0dHA6Ly90ZXh0dXJlcy5taW5lY3JhZnQubmV0L3RleHR1cmUvNGEzODkwYWE4Yzc2ZjE3N2NiYWU3ZGMwOTY2MTQ5YTJlMGZiMWMxZWZlYjI4M2RlYjdkZWFhMDlmZDBmYjYifX19";
const std::string carrots2 = "eyJ0ZXh0dXJlcyI6eyJTS0lOIjp7InVybCI6Imh0dHA6Ly90ZXh0dXJlcy5taW5lY3JhZnQubmV0L3RleHR1cmUvNzM1NmM3NDYyY2ZiNjViN2Y5YzMzY2MyZjMzNjgxOWZhYjU4MjMyMjE4NGU5MWZjYTU0ZjM2OTUzYjkxZjAzYyJ9fX0=";
const std::string wheat1 = "eyJ0ZXh0dXJlcyI6eyJTS0lOIjp7InVybCI6Imh0dHA6Ly90ZXh0dXJlcy5taW5lY3JhZnQubmV0L3RleHR1cmUvZGM4NTZiZDViMGY1ZmQyMDU2M2JmNjhiMWZlM2E1ODcyM2QzYWY5Y2FlZjg1OTIyMWM3ZWNmYTk2NDJmZjE5YiJ9fX0=";
const std::string wheat2 = "eyJ0ZXh0dXJlcyI6eyJTS0lOIjp7InVybCI6Imh0dHA6Ly90ZXh0dXJlcy5taW5lY3JhZnQubmV0L3RleHR1cmUvMTgxYWE3MTI2NzY1NGM0YzE3ZjIzZGQ1NmY5ZjU1NDE3YzZlNjA1YjYwOTUxNTc4ODdmZGVmY2Q1OGJiZTMxNyJ9fX0=";
const std::string wheat3 = "eyJ0ZXh0dXJlcyI6eyJTS0lOIjp7InVybCI6Imh0dHA6Ly90ZXh0dXJlcy5taW5lY3JhZnQubmV0L3RleHR1cmUvYzEwZjkwMDA5MzZlYzhlZDUxZDFiZjVhMmMyMWEwNDkzYTQzOTMwYTMzNmE0MTIwZjk1YjhkNzQ4MjMxYTBmNiJ9fX0=";
const std::string potatoes1 = "eyJ0ZXh0dXJlcyI6eyJTS0lOIjp7InVybCI6Imh0dHA6Ly90ZXh0dXJlcy5taW5lY3JhZnQubmV0L3RleHR1cmUvZmNhZTVkMDM3OWZlNzNiOTQwNDIxNzhkODdkOTgyOThkM2NkZTdkYTEyNmIxOGRjY2U0YTNhNmM2NjNmYWZiNyJ9fX0=";
const std::string potatoes2 = "eyJ0ZXh0dXJlcyI6eyJTS0lOIjp7InVybCI6Imh0dHA6Ly90ZXh0dXJlcy5taW5lY3JhZnQubmV0L3RleHR1cmUvY2Y0NjI0ZWJmN2Q0MTlhMTFlNDNlZDBjMjAzOGQzMmNkMDlhZDFkN2E2YzZlMjBmNjMzOWNiY2ZlMzg2ZmQxYyJ9fX0=";
const std::string melon1 = "eyJ0ZXh0dXJlcyI6eyJTS0lOIjp7InVybCI6Imh0dHA6Ly90ZXh0dXJlcy5taW5lY3JhZnQubmV0L3RleHR1cmUvZDU4NjcwNTUxZjdmZjEzYWZhYjIzOTMxOGExMGJhZDIzMjdlZTc0MmUxNTc4MzdlYTE3ODVlZjQ0M2QzYTU3NiJ9fX0=";
const std::string melon2 = "eyJ0ZXh0dXJlcyI6eyJTS0lOIjp7InVybCI6Imh0dHA6Ly90ZXh0dXJlcy5taW5lY3JhZnQubmV0L3RleHR1cmUvZDc5YjdiMjU1ZmM0YzRhMDE1YTIwYWJhZDg3Y2YyYzc0MWViZDYyYzA2MGU4M2E4MWM5OGFkZWYyZWU2NDg5NCJ9fX0=";
const std::string melon3 = "eyJ0ZXh0dXJlcyI6eyJTS0lOIjp7InVybCI6Imh0dHA6Ly90ZXh0dXJlcy5taW5lY3JhZnQubmV0L3RleHR1cmUvODlmYzljNWI4NzM2ZjM2ZjM0MDVjYmUxMzYzZDQzNGMxNDFjZDIzYWFjMDQxODY0NzZhZjBhMGY3ODc3YWVmNCJ9fX0=";
const std::string pumpkin1 = "eyJ0ZXh0dXJlcyI6eyJTS0lOIjp7InVybCI6Imh0dHA6Ly90ZXh0dXJlcy5taW5lY3JhZnQubmV0L3RleHR1cmUvYzcyNjhiMzdjOWJhZDUyMTVhNjljYzlmYmZhZDc2ZDAyZWVkMTg2YzQ3MWI5ZmY3ZTMxMGQ4MWI1NTRhMTk0ZCJ9fX0=";
// const std::string pumpkin1 = "";

MissionPack farmerPack
{
    "farmer",
    {
        {
            "farmer", "Фермер", "PLAYER_HEAD", melon1,
            {
                {
                    {},
                    "FarmingMissions", defaultOptions, {},
                    {{{"wheat", "Пшеницы", 10, "Выращено пшеницы"}}, {}, {}},
                    {200, {},
                    {}
                    }
                }, // Mission
                {
                    {},
                    "FarmingMissions", defaultOptions, {},
                    {{{"wheat", "Пшеницы", 50, "Выращено пшеницы"}}, {}, {}},
                    {500, {},
                    {
                        {"carrot", "Морковки", 3, "Получено морковки"},
                        {"dirt", "Земли", 15, "Получено земли"}
                    }
                    }
                }, // Mission
                {
                    {},
                    "FarmingMissions", defaultOptions, {},
                    {{{"carrots", "Морковки", 20, "Выращено морковки"}}, {}, {}},
                    {200, {},
                    {}
                    }
                }, // Mission
                {
                    {},
                    "FarmingMissions", defaultOptions, {},
                    {{{"wheat", "Пшеницы", 100, "Выращено пшеницы"}}, {}, {}},
                    {800, {},
                    {
                        {"dirt", "Земли", 20, "Получено земли"}
                    }
                    }
                }, // Mission
                {
                    {},
                    "FarmingMissions", defaultOptions, {},
                    {{{"carrots", "Морковки", 100, "Выращено морковки"}}, {}, {}},
                    {500, {},
                    {
                        {"potato", "Картошки", 20, "Получено картошки"}
                    }
                    }
                }, // Mission
                {
                    {},
                    "FarmingMissions", defaultOptions, {},
                    {{{"potatoes", "Картошки", 20, "Выращено картошки"}}, {}, {}},
                    {200, {},
                    {}
                    }
                }, // Mission
                {
                    {},
                    "FarmingMissions", defaultOptions, {},
                    {{{"potatoes", "Картошки", 100, "Выращено картошки"}}, {}, {}},
                    {500, {},
                    {
                        {"dirt", "Земли", 25, "Получено земли"}
                    }
                    }
                }, // Mission
                {
                    {},
                    "FarmingMissions", defaultOptions, {},
                    {{{"wheat", "Пшеницы", 250, "Выращено пшеницы"}}, {}, {}},
                    {1000, {},
                    {}
                    }
                }, // Mission
                {
                    {},
                    "FarmingMissions", defaultOptions, {},
                    {{{"carrots", "Морковки", 200, "Выращено морковки"},
                    {"potatoes", "Картошки", 200, "Выращено картошки"}}, {}, {}},
                    {1600, {},
                    {
                        {"dirt", "Земли", 30, "Получено земли"}
                    }
                    }
                }, // Mission
                {
                    {},
                    "FarmingMissions", defaultOptions, {},
                    {{{"wheat", "Пшеницы", 450, "Выращено пшеницы"}}, {}, {}},
                    {1500, {},
                    {}
                    }
                }, // Mission
                {
                    {},
                    "CraftingMissions", defaultOptions,
                    {},
                    {{{"iron_hoe", "Железная мотыга", 1, "Железная мотыга, скрафчено"}}, {}, {}},
                    {200, {},
                    {
                        {"melon", "Арбуза", 3, "Получено арбузов"}, 
                    },
                    }
                }, // Mission
                {
                    {},
                    "FarmingMissions", defaultOptions, {},
                    {{{"melon", "Арбузов", 20, "Выращено арбузов"}}, {}, {}},
                    {300, {},
                    {
                        {"pumpkin_seeds", "Тыквенных семечек", 10, "Получено семечек"},
                    }
                    }
                }, // Mission
                {
                    {},
                    "FarmingMissions", defaultOptions,
                    {},
                    {{{"pumpkin", "Тыкв", 10, "Выращено тыкв"}}, {}, {}},
                    {200, {},
                    {},
                    }
                }, // Mission
                {
                    {},
                    "FarmingMissions", defaultOptions, {},
                    {{{"melon", "Арбузов", 80, "Выращено арбузов"}}, {}, {}},
                    {600, {},
                    {
                        {"dirt", "Земли", 20, "Получено земли"}
                    }
                    }
                }, // Mission
                {
                    {},
                    "FarmingMissions", defaultOptions,
                    {},
                    {{{"pumpkin", "Тыкв", 40, "Выращено тыкв"}}, {}, {}},
                    {300, {},
                    {},
                    }
                }, // Mission
                {
                    {},
                    "FarmingMissions", defaultOptions,
                    {},
                    {{{"pumpkin", "Тыкв", 80, "Выращено тыкв"}}, {}, {}},
                    {600, {},
                    {},
                    }
                }, // Mission
                {
                    {},
                    "FarmingMissions", defaultOptions, {},
                    {{{"potatoes", "Картошки", 400, "Выращено картошки"}}, {}, {}},
                    {1000, {},
                    {
                        {"dirt", "Земли", 40, "Получено земли"}
                    }
                    }
                }, // Mission
                {
                    {},
                    "FarmingMissions", defaultOptions, {},
                    {{{"melon", "Арбузов", 240, "Выращено арбузов"},
                    {"pumpkin", "Тыкв", 240, "Выращено тыкв"},
                    {"carrots", "Морковки", 400, "Выращено морковки"}}, {}, {}},
                    {4000, {},
                    {}
                    }
                }, // Mission
                {
                    {},
                    "FarmingMissions", defaultOptions, {},
                    {{{"wheat", "Пшеницы", 600, "Выращено пшеницы"},
                    {"potatoes", "Картошки", 1000, "Выращено картошки"}}, {}, {}},
                    {4000, {},
                    {
                        {"dirt", "Земли", 60, "Получено земли"}
                    }
                    }
                }, // Mission
                {
                    {},
                    "FarmingMissions", defaultOptions, {},
                    {{{"carrots", "Морковки", 1000, "Выращено морковки"}}, {}, {}},
                    {2000, {},
                    {}
                    }
                }, // Mission
                {
                    {},
                    "FarmingMissions", defaultOptions, {},
                    {{{"melon", "Арбузов", 600, "Выращено арбузов"},
                    {"pumpkin", "Тыквы", 600, "Выращено тыкв"}}, {}, {}},
                    {6000, {},
                    {
                        {"dirt", "Земли", 60, "Получено земли"}
                    }
                    }
                }, // Mission
                {
                    {},
                    "FarmingMissions", defaultRepeatableOptions, {},
                    {{{"melon", "Арбузов", 600, "Выращено арбузов"},
                    {"pumpkin", "Тыквы", 600, "Выращено тыкв"},
                    {"carrots", "Морковки", 1000, "Выращено морковки"},
                    {"potatoes", "Картошки", 1000, "Выращено картошки"},
                    {"wheat", "Пшеницы", 800, "Выращено пшеницы"}}, {}, {}},
                    {2000, {},
                    {
                        {"dirt", "Земли", 40, "Получено земли"}
                    }
                    }
                }, // Mission
            }
        }, // MissionGroup
    }
}; // MissionPack
