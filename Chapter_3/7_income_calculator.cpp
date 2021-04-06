#include <iostream>

int main()
{
    int years = 0;
    double summ = 0, rate = 0, initial = 0, next = 0;

    std::cout << "Enter initial deposit: $ ";
    std::cin >> summ;
    initial = summ;
    std::cout << "Enter the number of years: ";
    std::cin >> years;
    std::cout << "Enter the interest rate: % ";
    std::cin >> rate;
    for(int j = years; j > 0; --j)
    {
	    summ += summ * (rate / 100);
    }
    next = initial + initial * (rate / 100);
    std::cout << "In " << years << " years, you will receive $ " << summ << ".\n"
              << "At the end of the first year, you will receive $ " << initial 
              << " + (" << initial << " * " << rate / 100 << ") = $ " << next << ".\n"
              << "At the end of next year, you will receive $ " << next << " + (" << next 
              << " * " << rate / 100 << ") = $ " << next + next * (rate / 100) << ".\n";
    return 0;
}
