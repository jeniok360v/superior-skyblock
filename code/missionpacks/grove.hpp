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
                    {{{"birch_log", "Берёзовые брёвна", 5, "Срублено берёзы"}}},
                    {250, {},
                    {
                        {"birch_sapling", "Саженцы берёзы", 2, "Получено саженцев берёзы"}
                    }
                    }
                }, // Mission
                {
                    {},
                    "BlocksMissions", defaultNaturalBlocksOptions, {},
                    {{{"birch_log", "Берёзовые брёвна", 35, "Срублено берёзы"}}},
                    {600, {},
                    {}
                    }
                }, // Mission
                {
                    {},
                    "BlocksMissions", defaultNaturalBlocksOptions, {},
                    {{{"birch_log", "Берёзовые брёвна", 150, "Срублено берёзы"}}},
                    {1500, {},
                    {
                        {"dirt", "Земля", 10, "Получено земли"},
                        {"oak_sapling", "Саженцы дуба", 5, "Получено саженцев дуба"},
                    }
                    }
                }, // Mission
                {
                    {},
                    "BlocksMissions", defaultNaturalBlocksOptions, {},
                    {{{"oak_log", "Дубовые брёвна", 50, "Срублено дуба"}}},
                    {800, {},
                    {
                        {"dirt", "Земля", 5, "Получено земли"},
                    }
                    }
                }, // Mission
                {
                    {},
                    "BlocksMissions", defaultNaturalBlocksOptions, {},
                    {{{"oak_log", "Дубовые брёвна", 120, "Срублено дуба"},
                    {"birch_log", "Берёзовые брёвна", 200, "Срублено берёзы"}}},
                    {2500, {},
                    {
                        {"dirt", "Земля", 15, "Получено земли"},
                    }
                    }
                }, // Mission
                {
                    {},
                    "BlocksMissions", defaultNaturalBlocksOptions, {},
                    {{{"oak_log", "Дубовые брёвна", 300, "Срублено дуба"}}},
                    {2000, {},
                    {
                        {"acacia_sapling", "Саженцы акации", 7, "Получено саженцев акации"},
                    }
                    }
                }, // Mission
                {
                    {},
                    "BlocksMissions", defaultNaturalBlocksOptions, {},
                    {{{"birch_log", "Берёзовые брёвна", 100, "Срублено берёзы"},
                    {"oak_log", "Дубовые брёвна", 100, "Срублено дуба"},
                    {"acacia_log", "Брёвна акации", 50, "Срублено акации"}}},
                    {100, {},
                    {
                        {"dirt", "Земля", 20, "Получено земли"},
                    }
                    }
                }, // Mission
                {
                    {},
                    "BlocksMissions", defaultNaturalBlocksOptions, {},
                    {{{"acacia_log", "Брёвна акации", 150, "Срублено акации"}}},
                    {1500, {},
                    {
                        {"dirt", "Земля", 20, "Получено земли"},
                    }
                    }
                }, // Mission
                {
                    {},
                    "BlocksMissions", defaultNaturalBlocksOptions, {},
                    {{{"acacia_log", "Брёвна акации", 250, "Срублено акации"},
                    {"oak_log", "Дубовые брёвна", 350, "Срублено дуба"}}},
                    {4500, {},
                    {
                        {"dirt", "Земля", 40, "Получено земли"},
                    }
                    }
                }, // Mission
                {
                    {},
                    "BlocksMissions", defaultNaturalBlocksOptions, {},
                    {{{"birch_log", "Берёзовые брёвна", 300, "Срублено берёзы"},
                    {"oak_log", "Дубовые брёвна", 300, "Срублено дуба"}}},
                    {4000, {},
                    {}
                    }
                }, // Mission
                {
                    {},
                    "BlocksMissions", defaultNaturalBlocksOptions, {},
                    {{{"birch_log", "Берёзовые брёвна", 450, "Срублено берёзы"},}},
                    {3500, {},
                    {}
                    }
                }, // Mission
                {
                    {},
                    "BlocksMissions", defaultNaturalBlocksOptions, {},
                    {{{"birch_log", "Берёзовые брёвна", 300, "Срублено берёзы"},
                    {"oak_log", "Дубовые брёвна", 300, "Срублено дуба"},
                    {"acacia_log", "Брёвна акации", 250, "Срублено акации"}}},
                    {7000, {},
                    {
                        {"dirt", "Земля", 60, "Получено земли"},
                    }
                    }
                }, // Mission
                {
                    {},
                    "BlocksMissions", defaultNaturalBlocksOptions, {},
                    {{{"oak_log", "Дубовые брёвна", 800, "Срублено дуба"}}},
                    {5000, {},
                    {}
                    }
                }, // Mission
                {
                    {},
                    "BlocksMissions", defaultRepeatableOptions, {},
                    {{{"birch_log", "Берёзовые брёвна", 400, "Срублено берёзы"},
                    {"oak_log", "Дубовые брёвна", 400, "Срублено дуба"},
                    {"acacia_log", "Брёвна акации", 300, "Срублено акации"}}},
                    {1800, {},
                    {
                        {"dirt", "Земля", 20, "Получено земли"},
                    }
                    }
                }, // Mission
            }
        }, // MissionGroup
    }
}; // MissionPack
