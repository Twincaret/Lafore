#include <iostream> 

int main()
{ 
    unsigned int n;
    unsigned long fact = 1;
    char ch = '1';
    while(ch != '0')
    {
        std::cout << "Enter whole number: ";
        std::cin >> n;   
        for(int j = n; j > 0; --j) fact *= j;
        std::cout << "Factorial of the number " << n << " is " << fact << std::endl;
        std::cout << "Once more? (1 - yes, 0 - no) ";
        fact = 1;
        std::cin >> ch;   
    }

    return 0; 
} 
