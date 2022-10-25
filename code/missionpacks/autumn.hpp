#pragma once

#include "MissionPack.hpp"

const std::string autumn1 = "eyJ0ZXh0dXJlcyI6eyJTS0lOIjp7InVybCI6Imh0dHA6Ly90ZXh0dXJlcy5taW5lY3JhZnQubmV0L3RleHR1cmUvMTUyZTg0NmVmZmUwZDFlOWVlNzkwZWMyN2NlODk2ZWZkOTk0OTEyMTI2ZGE1ZjIxOThiNDc0ZDZhMWM5OTQ1NSJ9fX0=";
// const std::string pumpkin1 = "";

MissionPack autumnPack
{
    "autumn",
    {
        {
            "autumn", "Осенний сезон", "PLAYER_HEAD", autumn1,
            {
                {
                    {},
                    "CraftingMissions", defaultOptions, {},
                    {{{"wooden_hoe", "Деревянная мотыга", 1, "Деревянная мотыга, скрафчено"}}},
                    {100, {},
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
                    {
                        {"sweet_berries", "Ягоды", 20, "Получено брусники"},
                    },
                    }
                }, // Mission
                {
                    {},
                    "FarmingMissions", defaultOptions, {},
                    {{{"sweet_berry_bush", "Брусника", 150, "Выращено брусники"}}, {}, {}},
                    {900, {},
                    {
                        {"podzol", "Подзол", 15, "Получено подзола"},
                    },
                    }
                }, // Mission
                {
                    {"Испеките немного хлеба"},
                    "CraftingMissions", defaultOptions, {},
                    {{{"bread", "Хлеб", 15, "Сделано хлеба"}}, {}, {}},
                    {500, {},
                    {
                        {"red_mushroom", "Мухоморы", 3, "Получено мухоморов"},
                        {"brown_mushroom", "Грибочки", 3, "Получено грибочков"}
                    },
                    }
                }, // Mission
                {
                    {},
                    "ItemsMissions", defaultOptions, {},
                    {{{"red_mushroom", "Мухоморы", 100, "Собрано мухоморов"},
                    {"brown_mushroom", "Грибочки", 100, "Собрано грибочков"}}, {}, {}},
                    {1200, {},
                    {
                        {"sugar_cane", "Тростник", 5, "Получено тростника"}
                    },
                    }
                }, // Mission 
                {
                    {},
                    "FarmingMissions", defaultOptions, {},
                    {{{"sugar_cane", "Тростник", 45, "Выращено тростника"},
                    {"sweet_berry_bush", "Брусника", 200, "Выращено брусники"}}, {}, {}},
                    {1500, {},
                    {
                        {"moss_block", "Блоков мха", 5, "Получено мха"}
                    },
                    }
                }, // Mission
                {
                    {},
                    "FarmingMissions", defaultOptions, {},
                    {{{"sugar_cane", "Тростник", 120, "Выращено тростника"},
                    {"beetroots", "Свекла", 180, "Выращено свеклы"}}, {}, {}},
                    {2000, {},
                    {},
                    }
                }, // Mission
                {
                    {},
                    "FarmingMissions", defaultOptions, {},
                    {{{"sweet_berry_bush", "Брусника", 600, "Выращено брусники"},
                    {"beetroots", "Свекла", 250, "Выращено свеклы"}}, {}, {}},
                    {3500, {},
                    {},
                    }
                }, // Mission
                {
                    {},
                    "ItemsMissions", defaultOptions, {},
                    {{{"red_mushroom", "Мухоморы", 300, "Собрано мухоморов"},
                    {"brown_mushroom", "Грибочки", 300, "Собрано грибочков"}}, {}, {}},
                    {3000, {},
                    {
                        {"spruce_sapling", "Саженцы ели", 5, "Получено саженцов ели"}
                    },
                    }
                }, // Mission
                {
                    {},
                    "FarmingMissions", defaultOptions, {},
                    {{{"sweet_berry_bush", "Брусника", 1200, "Выращено брусники"},
                    {"beetroots", "Свекла", 450, "Выращено свеклы"},
                    {"sugar_cane", "Тростник", 400, "Выращено тростника"}}, {}, {}},
                    {6500, {},
                    {},
                    }
                }, // Mission
                {
                    {},
                    "FarmingMissions", defaultOptions, {},
                    {{{"sugar_cane", "Тростник", 800, "Выращено тростника"}}, {}, {}},
                    {3000, {},
                    {},
                    }
                }, // Mission
                {
                    {},
                    "FarmingMissions", defaultRepeatableOptions, {},
                    {{{"sweet_berry_bush", "Брусника", 2000, "Выращено брусники"},
                    {"beetroots", "Свекла", 600, "Выращено свеклы"},
                    {"sugar_cane", "Тростник", 1000, "Выращено тростника"}}, {}, {}},
                    {1800, {},
                    {},
                    }
                }, // Mission
            }
        }, // MissionGroup
    }
}; // MissionPack
