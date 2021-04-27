#include <iostream>
#include <iomanip>

int main()
{
    float usd;
    std::cout << "Enter sum in USD$: "; 
    std::cin >> usd;
    // pound = 1.487, franc = 0.172, mark = 0.584, jena = 0.00955
    std::cout << "$" << usd << " in pounds: " << std::setw(9) << usd / 1.487 << std::endl
    << "$" << usd << " in francs: " << std::setw(9) << usd / 0.172 << std::endl
    << "$" << usd << " in marks: " << std::setw(10) << usd / 0.584 << std::endl
    << "$" << usd << " in jens: " << std::setw(11) << usd / 0.00955 << std::endl;
    	
    return 0;
}

