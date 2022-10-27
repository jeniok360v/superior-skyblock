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
                    "StatisticsMissions", defaultOptions, {{}, false},
                    {{{"boat_one_cm", "Сантиметров проплыть на лодке", 10000, "Проплыто сантиметров"}}, {}, {}},
                    {1500, {},
                    {
                        // {"obsidian", "Обсидиана", 10, "Получено обсидиана"},
                    },
                    }
                }, // Mission

                {
                    {},
                    "StatisticsMissions", defaultRepeatableOptions, {{}, false},
                    {{{"bell_ring", "Раз постучать в колокол", 10, "Сделано ударов в колокол"}}, {}, {}},
                    {1000, {},
                    {
                        {"blaze_rod", "Стерженя ифрита", 3, "Получено стрежней"}
                    },
                    }
                }, // Mission
                {
                    {},
                    "EnchantingMissions", defaultRepeatableOptions, {{}, false},
                    {{}, {}, {}, {{"diamond_helmet", "Алмазный шлем", 1, "PROTECTION_ENVIRONMENTAL", "Защита", 4, "Алмазный шлем(Защита 4), зачаровано"}}},
                    {1000, {},
                    {
                        {"blaze_rod", "Стерженя ифрита", 3, "Получено стрежней"}
                    },
                    }
                }, // Mission
                {
                    {},
                    "EnchantingMissions", defaultRepeatableOptions, {{}, false},
                    {{}, {}, {}, {{"diamond_pickaxe", "Алмазная кирка", 1, "LOOT_BONUS_BLOCKS", "Удача", 3, "Алмазный шлем(Защита 4), зачаровано"}}},
                    {1000, {},
                    {
                        {"blaze_rod", "Стерженя ифрита", 3, "Получено стрежней"}
                    },
                    }
                }, // Mission
                {
                    {},
                    "EnchantingMissions", defaultRepeatableOptions, {{}, false},
                    {{}, {}, {}, {{"diamond_sword", "Алмазный меч", 1, "damage_all", "острота", 5, "Алмазный шлем(Защита 4), зачаровано"}}},
                    {1000, {},
                    {
                        {"blaze_rod", "Стерженя ифрита", 3, "Получено стрежней"}
                    },
                    }
                }, // Mission
                {
                    {},
                    "EnchantingMissions", defaultRepeatableOptions, {{}, false},
                    {{}, {}, {}, {{"diamond_pickaxe", "кирка", 1, "DIG_SPEED", "эфф", 5, "Алмазный шлем(Защита 4), зачаровано"}}},
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
