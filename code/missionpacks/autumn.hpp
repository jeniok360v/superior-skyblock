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
                        {"beetroot_seeds", "Семян свеклы", 15, "Получено семян"}
                    },
                    }
                }, // Mission
                {
                    {},
                    "FarmingMissions", defaultOptions, {},
                    {{{"beetroots", "Свекла", 60, "Выращено свеклы"}}, {}, {}},
                    {900, {},
                    {
                        {"sweet_berries", "Ягод", 20, "Получено брусники"},
                    },
                    }
                }, // Mission
                {
                    {},
                    "FarmingMissions", defaultOptions, {},
                    {{{"sweet_berry_bush", "Брусника", 150, "Выращено брусники"}}, {}, {}},
                    {900, {},
                    {
                        {"podzol", "Подзола", 15, "Получено подзола"},
                    },
                    }
                }, // Mission
                {
                    {"Испеките немного хлеба"},
                    "CraftingMissions", defaultOptions, {},
                    {{{"bread", "Хлеб", 15, "Сделано хлеба"}}, {}, {}},
                    {500, {},
                    {
                        {"red_mushroom", "Мухомора", 3, "Получено мухоморов"},
                        {"brown_mushroom", "Грибочка", 3, "Получено грибочков"}
                    },
                    }
                }, // Mission
                {
                    {},
                    "ItemsMissions", defaultOptions, {},
                    {{{"red_mushroom", "Мухоморов", 100, "Собрано мухоморов"},
                    {"brown_mushroom", "Грибочков", 100, "Собрано грибочков"}}, {}, {}},
                    {1200, {},
                    {
                        {"sugar_cane", "Тростника", 5, "Получено тростника"}
                    },
                    }
                }, // Mission 
                {
                    {},
                    "FarmingMissions", defaultOptions, {},
                    {{{"sugar_cane", "Тростника", 45, "Выращено тростника"},
                    {"sweet_berry_bush", "Брусники", 200, "Выращено брусники"}}, {}, {}},
                    {1500, {},
                    {
                        {"moss_block", "Блоков мха", 5, "Получено мха"}
                    },
                    }
                }, // Mission
                {
                    {},
                    "FarmingMissions", defaultOptions, {},
                    {{{"sugar_cane", "Тростника", 120, "Выращено тростника"},
                    {"beetroots", "Свеклы", 180, "Выращено свеклы"}}, {}, {}},
                    {2000, {},
                    {},
                    }
                }, // Mission
                {
                    {},
                    "FarmingMissions", defaultOptions, {},
                    {{{"sweet_berry_bush", "Брусники", 600, "Выращено брусники"},
                    {"beetroots", "Свеклы", 250, "Выращено свеклы"}}, {}, {}},
                    {3500, {},
                    {},
                    }
                }, // Mission
                {
                    {},
                    "ItemsMissions", defaultOptions, {},
                    {{{"red_mushroom", "Мухоморов", 300, "Собрано мухоморов"},
                    {"brown_mushroom", "Грибочков", 300, "Собрано грибочков"}}, {}, {}},
                    {3000, {},
                    {
                        {"spruce_sapling", "Саженцов ели", 5, "Получено саженцов ели"}
                    },
                    }
                }, // Mission
                {
                    {},
                    "FarmingMissions", defaultOptions, {},
                    {{{"sweet_berry_bush", "Брусники", 1000, "Выращено брусники"},
                    {"beetroots", "Свеклы", 300, "Выращено свеклы"},
                    {"sugar_cane", "Тростника", 500, "Выращено тростника"}}, {}, {}},
                    {6500, {},
                    {},
                    }
                }, // Mission
                {
                    {},
                    "FarmingMissions", defaultOptions, {},
                    {{{"sugar_cane", "Тростника", 800, "Выращено тростника"}}, {}, {}},
                    {3000, {},
                    {},
                    }
                }, // Mission
                {
                    {},
                    "FarmingMissions", defaultRepeatableOptions, {},
                    {{{"sweet_berry_bush", "Брусники", 1000, "Выращено брусники"},
                    {"beetroots", "Свеклы", 400, "Выращено свеклы"},
                    {"sugar_cane", "Тростника", 600, "Выращено тростника"}}, {}, {}},
                    {1800, {},
                    {},
                    }
                }, // Mission
            }
        }, // MissionGroup
    }
}; // MissionPack
