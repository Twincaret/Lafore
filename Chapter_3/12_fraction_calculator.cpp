#include <iostream> 

int main()
{ 
    int a, b, c, d;
    char ch, x('/'), z;
    
    while(ch != 'n' && ch != 'N'){
		
        std::cout << "Enter first fraction: ";
        std::cin >> a >> x >> b;
        std::cout << "Choose operation: +, -, *, / : "; 
        std::cin >> z;
        std::cout << "Enter second fraction: ";
        std::cin >> c >> x >> d;
    
        switch(z)
        {
            case '+': std::cout << "Result: " << (a * d + b * c) << x << (b * d); break;
            case '-': std::cout << "Result: " << (a * d - b * c) << x << (b * d); break;
            case '*': std::cout << "Result: " << (a * c) << x << (b * d); break;
            case '/': std::cout << "Result: " << (a * d) << x << (b * c); break;
            default: std::cout << "Unknown result";
        }
        std::cout << "\nContinue (y/n)?: ";
        std::cin >> ch;	
    } 
    
    return 0; 
} 
