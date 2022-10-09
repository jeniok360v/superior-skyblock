#include "../code/farmer.hpp"
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
    ofs << rew.receivedItems.at(0).itemName << std::endl; 
    ofs << rew.requiredItems.at(0).itemAmount << std::endl; 
    ofs << MissionType.at(8) << std::endl; 
    // ofs << rew.receivedItems.at(1).itemName; 
    ofs.close();

	return 0;
}