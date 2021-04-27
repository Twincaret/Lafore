#include <iostream>

int main()
{
    float tempC, tempF;
    std::cout << "Enter temperature in C: ";
    std::cin >> tempC;
    tempF = tempC * 1.8 + 32;
    std::cout << tempC << " degrees Celsius is " << tempF << " Fahrenheit" << std::endl;
	
    return 0;
	
}
