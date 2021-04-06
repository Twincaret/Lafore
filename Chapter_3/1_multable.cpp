#include <iostream>  
#include <iomanip> 

int main()
{   
	int x, y = 0;
	std::cout << "Enter the number: ";
	std::cin >> x;
	do {    
	        std::cout << std::setw(4) << x*++y << ' ';
	        if (y%10 == 0) std::cout << '\n';
        
        } while(y!=200);
        
    return 0; 
} 
