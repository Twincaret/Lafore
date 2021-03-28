#include <iostream>

int main()
{  
	
    float gallons,cufeet;
    std::cout << "Number of gallons: " ;
    std::cin >> gallons;
    cufeet = gallons / 7.481;
    std::cout << "Equivalent volume in cubic feet: " << cufeet << std::endl;
    
    return 0;
}
