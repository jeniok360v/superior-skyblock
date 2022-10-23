#pragma once

#include "MissionPack.hpp"

const std::string zombie1 = "eyJ0ZXh0dXJlcyI6eyJTS0lOIjp7InVybCI6Imh0dHA6Ly90ZXh0dXJlcy5taW5lY3JhZnQubmV0L3RleHR1cmUvZjhlNjYyMzljNmYzYzk3YjhiYWE1MGIzMmVmZDYzYzYxZTk0ZThlZGU2MDY2NGU3YjllZGM0ZWZkNjRmMzk2MyJ9fX0=";
// const std::string zombie1 = "";



MissionPack undeadPack
{
    "undead",
    {
        {
            "undead", "Нечисть", "PLAYER_HEAD", zombie1,
            {
                {
                    {},
                    "KillsMissions", defaultOptions, {},
                    {{{"zombie", "Зомби", 15, "Зомби убито"}}, {}, {}},
                    {400, {},
                    {},
                    }
                }, // Mission
                {
                    {},
                    "KillsMissions", defaultOptions, {},
                    {{{"zombie", "Зомби", 8, "Зомби убито"}, 
                    {"skeleton", "Скелетов", 10, "Скелетов убито"}, 
                    {"creeper", "Криперов", 15, "Криперов убито"}, 
                    {"spider", "Пауков", 8, "Пауков убито"}}, {}, {}},
                    {800, {},
                    {},
                    }
                }, // Mission
                {
                    {},
                    "KillsMissions", defaultOptions, {},
                    {{{"skeleton", "Скелетов", 25, "Скелетов убито"}, 
                    {"creeper", "Криперов", 25, "Криперов убито"}, 
                    {"spider", "Пауков", 20, "Пауков убито"}}, {}, {}},
                    {1000, {},
                    {},
                    }
                }, // Mission
                {
                    {},
                    "KillsMissions", defaultOptions, {},
                    {{{"zombie", "Зомби", 25, "Зомби убито"}, 
                    {"enderman", "Эндермен", 1, "Эндермен убит"}, 
                    {"phantom", "Фантомов", 3, "Фантомов убито"}}, {}, {}},
                    {1200, {},
                    {
                        {"end_portal_frame", "Рамка эндер портала", 1, "Рамка портала получена"}
                    },
                    }
                }, // Mission
                {
                    {},
                    "CraftingMissions", defaultOptions, {},
                    {{{"white_bed", "Белая кровать", 1, "Белая кровать, скрафчено"}}, {}, {}},
                    {200, {},
                    {},
                    }
                }, // Mission
                {
                    {},
                    "KillsMissions", defaultOptions, {},
                    {{{"witch", "Ведьм", 3, "Ведьм убито"}}, {}, {}},
                    {666, {},
                    {},
                    }
                }, // Mission
                {
                    {},
                    "KillsMissions", defaultOptions, {},
                    {{{"enderman", "Эндерменов", 5, "Эндерменов убито"}, 
                    {"phantom", "Фантомов", 7, "Фантомов убито"}}, {}, {}},
                    {1500, {},
                    {
                        {"end_portal_frame", "Рамок эндер портала", 2, "Рамок портала получено"}
                    },
                    }
                }, // Mission
                {
                    {},
                    "KillsMissions", defaultOptions, {},
                    {{{"creeper", "Криперов", 200, "Криперов убито"}}, {}, {}},
                    {3000, {},
                    {},
                    }
                }, // Mission
                {
                    {},
                    "KillsMissions", defaultOptions, {},
                    {{{"zombie_villager", "Зомби-жителя", 3, "Зомби-жителей убито"}}, {}, {}},
                    {1500, {},
                    {},
                    }
                }, // Mission
                {
                    {},
                    "KillsMissions", defaultOptions, {},
                    {{{"zombie", "Зомби", 80, "Зомби убито"}, 
                    {"skeleton", "Скелетов", 50, "Скелетов убито"}, 
                    {"witch", "Ведьм", 5, "Ведьм убито"}, 
                    {"spider", "Пауков", 35, "Пауков убито"}}, {}, {}},
                    {2000, {},
                    {},
                    }
                }, // Mission
                {
                    {},
                    "KillsMissions", defaultOptions, {},
                    {{{"enderman", "Эндермен", 1, "Эндермен убит"}}, {}, {}},
                    {100, {},
                    {
                        {"end_portal_frame", "Рамка эндер портала", 1, "Рамка портала получена"}
                    },
                    }
                }, // Mission
                {
                    {},
                    "KillsMissions", defaultOptions, {},
                    {{{"zombie", "Зомби", 400, "Зомби убито"}, 
                    {"skeleton", "Скелетов", 300, "Скелетов убито"}}, {}, {}},
                    {3000, {},
                    {},
                    }
                }, // Mission
                {
                    {},
                    "KillsMissions", defaultOptions, {},
                    {{{"zombie", "Зомби", 250, "Зомби убито"},
                    {"witch", "Ведьм", 10, "Ведьм убито"}, 
                    {"spider", "Пауков", 80, "Пауков убито"},
                    {"phantom", "Фантомов", 20, "Фантомов убито"}}, {}, {}},
                    {4000, {},
                    {},
                    }
                }, // Mission
                {
                    {},
                    "KillsMissions", defaultOptions, {},
                    {{{"spider", "Пауков", 50, "Пауков убито"},
                    {"enderman", "Эндерменов", 3, "Эндерменов убито"}}, {}, {}},
                    {900, {},
                    {
                        {"end_portal_frame", "Рамок эндер портала", 2, "Рамок портала получено"}
                    },
                    }
                }, // Mission
                {
                    {},
                    "KillsMissions", defaultOptions, {},
                    {{{"zombie", "Зомби", 400, "Зомби убито"}, 
                    {"skeleton", "Скелетов", 400, "Скелетов убито"}, 
                    {"creeper", "Криперов", 400, "Криперов убито"}, 
                    {"spider", "Пауков", 200, "Пауков убито"}}, {}, {}},
                    {5000, {},
                    {},
                    }
                }, // Mission
                {
                    {},
                    "KillsMissions", defaultOptions, {},
                    {{{"zombie", "Зомби", 300, "Зомби убито"}, 
                    {"zombie_villager", "Зомби-жителя", 10, "Зомби-жителей убито"}, 
                    {"phantom", "Фантомов", 10, "Фантомов убито"}}, {}, {}},
                    {2000, {},
                    {},
                    }
                }, // Mission
                {
                    {},
                    "KillsMissions", defaultOptions, {},
                    {{{"creeper", "Криперов", 125, "Криперов убито"},
                    {"enderman", "Эндерменов", 10, "Эндерменов убито"}}, {}, {}},
                    {2000, {},
                    {
                        {"end_portal_frame", "Рамок эндер портала", 3, "Рамок портала получено"}
                    },
                    }
                }, // Mission
                {
                    {},
                    "KillsMissions", defaultOptions, {},
                    {{{"zombie", "Зомби", 500, "Зомби убито"}, 
                    {"skeleton", "Скелетов", 400, "Скелетов убито"}, 
                    {"witch", "Ведьм", 20, "Ведьм убито"}, 
                    {"spider", "Пауков", 200, "Пауков убито"}}, {}, {}},
                    {5000, {},
                    {},
                    }
                }, // Mission
                {
                    {},
                    "KillsMissions", defaultOptions, {},
                    {{{"witch", "Ведьм", 40, "Ведьм убито"}, 
                    {"spider", "Пауков", 200, "Пауков убито"}}, {}, {}},
                    {5000, {},
                    {},
                    }
                }, // Mission
                {
                    {},
                    "KillsMissions", defaultOptions, {},
                    {{{"zombie", "Зомби", 1000, "Зомби убито"}}, {}, {}},
                    {6000, {},
                    {},
                    }
                }, // Mission
                {
                    {},
                    "KillsMissions", defaultRepeatableOptions, {},
                    {{{"zombie", "Зомби", 600, "Зомби убито"}, 
                    {"skeleton", "Скелетов", 500, "Скелетов убито"}, 
                    {"creeper", "Криперов", 400, "Криперов убито"}, 
                    {"spider", "Пауков", 200, "Пауков убито"},
                    {"witch", "Ведьм", 10, "Ведьм убито"}}, {}, {}},
                    {1200, {},
                    {},
                    }
                }, // Mission
            }
        }, // MissionGroup
    }
}; // MissionPack
