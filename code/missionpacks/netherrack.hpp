#pragma once

#include "MissionPack.hpp"

const std::string netherrack1 = "eyJ0ZXh0dXJlcyI6eyJTS0lOIjp7InVybCI6Imh0dHA6Ly90ZXh0dXJlcy5taW5lY3JhZnQubmV0L3RleHR1cmUvZWRlMGI0OTY1ZTI1ZTdkYzFjZTIwNGIzNjY1Y2E2YWIxNzBjMGVmMjI2YjM4NWJlMGEyMmJhMDk5MDk4MDA0MSJ9fX0=";

MissionPack netherrackPack
{
    "netherrack",
    {
        {
            "netherrack", "Генератор базальта", "PLAYER_HEAD", netherrack1,
            {
                {
                    {"Постройте генератор базальта"},
                    "BlocksMissions", defaultNaturalBlocksOptions, {},
                    {{{"hopper_minecart", "Вагонетки с воронкой", 3, "Скрафчено вагонеток с воронкой"}}, {}, {}},
                    {200, {},
                    {
                        {"soul_soil", "Почвы душ", 10, "Получено почвы душ"},
                    },
                    }
                }, // Mission
                {
                    {},
                    "EnchantingMissions", defaultOptions, {},
                    {{}, {}, {}, {{"diamond_pickaxe", "Алмазная кирка", 1, "DIG_SPEED", "Эффективность", 5, "Алмазная кирка(эффективность 5), зачаровано"}}},
                    {1000, {},
                    {
                        {"blue_ice", "Синего льда", 5, "Получено синего льда"},
                        {"lava_bucket", "Ведра лавы", 3, "Получено вёдер лавы"}
                    },
                    }
                }, // Mission
                {
                    {},
                    "BlocksMissions", defaultNaturalBlocksOptions, {},
                    {{{"netherrack", "Адского камня", 200, "Добыто адского камня"},
                    {"blackstone", "Чернокамня", 200, "Добыто чернокамня"},
                    {"basalt", "Базальта", 200, "Добыто базальта"},
                    {"glowstone", "Светящегося камня", 50, "Добыто светящегося камня"},
                    {"nether_quartz_ore", "Кварцевой руды", 50, "Добыто кварцевой руды"}}, {}, {}},
                    {2000, {},
                    {
                        {"soul_soil", "Почвы душ", 10, "Получено почвы душ"},
                    },
                    }
                }, // Mission
                {
                    {},
                    "BlocksMissions", defaultNaturalBlocksOptions, {},
                    {{{"glowstone", "Светящегося камня", 100, "Добыто светящегося камня"},
                    {"nether_quartz_ore", "Кварцевой руды", 100, "Добыто кварцевой руды"},
                    {"nether_gold_ore", "Незерской золотой руды", 100, "Добыто незерской золотой руды"}}, {}, {}},
                    {3000, {},
                    {
                        {"soul_soil", "Почвы душ", 20, "Получено почвы душ"},
                    },
                    }
                }, // Mission
                {
                    {},
                    "BlocksMissions", defaultNaturalBlocksOptions, {},
                    {{{"netherrack", "Адского камня", 400, "Добыто адского камня"}}, {}, {}},
                    {3000, {},
                    {
                        {"warped_nylium", "Искажённого нилия", 5, "Получено искажённого нилия"},
                        {"crimson_nylium", "Багрового нилия", 5, "Получено багрового нилия"},
                    },
                    }
                }, // Mission
                {
                    {},
                    "BlocksMissions", defaultNaturalBlocksOptions, {},
                    {{{"blackstone", "Чернокамня", 500, "Добыто чернокамня"},
                    {"basalt", "Базальта", 500, "Добыто базальта"},
                    {"glowstone", "Светящегося камня", 50, "Добыто светящегося камня"}}, {}, {}},
                    {3500, {},
                    {},
                    }
                }, // Mission
                {
                    {},
                    "BlocksMissions", defaultNaturalBlocksOptions, {},
                    {{{"glowstone", "Светящегося камня", 100, "Добыто светящегося камня"},
                    {"gilded_blackstone", "Позолоченного чернокамня", 50, "Добыто позолоченного чернокамня"}}, {}, {}},
                    {5000, {},
                    {
                        {"soul_soil", "Почвы душ", 30, "Получено почвы душ"},
                    },
                    }
                }, // Mission
                {
                    {},
                    "BlocksMissions", defaultNaturalBlocksOptions, {},
                    {{{"netherrack", "Адского камня", 200, "Добыто адского камня"}}, {}, {}},
                    {2000, {},
                    {
                        {"warped_nylium", "Искажённого нилия", 10, "Получено искажённого нилия"},
                        {"crimson_nylium", "Багрового нилия", 10, "Получено багрового нилия"},
                    },
                    }
                }, // Mission
                {
                    {},
                    "BlocksMissions", defaultNaturalBlocksOptions, {},
                    {{{"netherrack", "Адского камня", 800, "Добыто адского камня"},
                    {"nether_quartz_ore", "Кварцевой руды", 100, "Добыто кварцевой руды"}}, {}, {}},
                    {4500, {},
                    {},
                    }
                }, // Mission
                {
                    {},
                    "BlocksMissions", defaultNaturalBlocksOptions, {},
                    {{{"blackstone", "Чернокамня", 600, "Добыто чернокамня"},
                    {"gilded_blackstone", "Позолоченного чернокамня", 80, "Добыто позолоченного чернокамня"}}, {}, {}},
                    {4000, {},
                    {
                        {"soul_soil", "Почвы душ", 80, "Получено почвы душ"},
                    },
                    }
                }, // Mission
                {
                    {},
                    "BlocksMissions", defaultNaturalBlocksOptions, {},
                    {{{"ancient_debris", "Древних обломков", 12, "Добыто древних обломков"}}, {}, {}},
                    {5000, {},
                    {},
                    }
                }, // Mission
                {
                    {},
                    "BlocksMissions", defaultRepeatableOptions, {},
                    {{{"glowstone", "Светящегося камня", 100, "Добыто светящегося камня"},
                    {"gilded_blackstone", "Позолоченного чернокамня", 40, "Добыто позолоченного чернокамня"},
                    {"ancient_debris", "Древних обломков", 24, "Добыто древних обломков"}}, {}, {}},
                    {1500, {},
                    {
                        {"soul_soil", "Почвы душ", 60, "Получено почвы душ"},
                    },
                    }
                }, // Mission
            }
        }, // MissionGroup
    }
}; // MissionPack
