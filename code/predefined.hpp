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

const std::unordered_map<int, std::string> headLeveledChest {
    {0, "eyJ0ZXh0dXJlcyI6eyJTS0lOIjp7InVybCI6Imh0dHA6Ly90ZXh0dXJlcy5taW5lY3JhZnQubmV0L3RleHR1cmUvNzFhOTEyZTMzMmZjMDAxMGJlYmQwZjkzYTE0ZDhlM2VhNjVkMTMwMTEwMGNlYTNmYzVhZTcxOTkwZDk4NTgwNyJ9fX0="},
    {1, "eyJ0ZXh0dXJlcyI6eyJTS0lOIjp7InVybCI6Imh0dHA6Ly90ZXh0dXJlcy5taW5lY3JhZnQubmV0L3RleHR1cmUvNzY1OGNjYzczNDU1NTllOTMyMWY0OWVlMWFmNjc1MjJlNzA4ZGNhODkzMmIwYTcyMWNjMzQxMzA3MzFlYjU5OCJ9fX0="},
    {2, "eyJ0ZXh0dXJlcyI6eyJTS0lOIjp7InVybCI6Imh0dHA6Ly90ZXh0dXJlcy5taW5lY3JhZnQubmV0L3RleHR1cmUvMzVlNGNiNGZjMTRiYTY5ZDQ5YjJkZDJiMDQxOGQ2NTYyZGZmZGViZDBlYmYwMTY1YzQ0MTZhMDczZTYyZGRmOCJ9fX0="},
    {3, "eyJ0ZXh0dXJlcyI6eyJTS0lOIjp7InVybCI6Imh0dHA6Ly90ZXh0dXJlcy5taW5lY3JhZnQubmV0L3RleHR1cmUvMjRiOTUzYjJjMGU5NTI1NzRmMWVkMjljODFlODJlNTNiY2RiMWJhNjgzMjU5YzIwZGFlZWY3ZDU1NGEyYTc5OCJ9fX0="},
    {4, "eyJ0ZXh0dXJlcyI6eyJTS0lOIjp7InVybCI6Imh0dHA6Ly90ZXh0dXJlcy5taW5lY3JhZnQubmV0L3RleHR1cmUvMzM3Yjk2YTQ1YThmMGM2ZmQ3ZGZhYjJhODVlMWEzODRkYWNhNGI4MDZlYjg5MmE4N2UyN2Y1MmE5ZjkxYzA4NCJ9fX0="},
    {5, "eyJ0ZXh0dXJlcyI6eyJTS0lOIjp7InVybCI6Imh0dHA6Ly90ZXh0dXJlcy5taW5lY3JhZnQubmV0L3RleHR1cmUvNDE3NmMxYWU3MTMwN2U4NTQ3MDA2OTI3ZTk3MWU1MzBkYzBjMzQ4YmRhYjZkYjc0YWJlYWQ3MDFhNDBiMWIwIn19fQ=="},
    {6, "eyJ0ZXh0dXJlcyI6eyJTS0lOIjp7InVybCI6Imh0dHA6Ly90ZXh0dXJlcy5taW5lY3JhZnQubmV0L3RleHR1cmUvODQ0NDk4YTBmZTI3ODk1NmUzZDA0MTM1ZWY0YjEzNDNkMDU0OGE3ZTIwOGM2MWIxZmI2ZjNiNGRiYzI0MGRhOCJ9fX0="},
    {7, "eyJ0ZXh0dXJlcyI6eyJTS0lOIjp7InVybCI6Imh0dHA6Ly90ZXh0dXJlcy5taW5lY3JhZnQubmV0L3RleHR1cmUvMzFmN2NkZmVhMmQyMWNkNWY2ZWJiZjQ4NDgxNzYxYzZjYmRmMzZkMDBmZTY0MDgzNjg2ZTlhZWFhM2YxZjIxNyJ9fX0="},
    {8, "eyJ0ZXh0dXJlcyI6eyJTS0lOIjp7InVybCI6Imh0dHA6Ly90ZXh0dXJlcy5taW5lY3JhZnQubmV0L3RleHR1cmUvNGJhNTU2NzFmOTdmZjNiZmM1YmUzMzVhZTkyY2Q5NzQ5YWJkNjE5ZTdhZmMyYTY2NzM1OTdiODBiNzU1Yzc0MSJ9fX0="},
    {9, "eyJ0ZXh0dXJlcyI6eyJTS0lOIjp7InVybCI6Imh0dHA6Ly90ZXh0dXJlcy5taW5lY3JhZnQubmV0L3RleHR1cmUvM2Y2NmY3ZjAzMTI1Y2Y1NDczMzY5NmYzNjMyZjBkOWU2NDcwYmFhYjg0OTg0N2VhNWVhMmQ3OTE1NmFkMGY0MCJ9fX0="},
    {10, "eyJ0ZXh0dXJlcyI6eyJTS0lOIjp7InVybCI6Imh0dHA6Ly90ZXh0dXJlcy5taW5lY3JhZnQubmV0L3RleHR1cmUvNGI5MGQ1ZDNiZTk3YzVmNzA3NWYzMTQ1ZjZkNWJkMGFhZjI5NGM4NzBjYzZjMzZhMjQyOTE1MWFhZTg4NjNlOSJ9fX0="},
    {11, "eyJ0ZXh0dXJlcyI6eyJTS0lOIjp7InVybCI6Imh0dHA6Ly90ZXh0dXJlcy5taW5lY3JhZnQubmV0L3RleHR1cmUvNDFjYTdjZWY3YmMyOTI3ZWI5NGQ0YTY5MGE0MTQ4YTIxNDk4MjJlM2E2MGMwNjExYWEyYTNhNjUzM2I3NzE1In19fQ=="},
};
