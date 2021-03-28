#include <iostream>
#include "ctype.h"

int main()

{
    char symbol;
    std::cout << "Enter a symbol: ";
    std::cin >> symbol;
    std::cout << "The result is: "<< islower(symbol) << std::endl;

	return 0;
}
