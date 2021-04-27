#include <iostream>
#include <iomanip>

int main()
{
    int num_1 = 8957412, num_2 = 8835432, num_3 = 8425785;
    std::cout <<std::setw(5)<<"Location: "<<std::setw(16) <<" Population: "<< std::endl
    <<std::setfill('.') << "New York City" << std::setw(12) <<num_1 << std::endl
    << "Los Angeles" << std::setw(14) << num_2 << std::endl
    << "Moscow" << std::setw(19) << num_3 << std::endl;
	   	
    return 0;
}
