#include <iostream>

int main()
{
    int years = 0;
    double init = 0, rate = 0, summ = 0;

    std::cout << "Enter initial deposit: $ ";
    std::cin >> init;
    std::cout << "Enter the interest rate: % ";
    std::cin >> rate;
    std::cout << "Enter the amount you want to receive: $ ";
    std::cin >> summ;
  
    do{
    
        init += init * (rate / 100);
        ++years;
        
    }while(init <= summ);

    std::cout << "You have to wait " << years << " years to receive $ " << summ <<".\n";

    return 0;
}
