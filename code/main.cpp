#include "farmer.hpp"
#include <iostream>
#include <fstream>

//using namespace std;
#include <filesystem>
namespace fs = std::filesystem;


int main()
{
    // std::cout << "Hello World" << std::endl;
	
	if(fs::exists(missionsDir + "test"))
	{
		fs::remove_all(missionsDir + "test");
	}
	fs::create_directories(missionsDir + "test");
    
    std::ofstream ofs(missionsDir + "test/a.txt");
    ofs << mission.reward.receivedItems.at(0).itemName << std::endl; 
    ofs << mission.reward.receivedItems.at(0).itemAmount << std::endl; 
    ofs << mission.options["island"] << std::endl; 
	print_map(ofs, defaultOptions);
    ofs << MissionType.at(3) << std::endl; 
    // ofs << rew.receivedItems.at(1).itemName; 
    ofs.close();
	// Missi mis;
	// mis.print_map(ofs, defaultOptions);

	return 0;
}