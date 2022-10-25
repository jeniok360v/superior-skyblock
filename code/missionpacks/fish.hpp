#pragma once

#include "MissionPack.hpp"

const std::string fish1 = "eyJ0ZXh0dXJlcyI6eyJTS0lOIjp7InVybCI6Imh0dHA6Ly90ZXh0dXJlcy5taW5lY3JhZnQubmV0L3RleHR1cmUvMTNhMWQxODBlODcwOTE3YTBiNmUwMzlkMTkxYzMwM2MxNGU0NGZkMjhkYWIyY2QyNmNlN2E1ZDk4MzNhZTllNSJ9fX0=";
const std::string fish2 = "eyJ0ZXh0dXJlcyI6eyJTS0lOIjp7InVybCI6Imh0dHA6Ly90ZXh0dXJlcy5taW5lY3JhZnQubmV0L3RleHR1cmUvYzc0MGZhMWZhOTA5MmUzNjhlNjc5OGY5YmNmZThjODMxOGUwMzk5NmEyMDJiZWFlOTE5ZTVjYjkwMDAzOWQ0YyJ9fX0=";
const std::string fish3 = "eyJ0ZXh0dXJlcyI6eyJTS0lOIjp7InVybCI6Imh0dHA6Ly90ZXh0dXJlcy5taW5lY3JhZnQubmV0L3RleHR1cmUvMjBhNWJiMDcxNjQ3MzlhMmZjNjRlMjFiNjI5Yzk5OWZkMDVhMzEzOTk5MDk4NTEwODRiZWEyYTBjN2ZjMjRiZCJ9fX0=";

