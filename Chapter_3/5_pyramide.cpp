#include <iostream> 
#include <iomanip> //4 setw
 
int main()
{ 
    const int n = 40;
    for(int j = 1; j <= n; ++j)
    {
        std::cout << std::setw(n / 2 - j / 2);
        if (j % 2) 
        {
            for(int x = 1; x <= j; ++x)
            {
                std::cout << 'X';
            }
            std::cout << std::endl;
        }
    }
    
    return 0; 
} 
