#include <iostream>

int main()
{
    char ch, operation;
    double a, b, result;

    do{
    
        std::cout << "Enter the first operand, the operation, and the second operand: ";
        std::cin >> a >> operation >> b;
        if(b == 0 && operation == '/')
        {
            std::cout << "Incorrect divisor!\n";
            continue; 
        }
  
        switch(operation)	
        {
            case '+' : result = a + b; break;	
            case '-' : result = a - b; break;	
            case '*' : result = a * b; break;	
            case '/' : result = a / b; break;
            default : std::cout << "Incorrect symbol, try again, please";	
        }
        std::cout << "The result is " << result << '\n'
                  << "Perform one more operation (y/n)? ";
        std::cin >> ch;
   
    }while(ch != 'n' && ch != 'N');
	
    return 0;
}
