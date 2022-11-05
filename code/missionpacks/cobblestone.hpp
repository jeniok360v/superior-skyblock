#pragma once

#include "MissionPack.hpp"

const std::string cobblestone1 = "eyJ0ZXh0dXJlcyI6eyJTS0lOIjp7InVybCI6Imh0dHA6Ly90ZXh0dXJlcy5taW5lY3JhZnQubmV0L3RleHR1cmUvMjA1MGRlNTcyY2Y4YmYxNDk2YjUyNzg1YWQzNDlkMDJhY2RkYTY0NDc5YjFiZTc1MDkzZTlhMWY3OTI4ZGQyIn19fQ==";

MissionPack cobblestonePack
{
    "cobblestone",
    {
        {
            "cobblestone", "Булыжник", "PLAYER_HEAD", cobblestone1,
            {
                {
                    {"Постройте генератор и добудьте из него булыжника"},
                    "BlocksMissions", defaultNaturalBlocksOptions, {},
                    {{{"cobblestone", "Булыжника", 10, "Добыто булыжника"}}, {}, {}},
                    {200, {},
                    {
                        {"hopper", "Воронка", 1, "Получено воронок"}
                    },
                    }
                }, // Mission  
                {
                    {},
                    "BlocksMissions", defaultNaturalBlocksOptions, {},
                    {{{"cobblestone", "Булыжника", 20, "Добыто булыжника"}}, {}, {}},
                    {300, {},
                    {},
                    }
                }, // Mission                
                {
                    {},
                    "BlocksMissions", defaultNaturalBlocksOptions, {},
                    {{{"cobblestone", "Булыжника", 100, "Добыто булыжника"}}, {}, {}},
                    {500, {{"is admin rankup %player% generator-rates", "Улучшение генератора булыжника"}},
                    {
                        {"obsidian", "Обсидиана", 3, "Получено обсидиана"}
                    },
                    }
                }, // Mission
                {
                    {},
                    "BlocksMissions", defaultNaturalBlocksOptions, {},
                    {{{"coal_ore", "Угольной руды", 15, "Добыто угольной руды"},
                    {"iron_ore", "Железной руды", 15, "Добыто железной руды"}}, {}, {}},
                    {500, {},
                    {},
                    }
                }, // Mission
                {
                    {},
                    "BlocksMissions", defaultNaturalBlocksOptions, {},
                    {{{"cobblestone", "Булыжника", 150, "Добыто булыжника"}}, {}, {}},
                    {500, {},
                    {
                        {"obsidian", "Обсидиана", 5, "Получено обсидиана"}
                    },
                    }
                }, // Mission
                {
                    {},
                    "BlocksMissions", defaultNaturalBlocksOptions, {},
                    {{{"cobblestone", "Булыжника", 250, "Добыто булыжника"},
                    {"stone", "Камня", 250, "Добыто камня"},
                    {"copper_ore", "Медной руды", 20, "Добыто медной руды"}}, {}, {}},
                    {1000, {},
                    {},
                    }
                }, // Mission
                {
                    {},
                    "BlocksMissions", defaultNaturalBlocksOptions, {},
                    {{{"cobblestone", "Булыжника", 300, "Добыто булыжника"},
                    {"gold_ore", "Золотой руды", 5, "Добыто золотой руды"}}, {}, {}},
                    {1500, {},
                    {},
                    }
                }, // Mission
                {
                    {},
                    "BlocksMissions", defaultNaturalBlocksOptions, {},
                    {{{"stone", "Камня", 400, "Добыто камня"},
                    {"iron_ore", "Железной руды", 30, "Добыто железной руды"},
                    {"redstone_ore", "Редстоуновой руды", 10, "Добыто редстоуновой руды"}}, {}, {}},
                    {2000, {{"is admin rankup %player% generator-rates", "Улучшение генератора булыжника"}},
                    {
                        {"obsidian", "Обсидиана", 7, "Получено обсидиана"}
                    },
                    }
                }, // Mission
                {
                    {},
                    "BlocksMissions", defaultNaturalBlocksOptions, {},
                    {{{"cobblestone", "Булыжника", 1000, "Добыто булыжника"},
                    {"stone", "Камня", 1000, "Добыто камня"},
                    {"diorite", "Диорита", 100, "Добыто диорита"},
                    {"stone", "Андезита", 100, "Добыто андезита"},
                    {"stone", "Гранита", 100, "Добыто гранита"},
                    {"stone", "Туфа", 100, "Добыто туфа"}}, {}, {}},
                    {2500, {},
                    {},
                    }
                }, // Mission
                {
                    {},
                    "BlocksMissions", defaultNaturalBlocksOptions, {},
                    {{{"redstone_ore", "Редстоуновой руды", 50, "Добыто редстоуновой руды"},
                    {"lapis_ore", "Лазуритовой руды", 50, "Добыто лазуритовой руды"},
                    {"diamond_ore", "Алмазной руды", 10, "Добыто алмазной руды"}}, {}, {}},
                    {2000, {},
                    {},
                    }
                }, // Mission
                {
                    {},
                    "BlocksMissions", defaultNaturalBlocksOptions, {},
                    {{{"deepslate", "Глубинного сланца", 500, "Добыто глубинного сланца"},
                    {"deepslate_iron_ore", "Глубинной железной руды", 50, "Добыто глубинной железной руды"},
                    {"deepslate_coal_ore", "Глубинной угольной руды", 50, "Добыто глубинной угольной руды"},
                    {"diamond_ore", "Алмазной руды", 10, "Добыто алмазной руды"}}, {}, {}},
                    {2500, {},
                    {
                        {"glow_lichen", "Светящегося лишайника", 10, "Получено светящегося лишайника"}
                    },
                    }
                }, // Mission
                {
                    {},
                    "BlocksMissions", defaultNaturalBlocksOptions, {},
                    {{{"deepslate_iron_ore", "Глубинной железной руды", 100, "Добыто глубинной железной руды"},
                    {"deepslate_coal_ore", "Глубинной угольной руды", 100, "Добыто глубинной угольной руды"}}, {}, {}},
                    {3000, {},
                    {},
                    }
                }, // Mission
                {
                    {},
                    "BlocksMissions", defaultNaturalBlocksOptions, {},
                    {{{"deepslate", "Глубинного сланца", 1000, "Добыто глубинного сланца"},
                    {"deepslate_iron_ore", "Глубинной железной руды", 150, "Добыто глубинной железной руды"},
                    {"deepslate_copper_ore", "Глубинной медной руды", 100, "Добыто глубинной медной руды"}}, {}, {}},
                    {3000, {},
                    {
                        {"glow_berries", "Светящихся ягод", 20, "Получено светящихся ягод"}
                    },
                    }
                }, // Mission
                {
                    {},
                    "BlocksMissions", defaultNaturalBlocksOptions, {},
                    {{{"deepslate", "Глубинного сланца", 1500, "Добыто глубинного сланца"},
                    {"deepslate_copper_ore", "Глубинной медной руды", 200, "Добыто глубинной медной руды"},
                    {"deepslate_gold_ore", "Глубинной золотой руды", 100, "Добыто глубинной золотой руды"}}, {}, {}},
                    {4000, {},
                    {},
                    }
                }, // Mission
                {
                    {},
                    "BlocksMissions", defaultNaturalBlocksOptions, {},
                    {{{"deepslate_redstone_ore", "Глубинной редстоуновой руды", 100, "Добыто глубинной редстоуновой руды"},
                    {"deepslate_lapis_ore", "Глубинной лазуритовой руды", 100, "Добыто глубинной лазуритовой руды"}}, {}, {}},
                    {4500, {},
                    {},
                    }
                }, // Mission
                {
                    {},
                    "BlocksMissions", defaultNaturalBlocksOptions, {},
                    {{{"deepslate_redstone_ore", "Глубинной редстоуновой руды", 100, "Добыто глубинной редстоуновой руды"},
                    {"deepslate_lapis_ore", "Глубинной лазуритовой руды", 100, "Добыто глубинной лазуритовой руды"}}, {}, {}},
                    {4500, {},
                    {},
                    }
                }, // Mission
                {
                    {},
                    "BlocksMissions", defaultNaturalBlocksOptions, {},
                    {{{"deepslate", "Глубинного сланца", 2500, "Добыто глубинного сланца"}}, {}, {}},
                    {5000, {},
                    {
                        {"glow_lichen", "Светящегося лишайника", 50, "Получено светящегося лишайника"}
                    },
                    }
                }, // Mission
                {
                    {},
                    "BlocksMissions", defaultNaturalBlocksOptions, {},
                    {{{"deepslate_diamond_ore", "Глубинной алмазной руды", 50, "Добыто глубинной алмазной руды"}}, {}, {}},
                    {5000, {},
                    {},
                    }
                }, // Mission
                {
                    {},
                    "BlocksMissions", defaultNaturalBlocksOptions, {},
                    {{{"deepslate_coal_ore", "Глубинной угольной руды", 500, "Добыто глубинной угольной руды"},
                    {"deepslate_iron_ore", "Глубинной железной руды", 300, "Добыто глубинной железной руды"},
                    {"deepslate_redstone_ore", "Глубинной редстоуновой руды", 200, "Добыто глубинной редстоуновой руды"},
                    {"deepslate_lapis_ore", "Глубинной лазуритовой руды", 200, "Добыто глубинной лазуритовой руды"}}, {}, {}},
                    {10000, {},
                    {},
                    }
                }, // Mission
                {
                    {},
                    "BlocksMissions", defaultNaturalBlocksOptions, {},
                    {{{"deepslate_emerald_ore", "Глубинной изумрудной руды", 25, "Добыто глубинной изумрудной руды"}}, {}, {}},
                    {2500, {},
                    {
                        {"sculk_shrieker", "Скалковых крикуна", 3, "Получено скалковых крикунов"},
                        {"sculk_sensor", "Акустических датчиков", 5, "Получено акустических датчиков"},
                        {"sculk_catalyst", "Скалк-катализатора", 3, "Получено скалк-катализаторов"},
                    },
                    }
                }, // Mission
                {
                    {},
                    "BlocksMissions", defaultNaturalBlocksOptions, {},
                    {{{"deepslate_iron_ore", "Глубинной железной руды", 500, "Добыто глубинной железной руды"},
                    {"deepslate_copper_ore", "Глубинной медной руды", 500, "Добыто глубинной медной руды"},
                    {"deepslate_diamond_ore", "Глубинной алмазной руды", 50, "Добыто глубинной алмазной руды"}}, {}, {}},
                    {10000, {},
                    {},
                    }
                }, // Mission
                {
                    {},
                    "BlocksMissions", defaultRepeatableOptions, {},
                    {{{"deepslate_diamond_ore", "Глубинной алмазной руды", 100, "Добыто глубинной алмазной руды"},
                    {"deepslate_emerald_ore", "Глубинной изумрудной руды", 60, "Добыто глубинной изумрудной руды"}}, {}, {}},
                    {2500, {},
                    {
                        {"sculk_shrieker", "Скалковых крикуна", 3, "Получено скалковых крикунов"},
                        {"sculk_sensor", "Акустических датчиков", 5, "Получено акустических датчиков"},
                        {"sculk_catalyst", "Скалк-катализатора", 3, "Получено скалк-катализаторов"},
                    },
                    }
                }, // Mission
            }
        }, // MissionGroup
    }
}; // MissionPack
