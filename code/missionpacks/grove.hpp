#pragma once

#include "MissionPack.hpp"

const std::string grove1 = "eyJ0ZXh0dXJlcyI6eyJTS0lOIjp7InVybCI6Imh0dHA6Ly90ZXh0dXJlcy5taW5lY3JhZnQubmV0L3RleHR1cmUvMWFlNTMyY2ZiNWFhNjhlOGE3MDQwYjY5MTczZTFmN2JjMGRkNGE0NzFkNzNkYTk1MWVhNjg1YmRiZTRkNGVlNiJ9fX0=";
const std::string grove2 = "eyJ0ZXh0dXJlcyI6eyJTS0lOIjp7InVybCI6Imh0dHA6Ly90ZXh0dXJlcy5taW5lY3JhZnQubmV0L3RleHR1cmUvMTM4N2RjODQ0ZTk4ZWMyMmZjMzU1NTgzNGE5YTIxNjlhODZlNTg3MWNkODU0YjgyNGQxYjNhODI1NWFmYmUifX19";
const std::string grove3 = "eyJ0ZXh0dXJlcyI6eyJTS0lOIjp7InVybCI6Imh0dHA6Ly90ZXh0dXJlcy5taW5lY3JhZnQubmV0L3RleHR1cmUvMThlMTNiZmYzNmUxNmZjYmQ1MzZjODNkMjlkMDk3NzhkOGI5NWFlNWIxNmUzYmQwYzg2MjY1NjVkYTY1ZjM4NyJ9fX0=";

// const std::string zombie1 = "";

MissionPack grovePack
{
    "grove",
    {
        {
            "grove", "Роща", "PLAYER_HEAD", grove3,
            {
                {
                    {},
                    "BlocksMissions", defaultNaturalBlocksOptions, {},
                    {{{"birch_log", "Берёзовых брёвен", 5, "Срублено берёзы"}}},
                    {250, {},
                    {
                        {"birch_sapling", "Саженца берёзы", 2, "Получено саженцев берёзы"}
                    }
                    }
                }, // Mission
                {
                    {},
                    "BlocksMissions", defaultNaturalBlocksOptions, {},
                    {{{"birch_log", "Берёзовых брёвен", 35, "Срублено берёзы"}}},
                    {600, {},
                    {}
                    }
                }, // Mission
                {
                    {},
                    "BlocksMissions", defaultNaturalBlocksOptions, {},
                    {{{"birch_log", "Берёзовых брёвен", 150, "Срублено берёзы"}}},
                    {1500, {},
                    {
                        {"dirt", "Земли", 10, "Получено земли"},
                        {"oak_sapling", "Саженцев дуба", 5, "Получено саженцев дуба"}
                    }
                    }
                }, // Mission
                {
                    {},
                    "BlocksMissions", defaultNaturalBlocksOptions, {},
                    {{{"oak_log", "Дубовых брёвен", 50, "Срублено дуба"}}},
                    {800, {},
                    {
                        {"dirt", "Земли", 5, "Получено земли"},
                    }
                    }
                }, // Mission
                {
                    {},
                    "BlocksMissions", defaultNaturalBlocksOptions, {},
                    {{{"oak_log", "Дубовых брёвен", 120, "Срублено дуба"},
                    {"birch_log", "Берёзовых брёвен", 200, "Срублено берёзы"}}},
                    {2500, {},
                    {
                        {"dirt", "Земли", 15, "Получено земли"},
                    }
                    }
                }, // Mission
                {
                    {},
                    "BlocksMissions", defaultNaturalBlocksOptions, {},
                    {{{"oak_log", "Дубовых брёвен", 300, "Срублено дуба"}}},
                    {2000, {},
                    {
                        {"acacia_sapling", "Саженцев акации", 7, "Получено саженцев акации"},
                    }
                    }
                }, // Mission
                {
                    {},
                    "BlocksMissions", defaultNaturalBlocksOptions, {},
                    {{{"birch_log", "Берёзовых брёвен", 100, "Срублено берёзы"},
                    {"oak_log", "Дубовых брёвен", 100, "Срублено дуба"},
                    {"acacia_log", "Брёвен акации", 50, "Срублено акации"}}},
                    {100, {},
                    {
                        {"dirt", "Земли", 20, "Получено земли"},
                        {"cactus", "Кактусов", 5, "Получено кактусов"}
                    }
                    }
                }, // Mission
                {
                    {},
                    "BlocksMissions", defaultNaturalBlocksOptions, {},
                    {{{"acacia_log", "брёвен акации", 150, "Срублено акации"}}},
                    {1500, {},
                    {
                        {"dirt", "Земли", 20, "Получено земли"},
                    }
                    }
                }, // Mission
                {
                    {},
                    "BlocksMissions", defaultNaturalBlocksOptions, {},
                    {{{"acacia_log", "Брёвен акации", 250, "Срублено акации"},
                    {"oak_log", "Дубовых брёвен", 350, "Срублено дуба"}}},
                    {4500, {},
                    {
                        {"dirt", "Земли", 40, "Получено земли"},
                    }
                    }
                }, // Mission
                {
                    {},
                    "BlocksMissions", defaultNaturalBlocksOptions, {},
                    {{{"birch_log", "Берёзовых брёвен", 300, "Срублено берёзы"},
                    {"oak_log", "Дубовых брёвен", 300, "Срублено дуба"}}},
                    {4000, {},
                    {}
                    }
                }, // Mission
                {
                    {},
                    "BlocksMissions", defaultNaturalBlocksOptions, {},
                    {{{"birch_log", "Берёзовых брёвен", 450, "Срублено берёзы"},}},
                    {3500, {},
                    {}
                    }
                }, // Mission
                {
                    {},
                    "BlocksMissions", defaultNaturalBlocksOptions, {},
                    {{{"birch_log", "Берёзовых брёвен", 300, "Срублено берёзы"},
                    {"oak_log", "Дубовых брёвен", 300, "Срублено дуба"},
                    {"acacia_log", "Брёвен акации", 250, "Срублено акации"}}},
                    {7000, {},
                    {
                        {"dirt", "Земли", 60, "Получено земли"},
                    }
                    }
                }, // Mission
                {
                    {},
                    "BlocksMissions", defaultNaturalBlocksOptions, {},
                    {{{"oak_log", "Дубовых брёвен", 800, "Срублено дуба"}}},
                    {5000, {},
                    {}
                    }
                }, // Mission
                {
                    {},
                    "BlocksMissions", defaultRepeatableOptions, {},
                    {{{"birch_log", "Берёзовых брёвен", 400, "Срублено берёзы"},
                    {"oak_log", "Дубовых брёвен", 400, "Срублено дуба"},
                    {"acacia_log", "Брёвен акации", 300, "Срублено акации"}}},
                    {1800, {},
                    {
                        {"dirt", "Земли", 30, "Получено земли"},
                    }
                    }
                }, // Mission
            }
        }, // MissionGroup
    }
}; // MissionPack
