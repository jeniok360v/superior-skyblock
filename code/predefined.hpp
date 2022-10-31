#include <string>
#include <unordered_map>

const std::vector<std::string> MissionType
{
    "BlocksMissions",       /* 0 */
    "BrewingMissions",      /* 1 */
    "CraftingMissions",     /* 2 */
    "EnchantingMissions",   /* 3 */
    "FarmingMissions",      /* 4 */
    "FishingMissions",      /* 5 */
    "IslandMissions",       /* 6 */
    "ItemsMissions",        /* 7 */
    "KillsMissions",        /* 8 */
    "StatisticsMissions"    /* 9 */
};

const std::unordered_map<std::string, std::string> defaultOptions {
    {"auto-reward", "false"}, 
    {"reset-after-finish", "true"}, 
    {"disband-reset", "true"},
    {"only-show-if-required-completed", "true"},
    {"island", "true"},
};

const std::unordered_map<std::string, std::string> defaultVisibleOptions {
    {"auto-reward", "false"}, 
    {"reset-after-finish", "true"}, 
    {"disband-reset", "true"},
    {"only-show-if-required-completed", "false"},
    {"island", "true"},
};

const std::unordered_map<std::string, std::string> defaultNaturalBlocksOptions {
    {"auto-reward", "false"}, 
    {"reset-after-finish", "true"}, 
    {"disband-reset", "true"},
    {"only-show-if-required-completed", "true"},
    {"island", "true"},
    {"only-natural-blocks", "true"},
};

const std::unordered_map<std::string, std::string> defaultRepeatableOptions {
    {"auto-reward", "false"}, 
    {"reset-after-finish", "true"}, 
    {"disband-reset", "true"},
    {"only-show-if-required-completed", "true"},
    {"island", "true"},
    {"reset-amount", "10000"},
};

const std::string headChest = "eyJ0ZXh0dXJlcyI6eyJTS0lOIjp7InVybCI6Imh0dHA6Ly90ZXh0dXJlcy5taW5lY3JhZnQubmV0L3RleHR1cmUvNTZkN2ZkYjUwZjE0YzczMWM3MjdiMGUwZDE4OWI2YTg3NDMxOWZjMGQ3OWM4YTA5OWFjZmM3N2M3YjJkOTE5NiJ9fX0=";
const std::string headCompleted = "eyJ0ZXh0dXJlcyI6eyJTS0lOIjp7InVybCI6Imh0dHA6Ly90ZXh0dXJlcy5taW5lY3JhZnQubmV0L3RleHR1cmUvZDI4ODcyZGM5ZDYzNGQyNzRjNGMwZTgwZGU2MTc2M2MyMmI2Y2JlNDk3NDBlODdlMzY1N2JjMzZkM2VkNGJlYSJ9fX0=";
// const std::string headCompleted = "";
