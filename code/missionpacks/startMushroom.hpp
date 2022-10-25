#pragma once

#include "MissionPack.hpp"

const std::string startMushroom1 = "eyJ0ZXh0dXJlcyI6eyJTS0lOIjp7InVybCI6Imh0dHA6Ly90ZXh0dXJlcy5taW5lY3JhZnQubmV0L3RleHR1cmUvN2JlYTM0ZDA4OWVlNjY2OTE3NjU5Y2ZkOWZlYWIxNDY4ZTcwMzdiYzUxZmJiMzM2ZWNmYTA4N2UwYjc4MTAzNiJ9fX0=";
const std::string startMushroom2 = "eyJ0ZXh0dXJlcyI6eyJTS0lOIjp7InVybCI6Imh0dHA6Ly90ZXh0dXJlcy5taW5lY3JhZnQubmV0L3RleHR1cmUvMjU1MzI2ZDI4ODBiNDg4MTVkZDAwYWMxNzRjOGVlOTMwNWRmYmU0YjZhYjVkMWExNjZiNTIyMzNjMWQzZGQ5NCJ9fX0=";

MissionPack startMushroomPack
{
    "startMushroom",
    {
        {
            "startMushroom", "Грибное начало", "PLAYER_HEAD", startMushroom2,
            {
                {
                    {},
                    "BlocksMissions", defaultNaturalBlocksOptions, {},
                    {{{"mushroom_stem", "Грибные ножки", 4, "Сломано грибных ножек"},
                    {"mycelium", "Блок мицелия", 1, "Сломано блоков мицелия"},
                    {"brown_mushroom_block", "Коричневых грибных блоков", 36, "Сломано блоков коричневого гриба"}, }, {}, {}},
                    {200, {},
                    {
                        {"bone_meal", "Костной муки", 10, "Получено муки"}
                    },
                    }
                }, // Mission 
                {
                    {},
                    "BlocksMissions", defaultNaturalBlocksOptions, {},
                    {{{"mushroom_stem", "Грибные ножки", 4, "Сломано грибных ножек"},
                    {"red_mushroom_block", "Красных грибных блоков", 32, "Сломано блоков красного гриба"}, }, {}, {}},
                    {200, {},
                    {
                        {"bone_meal", "Костной муки", 8, "Получено муки"},
                        {"crafting_table", "Верстак", 1, "Получен верстак"},
                        {"bowl", "Мисок", 5, "Получено мисок"},
                    },
                    }
                }, // Mission 
                {
                    {},
                    "CraftingMissions", defaultOptions, {},
                    {{{"mushroom_stew", "Грибного супа", 3, "Грибной суп, сварено"}}, {}, {}},
                    {100, {},
                    {
                        {"ice", "Лёд", 1, "Получено льда"},
                        {"lava_bucket", "Ведро лавы", 1, "Получено вёдер лавы"},
                        {"wooden_pickaxe", "Деревянная кирка", 1, "Получено деревянных кирок"},
                        {"stick", "Палок", 20, "Получено палок"},
                    },
                    }
                }, // Mission
                {
                    {},
                    "CraftingMissions", defaultOptions, {},
                    {{{"stone_axe", "Каменный топор", 1, "Каменный топор, скрафчено"}}, {}, {}},
                    {100, {},
                    {
                        {"bone_meal", "Костной муки", 10, "Получено муки"}
                    },
                    }
                }, // Mission
                {
                    {},
                    "BlocksMissions", defaultNaturalBlocksOptions, {},
                    {{{"mushroom_stem", "Грибных ножек", 16, "Сломано грибных ножек"},
                    {"red_mushroom_block", "Красных грибных блоков", 50, "Сломано блоков красного гриба"},
                    {"brown_mushroom_block", "Коричневых грибных блоков", 50, "Сломано блоков коричневого гриба"}}, {}, {}},
                    {200, {},
                    {
                        {"bone_meal", "Костной муки", 15, "Получено муки"},
                        {"stick", "Палок", 16, "Получено палок"},
                        {"dirt", "Земли", 20, "Получено земли"},
                    },
                    }
                }, // Mission 
                {
                    {},
                    "BlocksMissions", defaultNaturalBlocksOptions, {},
                    {{{"red_mushroom_block", "Красных грибных блоков", 150, "Сломано блоков красного гриба"},
                    {"brown_mushroom_block", "Коричневых грибных блоков", 150, "Сломано блоков коричневого гриба"}}, {}, {}},
                    {300, {},
                    {
                        {"birch_sapling", "Саженца берёзы", 3, "Получено саженцев"},
                        {"grass_block", "Дёрна", 10, "Получено дёрна"},
                        {"water_bucket", "Ведро воды", 1, "Получено вёдер"},
                    },
                    }
                }, // Mission 
            }
        }, // MissionGroup
    }
}; // MissionPack
