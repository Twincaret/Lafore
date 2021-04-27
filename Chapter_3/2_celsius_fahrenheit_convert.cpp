#include <iostream> 
#include <stdio.h>  //4 getchar()
#include <limits>   //4 numeric_limits

int main()
{ 
    char n = '0';
    float t;
    bool flag;
    do{
        
        flag = false;
        std::cout << "Press 1 to convert Celsius to Fahrenheit,\n"
        << "2 to convert Fahrenheit to Celsius: "; 
        n = getchar();
        if (n == '1')
        {
            std::cout << "Enter the temperature in Celsius: "; 
            std::cin >> t;
            std::cout << "Fahrenheit T: " << t * 1.8 + 32 << '\n';
        }
        else if (n == '2')
        {
            std::cout << "Enter the temperature in Fahrenheit: "; 
            std::cin >> t;
            std::cout << "Celsius T: " << (t - 32) * 5 / 9 << '\n';
        }
        else  
        {
            std::cout << "Incorrect input, try again.\n";
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cin.clear();
            flag = true; 
        }
		    
    }while(flag);

    return 0; 
} 

