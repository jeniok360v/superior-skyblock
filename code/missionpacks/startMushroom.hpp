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
                    {{{"mushroom_stem", "Грибная ножка", 4, "Сломано грибных ножек"},
                    {"mycelium", "Блок мицелия", 1, "Сломано блоков мицелия"},
                    {"brown_mushroom_block", "Коричневый грибной блок", 36, "Сломано блоков коричневого гриба"}, }, {}, {}},
                    {200, {},
                    {
                        {"bone_meal", "Костная мука", 10, "Получено муки"}
                    },
                    }
                }, // Mission 
                {
                    {},
                    "BlocksMissions", defaultNaturalBlocksOptions, {},
                    {{{"mushroom_stem", "Грибная ножка", 4, "Сломано грибных ножек"},
                    {"red_mushroom_block", "Красный грибной блок", 32, "Сломано блоков красного гриба"}, }, {}, {}},
                    {200, {},
                    {
                        {"bone_meal", "Костная мука", 8, "Получено муки"},
                        {"crafting_table", "Верстак", 1, "Получено верстак"},
                        {"bowl", "Миска", 5, "Получено мисок"},
                    },
                    }
                }, // Mission 
                {
                    {},
                    "CraftingMissions", defaultOptions, {},
                    {{{"mushroom_stew", "Грибной суп", 3, "Грибной суп, сварено"}}, {}, {}},
                    {100, {},
                    {
                        {"ice", "Лёд", 1, "Получено льда"},
                        {"lava_bucket", "Ведро лавы", 1, "Получено вёдер лавы"},
                        {"wooden_pickaxe", "Деревянная кирка", 1, "Получено деревянных кирок"},
                        {"stick", "Палки", 20, "Получено палок"},
                    },
                    }
                }, // Mission
                {
                    {},
                    "CraftingMissions", defaultOptions, {},
                    {{{"stone_axe", "Каменный топор", 1, "Каменный топор, скрафчено"}}, {}, {}},
                    {100, {},
                    {
                        {"bone_meal", "Костная мука", 10, "Получено муки"}
                    },
                    }
                }, // Mission
                {
                    {},
                    "BlocksMissions", defaultNaturalBlocksOptions, {},
                    {{{"mushroom_stem", "Грибная ножка", 16, "Сломано грибных ножек"},
                    {"red_mushroom_block", "Красный грибной блок", 50, "Сломано блоков красного гриба"},
                    {"brown_mushroom_block", "Коричневый грибной блок", 50, "Сломано блоков коричневого гриба"}}, {}, {}},
                    {200, {},
                    {
                        {"bone_meal", "Костная мука", 15, "Получено муки"},
                        {"stick", "Палки", 16, "Получено палок"},
                        {"dirt", "Земля", 20, "Получено земли"},
                    },
                    }
                }, // Mission 
                {
                    {},
                    "BlocksMissions", defaultNaturalBlocksOptions, {},
                    {{{"red_mushroom_block", "Красный грибной блок", 150, "Сломано блоков красного гриба"},
                    {"brown_mushroom_block", "Коричневый грибной блок", 150, "Сломано блоков коричневого гриба"}}, {}, {}},
                    {300, {},
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
