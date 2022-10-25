#pragma once

#include "MissionPack.hpp"

const std::string pigman1 = "eyJ0ZXh0dXJlcyI6eyJTS0lOIjp7InVybCI6Imh0dHA6Ly90ZXh0dXJlcy5taW5lY3JhZnQubmV0L3RleHR1cmUvMWVkODBiZjk5ZGZiMDc1MTkyYjAyYTVkZDZiZjkxZWRkZDRjYjFmNDgxODkyMzIxMjExZmUyMTQyZDlkZjIyYyJ9fX0=";
// const std::string food1 = "";


MissionPack pigmanPack
{
    "pigman",
    {
        {
            "pigman", "Адские создания", "PLAYER_HEAD", pigman1,
            {
                {
                    {},
                    "FarmingMissions", defaultOptions, {},
                    {{{"nether_wart", "Адского нароста", 9, "Собрано адского нароста"}}, {}, {}},
                    {300, {},
                    {
                        {"soul_sand", "Песка душ", 30, "Получено песка душ"}
                    },
                    }
                }, // Mission
                {
                    {},
                    "KillsMissions", defaultOptions, {},
                    {{{"zombified_piglin", "Свинозомби", 20, "Убито свинозомби"}, 
                    {"piglin", "Пиглинов", 10, "Убито пиглинов"}}, {}, {}},
                    {600, {},
                    {},
                    }
                }, // Mission
                {
                    {},
                    "KillsMissions", defaultOptions, {},
                    {{{"zombified_piglin", "Свинозомби", 60, "Убито свинозомби"}, 
                    {"piglin", "Пиглинов", 40, "Убито пиглинов"}}, {}, {}},
                    {1200, {},
                    {
                        {"blaze_rod", "Стержень ифрита", 1, "Получено стрежней"}
                    },
                    }
                }, // Mission
                {
                    {},
                    "KillsMissions", defaultOptions,
                    {},
                    {{{"ghast", "Гаста", 3, "Убито гастов"}}, {}, {}},
                    {450, {},
                    {},
                    }
                }, // Mission
                {
                    {},
                    "KillsMissions", defaultOptions, {},
                    {{{"ghast", "Гастов", 13, "Убито гастов"}}, {}, {}},
                    {1500, {},
                    {
                        {"blaze_rod", "Стержень ифрита", 1, "Получено стрежней"}
                    },
                    }
                }, // Mission
                {
                    {},
                    "KillsMissions", defaultOptions, {},
                    {{{"zombified_piglin", "Свинозомби", 250, "Убито свинозомби"}, 
                    {"piglin", "Пиглинов", 120, "Убито пиглинов"}}, {}, {}},
                    {2500, {},
                    {
                        {"blaze_rod", "Стерженя ифрита", 2, "Получено стрежней"}
                    },
                    }
                }, // Mission
                {
                    {},
                    "KillsMissions", defaultOptions, {},
                    {{{"ghast", "Гаста", 34, "Убито гастов"}}, {}, {}},
                    {3400, {},
                    {
                        {"blaze_rod", "Стерженя ифрита", 2, "Получено стрежней"}
                    },
                    }
                }, // Mission
                {
                    {},
                    "KillsMissions", defaultOptions, {},
                    {{{"zombified_piglin", "Свинозомби", 750, "Убито свинозомби"}, 
                    {"piglin", "Пиглинов", 400, "Убито пиглинов"}}, {}, {}},
                    {5000, {},
                    {
                        {"blaze_rod", "Стерженя ифрита", 3, "Получено стрежней"}
                    },
                    }
                }, // Mission
                {
                    {},
                    "KillsMissions", defaultOptions, {},
                    {{{"ghast", "Гастов", 69, "Убито гастов"}}, {}, {}},
                    {6900, {},
                    {
                        {"blaze_rod", "Стерженя ифрита", 3, "Получено стрежней"}
                    },
                    }
                }, // Mission
                {
                    {},
                    "KillsMissions", defaultRepeatableOptions, {},
                    {{{"zombified_piglin", "Свинозомби", 600, "Убито свинозомби"}, 
                    {"ghast", "Гастов", 30, "Убито гастов"}}, {}, {}},
                    {1000, {},
                    {
                        {"blaze_rod", "Стержень ифрита", 1, "Получено стержней"}
                    },
                    }
                }, // Mission
            }
        }, // MissionGroup
    }
}; // MissionPack
