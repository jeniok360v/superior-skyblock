#pragma once

#include "MissionPack.hpp"

const std::string startDesert1 = "eyJ0ZXh0dXJlcyI6eyJTS0lOIjp7InVybCI6Imh0dHA6Ly90ZXh0dXJlcy5taW5lY3JhZnQubmV0L3RleHR1cmUvNDY0YjZiNjA2MmFjMzU4ZDMzM2YzNDIyNmYwYzlkZjhmMjg2ZjcxMjdlN2NiZGEzODZiOGFjOWU2NjJjMTcyMiJ9fX0=";
const std::string startDesert2 = "eyJ0ZXh0dXJlcyI6eyJTS0lOIjp7InVybCI6Imh0dHA6Ly90ZXh0dXJlcy5taW5lY3JhZnQubmV0L3RleHR1cmUvNDkxYWMzMTNkN2UwODZkNmNjOTRhODQzNWY2NDNmMTcxOWYxYjNiMzc4YjA0ZWIxYzQyNzJlNWMzNjZkMGZjMiJ9fX0=";

MissionPack startDesertPack
{
    "startDesert",
    {
        {
            "startDesert", "Пустынное начало", "PLAYER_HEAD", startDesert2,
            {
                {
                    {},
                    "BlocksMissions", defaultNaturalBlocksOptions, {},
                    {{{"sand", "Песок", 10, "Собрано песка"} }, {}, {}},
                    {50, {},
                    {
                        {"dead_bush", "Сухой куст", 20, "Получено сухих кустов"},
                        {"rotten_flesh", "Гнилая плоть", 20, "Получено гнилой плоти"}
                    },
                    }
                }, // Mission 
                {
                    {},
                    "ItemsMissions", defaultOptions, {},
                    {{{"cactus", "Кактус", 3, "Соберано кактусов"} }, {}, {}},
                    {50, {},
                    {
                        {"birch_planks", "Берёзовые доски", 7, "Получено берёзовых досок"},
                    },
                    }
                }, // Mission 
                {
                    {},
                    "CraftingMissions", defaultOptions, {},
                    {{{"wooden_pickaxe", "Деревянная кирка", 1, "Деревянная кирка, скрафчено"}}, {}, {}},
                    {100, {},
                    {
                        {"cauldron", "Котёл", 1, "Получено котлов"},
                        {"ice", "Лёд", 1, "Получено льда"},
                        {"lava_bucket", "Ведро лавы", 1, "Получено вёдер лавы"},
                        {"dead_bush", "Сухой куст", 10, "Получено сухих кустов"},
                        {"rotten_flesh", "Гнилая плоть", 20, "Получено гнилой плоти"}
                    },
                    }
                }, // Mission
                {
                    {},
                    "ItemsMissions", defaultOptions, {},
                    {{{"cactus", "Кактус", 9, "Вырастить кактусов"}}, {}, {}},
                    {100, {},
                    {
                        {"dead_bush", "Сухой куст", 20, "Получено сухих кустов"},
                        {"sand", "Песок", 20, "Получено песка"},
                        {"barrel", "Бочка", 1, "Получена бочка"},
                    }
                    }
                }, // Mission
                {
                    {},
                    "CraftingMissions", defaultOptions, {},
                    {{{"stone_hoe", "Каменная мотыга", 1, "Каменная мотыга, скрафчено"}}, {}, {}},
                    {50, {},
                    {
                        {"dirt", "Земля", 20, "Получено земли"},
                        {"sweet_berries", "Ягоды", 20, "Получено ягод"},
                        {"dead_bush", "Сухой куст", 5, "Получено сухих кустов"}
                    },
                    }
                }, // Mission
                {
                    {},
                    "ItemsMissions", defaultOptions, {},
                    {{{"cactus", "Кактус", 25, "Собрано кактусов"}}, {}, {}},
                    {250, {},
                    {
                        {"dead_bush", "Сухой куст", 10, "Получено сухих кустов"},
                        {"sand", "Песок", 10, "Получено песка"},
                        {"barrel", "Бочка", 1, "Получена бочка"},
                    }
                    }
                }, // Mission
                {
                    {},
                    "KillsMissions", defaultOptions, {},
                    {{{"skeleton", "Скелеты", 3, "Скелетов убито"},
                    {"zombie", "Зомби", 5, "Зомби убито"}}, {}, {}},
                    {150, {},
                    {
                        {"dirt", "Земля", 20, "Получено земли"},
                        {"bone_meal", "Костная мука", 20, "Получено муки"},
                    },
                    }
                }, // Mission
                {
                    {},
                    "ItemsMissions", defaultOptions, {},
                    {{{"cactus", "Кактус", 50, "Собрано кактусов"}}, {}, {}},
                    {200, {},
                    {
                        {"dead_bush", "Сухой куст", 5, "Получено сухих кустов"},
                        {"dirt", "Земля", 20, "Получено земли"},
                        {"barrel", "Бочка", 1, "Получена бочка"},
                    }
                    }
                }, // Mission
                {
                    {},
                    "KillsMissions", defaultNaturalBlocksOptions, {},
                    {{{"phantom", "Фантом", 2, "Убито фантомов"}}, {}, {}},
                    {100, {},
                    {
                        {"birch_sapling", "Саженцы берёзы", 3, "Получено саженцев"},
                        {"grass_block", "Дёрн", 10, "Получено дёрна"},
                        {"water_bucket", "Ведро воды", 1, "Получено вёдер"},
                    },
                    }
                }, // Mission 
            }
        }, // MissionGroup
    }
}; // MissionPack