MissionPack fishPack
{
    "fish",
    {
        {
            "fish", "Рыбалка", "PLAYER_HEAD", fish2,
            {
                {
                    {},
                    "FishingMissions", defaultOptions, {},
                    {{{"cod", "Трески", 5, "Выловлено трески"},
                    {"salmon", "Лосося", 5, "Выловлено лосося"}}},
                    {300, {},
                    {},
                    }
                }, // Mission
                {
                    {},
                    "FishingMissions", defaultOptions, {},
                    {{{"cod", "Трески", 20, "Выловлено трески"},
                    {"salmon", "Лосося", 4, "Выловлено лосося"},
                    {"pufferfish", "Иглобрюха", 2, "Выловлено иглобрюхов"}}},
                    {500, {},
                    {
                        {"brain_coral_block", "Мозгового коралла", 5, "Получено мозговых кораллов"},
                        {"tube_coral_block", "Трубчатого коралла", 5, "Получено трубчатых кораллов"}
                    },
                    }
                }, // Mission
                {
                    {},
                    "FishingMissions", defaultOptions, {},
                    {{{"tropical_fish", "Рыба-клоун", 1, "Выловлено рыбы-клоунов"}}},
                    {1000, {},
                    {
                        {"bubble_coral_block", "Пузырчатого коралла", 5, "Получено пузырчатых кораллов"},
                        {"fire_coral_block", "Огненного коралла", 5, "Получено огненных кораллов"},
                        {"horn_coral_block", "Рогового коралла", 5, "Получено роговых кораллов"},
                        {"sea_pickle", "Морских огурцов", 20, "Получено морских огурцов"},
                    },
                    }
                }, // Mission
                {
                    {},
                    "FishingMissions", defaultOptions, {},
                    {{{"cod", "Трески", 50, "Выловлено трески"},
                    {"salmon", "Лосося", 10, "Выловлено лосося"}}},
                    {1000, {},
                    {
                        {"kelp", "Ламинарии", 5, "Получено ламинарии"},
                    },
                    }
                }, // Mission
                {
                    {},
                    "FishingMissions", defaultOptions, {},
                    {{{"lily_pad", "Кувшинка", 1, "Выловлено кувшинок"}}},
                    {1500, {},
                    {
                        {"bubble_coral_block", "Пузырчатого коралла", 10, "Получено пузырчатых кораллов"},
                        {"sea_pickle", "Морских огурцов", 50, "Получено морских огурцов"},
                        {"sponge", "Губок", 5, "Получено губок"},
                    },
                    }
                }, // Mission
                {
                    {},
                    "FishingMissions", defaultOptions, {},
                    {{{"salmon", "Лосося", 15, "Выловлено лосося"},
                    {"pufferfish", "Иглобрюха", 3, "Выловлено иглобрюхов"},
                    {"tropical_fish", "Рыба-клоун", 1, "Выловлено рыбы-клоунов"}}},
                    {1000, {},
                    {
                        {"fire_coral_block", "Огненного коралла", 10, "Получено огненных кораллов"},
                        {"brain_coral_block", "Мозгового коралла", 10, "Получено мозговых кораллов"},
                    },
                    }
                }, // Mission
                {
                    {},
                    "FishingMissions", defaultOptions, {},
                    {{{"cod", "Трески", 100, "Выловлено трески"}}},
                    {2500, {},
                    {
                        {"tube_coral_block", "Трубчатого коралла", 15, "Получено трубчатых кораллов"},
                        {"horn_coral_block", "Рогового коралла", 15, "Получено роговых кораллов"},
                        {"sponge", "Губок", 10, "Получено губок"},
                    },
                    }
                }, // Mission
                {
                    {},
                    "FishingMissions", defaultOptions, {},
                    {{{"salmon", "Лосося", 20, "Выловлено лосося"},
                    {"saddle", "Седло", 1, "Выловлено сёдел"},
                    {"nautilus_shell", "Раковина наутилуса", 1, "Выловлено раковин наутилуса"}}},
                    {3000, {},
                    {
                        {"sponge", "Губок", 10, "Получено губок"},
                    },
                    }
                }, // Mission
                {
                    {},
                    "FishingMissions", defaultOptions, {},
                    {{{"salmon", "Лосося", 25, "Выловлено лосося"},
                    {"name_tag", "Бирка", 1, "Выловлено бирок"}}},
                    {3000, {},
                    {},
                    }
                }, // Mission
                {
                    {},
                    "FishingMissions", defaultOptions, {},
                    {{{"leather", "Кожи", 2, "Выловлено кожи"},
                    {"rotten_flesh", "Гнилых плоти", 2, "Выловлено гнилой плоти"},
                    {"bone", "Кости", 2, "Выловлено костей"},
                    {"string", "Нить", 1, "Выловлено нитей"}}},
                    {5000, {},
                    {
                        {"bubble_coral_block", "Пузырчатого коралла", 20, "Получено пузырчатых кораллов"},
                        {"fire_coral_block", "Огненного коралла", 20, "Получено огненных кораллов"}
                    },
                    }
                }, // Mission
                {
                    {},
                    "FishingMissions", defaultOptions, {},
                    {{{"salmon", "Лосося", 40, "Выловлено лосося"},
                    {"pufferfish", "Иглобрюхов", 15, "Выловлено иглобрюхов"},
                    {"tropical_fish", "Рыбы-клоуна", 3, "Выловлено рыбы-клоунов"}}},
                    {5000, {},
                    {
                        {"horn_coral_block", "Рогового коралла", 25, "Получено роговых кораллов"},
                        {"brain_coral_block", "Мозгового коралла", 20, "Получено мозговых кораллов"},
                        {"sponge", "Губок", 25, "Получено губок"},
                    },
                    }
                }, // Mission
                {
                    {},
                    "FishingMissions", defaultOptions, {},
                    {{{"cod", "Трески", 250, "Выловлено трески"},
                    {"salmon", "Лосося", 50, "Выловлено лосося"},
                    {"pufferfish", "Иглобрюхов", 20, "Выловлено иглобрюхов"},
                    {"tropical_fish", "Рыбы-клоуна", 5, "Выловлено рыбы-клоунов"}}},
                    {8000, {},
                    {
                        {"bubble_coral_block", "Пузырчатого коралла", 15, "Получено пузырчатых кораллов"},
                        {"fire_coral_block", "Огненного коралла", 15, "Получено огненных кораллов"},
                        {"horn_coral_block", "Рогового коралла", 5, "Получено роговых кораллов"},
                        {"brain_coral_block", "Мозгового коралла", 15, "Получено мозговых кораллов"},
                        {"tube_coral_block", "Трубчатого коралла", 30, "Получено трубчатых кораллов"}
                    },
                    }
                }, // Mission
                {
                    {},
                    "FishingMissions", defaultOptions, {},
                    {{{"ink_sac", "Чернильных мешков", 10, "Выловлено чернильных мешков"}}},
                    {15000, {},
                    {
                        {"heart_of_the_sea", "Сердце моря", 1, "Получено сердце моря"},
                    },
                    }
                }, // Mission
                {
                    {},
                    "FishingMissions", defaultRepeatableOptions, {},
                    {{{"cod", "Трески", 200, "Выловлено трески"},
                    {"salmon", "Лосося", 40, "Выловлено лосося"},
                    {"pufferfish", "Иглобрюхов", 15, "Выловлено иглобрюхов"},
                    {"tropical_fish", "Рыбы-клоуна", 3, "Выловлено рыбы-клоунов"}}},
                    {2000, {},
                    {
                        {"bubble_coral_block", "Пузырчатого коралла", 5, "Получено пузырчатых кораллов"},
                        {"fire_coral_block", "Огненного коралла", 5, "Получено огненных кораллов"},
                        {"horn_coral_block", "Рогового коралла", 5, "Получено роговых кораллов"},
                        {"brain_coral_block", "Мозгового коралла", 5, "Получено мозговых кораллов"},
                        {"tube_coral_block", "Трубчатого коралла", 5, "Получено трубчатых кораллов"},
                        {"sponge", "Губок", 5, "Получено губок"},
                    },
                    }
                }, // Mission
            }
        }, // MissionGroup
    }
}; // MissionPack
