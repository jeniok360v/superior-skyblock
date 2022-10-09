#include "structs.hpp"

template<typename K, typename V>
void Missi::print_map(std::ofstream& missionYml, std::unordered_map<K, V> const &options)
{
    for (auto const &option: options) {
        missionYml << option.first << ": " << option.second << std::endl;
    }
	missionYml << std::endl;
}

