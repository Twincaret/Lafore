#include <iostream>
#include <iomanip>

int main()
{ 
    int year = 1990;
    std::cout << std::setw(4) << year << std::setw(9) << 135 << std::endl
    << std::setw(4) << year + 1 << std::setw(9) << 7290 << std::endl
    << std::setw(4) << year + 2 << std::setw(9) <<11300 << std::endl
    << std::setw(4) << year + 3 << std::setw(9) << 16200 << std::endl;
    
    return 0;
}
