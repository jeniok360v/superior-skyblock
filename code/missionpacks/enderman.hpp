#pragma once

#include "MissionPack.hpp"

const std::string enderman1 = "eyJ0ZXh0dXJlcyI6eyJTS0lOIjp7InVybCI6Imh0dHA6Ly90ZXh0dXJlcy5taW5lY3JhZnQubmV0L3RleHR1cmUvNzdmN2I1MWNhNjk2NmJlMmRlY2ZlYjNkNTg1ZDJkNjU0MTkzYjAzY2I4YzEzNjU4YTQzNjliNTkxNGRmZTg2YyJ9fX0=";
const std::string enderman2 = "eyJ0ZXh0dXJlcyI6eyJTS0lOIjp7InVybCI6Imh0dHA6Ly90ZXh0dXJlcy5taW5lY3JhZnQubmV0L3RleHR1cmUvY2EwODdlMWY4ZjczNzE1YTkyNmFmMWM1MDc1ZjJhMjI2YTA3NDZmODVkNTM1YjZjNTI2ODI0ZmVkMjYxNGNkMSJ9fX0=";

MissionPack endermanPack
{
    "enderman",
    {
        {
            "enderman", "Эндермены", "PLAYER_HEAD", enderman1,
            {
                {
                    {},
                    "KillsMissions", defaultOptions, {},
                    {{{"enderman", "Эндерменов", 50, "Эндерменов убито"}}, {}, {}},
                    {1000, {},
                    {
                        {"end_stone", "Эндерняка", 50, "Получено эндерняка"}
                    },
                    }
                }, // Mission
                {
                    {},
                    "KillsMissions", defaultOptions, {},
                    {{{"enderman", "Эндерменов", 100, "Эндерменов убито"}}, {}, {}},
                    {1500, {},
                    {
                        {"end_stone", "Эндерняка", 100, "Получено эндерняка"}
                    },
                    }
                }, // Mission
                {
                    {},
                    "CraftingMissions", defaultOptions, {},
                    {{{"ender_chest", "Эндер сундуков", 30, "Скрафчено эндер сундуков"}}, {}, {}},
                    {1000, {},
                    {},
                    }
                }, // Mission
                {
                    {},
                    "KillsMissions", defaultOptions, {},
                    {{{"enderman", "Эндерменов", 200, "Эндерменов убито"}}, {}, {}},
                    {1500, {},
                    {
                        {"end_stone", "Эндерняка", 200, "Получено эндерняка"}
                    },
                    }
                }, // Mission
                {
                    {},
                    "KillsMissions", defaultOptions, {},
                    {{{"endermite", "Эндермитов", 50, "Эндермитов убито"}}, {}, {}},
                    {2500, {},
                    {
                        {"end_stone", "Эндерняка", 100, "Получено эндерняка"}
                    },
                    }
                }, // Mission
                {
                    {},
                    "KillsMissions", defaultOptions, {},
                    {{{"enderman", "Эндерменов", 400, "Эндерменов убито"}}, {}, {}},
                    {2500, {},
                    {
                        {"chorus_flower", "Хоруса", 10, "Получено хоруса"},
                        {"end_stone", "Эндерняка", 400, "Получено эндерняка"}
                    },
                    }
                }, // Mission
                {
                    {},
                    "CraftingMissions", defaultOptions, {},
                    {{{"end_crystal", "Кристаллов энда", 25, "Скрафчено кристаллов энда"}}, {}, {}},
                    {1000, {},
                    {},
                    }
                }, // Mission
                {
                    {},
                    "KillsMissions", defaultOptions, {},
                    {{{"enderman", "Эндерменов", 800, "Эндерменов убито"}}, {}, {}},
                    {4500, {},
                    {
                        {"end_stone", "Эндерняка", 800, "Получено эндерняка"}
                    },
                    }
                }, // Mission
                {
                    {},
                    "KillsMissions", defaultOptions, {},
                    {{{"endermite", "Эндермитов", 80, "Эндермитов убито"}}, {}, {}},
                    {3500, {},
                    {
                        {"end_stone", "Эндерняка", 200, "Получено эндерняка"}
                    },
                    }
                }, // Mission
                {
                    {},
                    "KillsMissions", defaultOptions, {},
                    {{{"enderman", "Эндерменов", 1000, "Эндерменов убито"}}, {}, {}},
                    {5000, {},
                    {
                        {"end_stone", "Эндерняка", 1000, "Получено эндерняка"}
                    },
                    }
                }, // Mission
                {
                    {},
                    "KillsMissions", defaultRepeatableOptions, {},
                    {{{"endermite", "Эндермитов", 100, "Эндермитов убито"}}, {}, {}},
                    {1500, {},
                    {
                        {"end_stone", "Эндерняка", 500, "Получено эндерняка"},
                        {"rabbit_spawn_egg", "Яйцо спауна кролика", 1, "Получено яйцо спауна кролика"}
                    },
                    }
                }, // Mission
            }
        }, // MissionGroup
    }
}; // MissionPack
