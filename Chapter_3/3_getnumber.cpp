#include <iostream> 
#include <stdio.h>  //4 getchar()

int main()
{ 
	long n = 0;
	bool flag = true;
	std::cout << "Enter the number: ";    
  
    while(n != '\n')
    { 
        n = getchar();
	    if(flag) 
        {
		     std::cout << "You've entered the number "; 
		     flag = false;
        }
	    std::cout << char(n);
	    
    }

    return 0; 
} 

