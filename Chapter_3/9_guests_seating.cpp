#include <iostream> 

int main()
{ 

	unsigned int g, c;
	unsigned long x = 1;
	
	std::cout << "Enter number of guests: "; 
	std::cin >> g;
	std::cout << "Enter number of chairs: "; 
	std::cin >> c;

    for(int i = c; i > 0; --i)
    {
        x *= g;
        --g;
    }
    std::cout << "Number of possible combinations: " << x ;

    return 0; 
} 
