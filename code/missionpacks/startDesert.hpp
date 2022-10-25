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
                        {"dead_bush", "Сухих кустов", 20, "Получено сухих кустов"},
                        {"rotten_flesh", "Гнилой плоти", 20, "Получено гнилой плоти"}
                    },
                    }
                }, // Mission 
                {
                    {},
                    "ItemsMissions", defaultOptions, {},
                    {{{"cactus", "Кактуса", 3, "Собрано кактусов"} }, {}, {}},
                    {50, {},
                    {
                        {"birch_planks", "Берёзовых досок", 7, "Получено берёзовых досок"},
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
                        {"dead_bush", "Сухих кустов", 10, "Получено сухих кустов"},
                        {"rotten_flesh", "Гнилой плоти", 20, "Получено гнилой плоти"}
                    },
                    }
                }, // Mission
                {
                    {},
                    "ItemsMissions", defaultOptions, {},
                    {{{"cactus", "Кактусов", 9, "Вырастить кактусов"}}, {}, {}},
                    {100, {},
                    {
                        {"dead_bush", "Сухих кустов", 20, "Получено сухих кустов"},
                        {"sand", "Песка", 20, "Получено песка"},
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
                        {"dirt", "Земли", 20, "Получено земли"},
                        {"sweet_berries", "Ягод", 20, "Получено ягод"},
                        {"dead_bush", "Сухих кустов", 5, "Получено сухих кустов"}
                    },
                    }
                }, // Mission
                {
                    {},
                    "ItemsMissions", defaultOptions, {},
                    {{{"cactus", "Кактусов", 25, "Собрано кактусов"}}, {}, {}},
                    {250, {},
                    {
                        {"dead_bush", "Сухих кустов", 10, "Получено сухих кустов"},
                        {"sand", "Песка", 10, "Получено песка"},
                        {"barrel", "Бочка", 1, "Получена бочка"},
                    }
                    }
                }, // Mission
                {
                    {},
                    "KillsMissions", defaultOptions, {},
                    {{{"skeleton", "Скелета", 3, "Скелетов убито"},
                    {"zombie", "Зомби", 5, "Зомби убито"}}, {}, {}},
                    {150, {},
                    {
                        {"dirt", "Земли", 20, "Получено земли"},
                        {"bone_meal", "Костной муки", 20, "Получено муки"},
                    },
                    }
                }, // Mission
                {
                    {},
                    "ItemsMissions", defaultOptions, {},
                    {{{"cactus", "Кактусов", 50, "Собрано кактусов"}}, {}, {}},
                    {200, {},
                    {
                        {"dead_bush", "Сухих кустов", 5, "Получено сухих кустов"},
                        {"dirt", "Земли", 20, "Получено земли"},
                        {"barrel", "Бочка", 1, "Получена бочка"},
                    }
                    }
                }, // Mission
                {
                    {},
                    "KillsMissions", defaultOptions, {},
                    {{{"phantom", "Фантома", 2, "Убито фантомов"}}, {}, {}},
                    {100, {},
                    {
                        {"birch_sapling", "Саженцев берёзы", 3, "Получено саженцев"},
                        {"grass_block", "Дёрна", 10, "Получено дёрна"},
                        {"water_bucket", "Ведро воды", 1, "Получено вёдер"},
                    },
                    }
                }, // Mission 
            }
        }, // MissionGroup
    }
}; // MissionPack
