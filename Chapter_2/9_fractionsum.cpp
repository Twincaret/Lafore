#include <iostream>

int main()
{
    float a, b, c, d;
    char dummychar;
    std::cout << "Enter first fraction: ";
    std::cin >> a >> dummychar >> b;
    std::cout << "Enter second fraction: ";
    std::cin >> c >> dummychar >> d;
    std::cout << "The sum is: " << (a * d) + (b * c) << dummychar << (b * d) << std::endl;
    
    return 0;
		
}
