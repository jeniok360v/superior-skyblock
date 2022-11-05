#pragma once

#include "MissionPack.hpp"

const std::string forest1 = "eyJ0ZXh0dXJlcyI6eyJTS0lOIjp7InVybCI6Imh0dHA6Ly90ZXh0dXJlcy5taW5lY3JhZnQubmV0L3RleHR1cmUvNTk2MDZjYjhjNjY4ZTZlMjdhYjJmM2ZhYzE1NzQ2NGVhZGZkZjI3ZDc5M2VlNGNhZjI5YmRkYjkxOGNjYTc3NyJ9fX0=";
const std::string forest2 = "eyJ0ZXh0dXJlcyI6eyJTS0lOIjp7InVybCI6Imh0dHA6Ly90ZXh0dXJlcy5taW5lY3JhZnQubmV0L3RleHR1cmUvMTUxYmNjNmJmZmE2ZGJhMTg3MGRiYTJjZjRiMWU4YjYxZmJiZjUxNDFkNDUzNzYzZjE1ZWQxM2M3MTIzZWEyYyJ9fX0=";
// const std::string forest2 = "";

MissionPack forestPack
{
    "forest",
    {
        {
            "forest", "Лес", "PLAYER_HEAD", forest2,
            {
                {
                    {},
                    "CraftingMissions", defaultNaturalBlocksOptions, {},
                    {{{"golden_apple", "Золотых яблок", 20, "Скрафчено золотых яблок"}}},
                    {1000, {},
                    {
                        {"dark_oak_sapling", "Саженцев тёмного дуба", 20, "Получено саженцев тёмного дуба"}
                    }
                    }
                }, // Mission
                {
                    {},
                    "BlocksMissions", defaultNaturalBlocksOptions, {},
                    {{{"dark_oak_log", "Брёвен тёмного дуба", 150, "Срублено тёмного дуба"}}},
                    {1200, {},
                    {
                        {"dirt", "Земли", 20, "Получено земли"},
                    }
                    }
                }, // Mission
                {
                    {},
                    "BlocksMissions", defaultNaturalBlocksOptions, {},
                    {{{"dark_oak_log", "Брёвен тёмного дуба", 350, "Срублено тёмного дуба"}}},
                    {2500, {},
                    {
                        {"dirt", "Земли", 40, "Получено земли"},
                        {"jungle_sapling", "Саженцев тропического дерева", 30, "Получено саженцев тропического дерева"}
                    }
                    }
                }, // Mission
                {
                    {},
                    "BlocksMissions", defaultNaturalBlocksOptions, {},
                    {{{"jungle_log", "Брёвен тропического дерева", 250, "Срублено тропического дерева"}}},
                    {2000, {},
                    {
                        {"podzol", "Подзола", 30, "Получено подзола"},
                        {"bamboo", "Бамбука", 15, "Получено бамбука"},
                        {"jungle_sapling", "Саженцев тропического дерева", 10, "Получено саженцев тропического дерева"}
                    }
                    }
                }, // Mission
                {
                    {},
                    "BlocksMissions", defaultNaturalBlocksOptions, {},
                    {{{"jungle_log", "Брёвен тропического дерева", 400, "Срублено тропического дерева"}}},
                    {3000, {},
                    {
                        {"cocoa_beans", "Какао", 20, "Получено какао"}
                    }
                    }
                }, // Mission
                {
                    {},
                    "BlocksMissions", defaultNaturalBlocksOptions, {},
                    {{{"jungle_log", "Брёвен тропического дерева", 300, "Срублено тропического дерева"},
                    {"dark_oak_log", "Брёвен тёмного дуба", 350, "Срублено тёмного дуба"}}},
                    {3500, {},
                    {
                        {"spruce_sapling", "Саженцев ели", 30, "Получено саженцев ели"},
                        {"mangrove_propagule", "Саженцев мангрового дерева", 30, "Получено саженцев мангрового дерева"},
                        {"jungle_sapling", "Саженцев тропического дерева", 5, "Получено саженцев тропического дерева"}
                    }
                    }
                }, // Mission
                {
                    {},
                    "BlocksMissions", defaultNaturalBlocksOptions, {},
                    {{{"mangrove_log", "Брёвен мангрового дерева", 200, "Срублено мангрового дерева"},
                    {"spruce_log", "Брёвен ели", 250, "Срублено брёвен ели"}}},
                    {3500, {},
                    {
                        {"dirt", "Земли", 60, "Получено земли"},
                    }
                    }
                }, // Mission
                {
                    {},
                    "BlocksMissions", defaultNaturalBlocksOptions, {},
                    {{{"mangrove_log", "Брёвен мангрового дерева", 400, "Срублено мангрового дерева"},
                    {"spruce_log", "Брёвен ели", 450, "Срублено брёвен ели"}}},
                    {6000, {},
                    {}
                    }
                }, // Mission
                {
                    {},
                    "BlocksMissions", defaultRepeatableOptions, {},
                    {{{"mangrove_log", "Брёвен мангрового дерева", 500, "Срублено мангрового дерева"},
                    {"spruce_log", "Брёвен ели", 600, "Срублено брёвен ели"},
                    {"jungle_log", "Брёвен тропического дерева", 600, "Срублено тропического дерева"},
                    {"dark_oak_log", "Брёвен тёмного дуба", 600, "Срублено тёмного дуба"}}},
                    {2000, {},
                    {
                        {"jungle_sapling", "Саженцев тропического дерева", 20, "Получено саженцев тропического дерева"},
                        {"dirt", "Земли", 40, "Получено земли"}
                    }
                    }
                }, // Mission
            }
        }, // MissionGroup
    }
}; // MissionPack
