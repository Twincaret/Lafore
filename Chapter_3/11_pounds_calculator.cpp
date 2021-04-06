#include <iostream>

int main()
{
		
    float number, f_pnd, f_shl, f_pnc;
    int x_pnd, x_shl, x_pnc, z_pnd, z_shl, z_pnc, pnd, shl, pnc; 
    const std::string pndsmbl = "\u00A3";
    char ch;   
    bool flag = true;	
    
    do{
        std::cout << "Enter the first amount: " << pndsmbl << ' ';
        std::cin >> x_pnd >> x_shl >> x_pnc; 
        
        do{
            std::cout << "Choose operation: +, - or * : ";
            std::cin >> ch;
            
            if(ch == '+' || ch == '-' || ch == '*') break;
            else
            {
				std::cout << "Support operations: [+], [-] and [*].\n"; 
				flag = false;
			}
        }while(!flag);
        
        if(ch!='*')
        {
            std::cout << "Enter the second amount: " << pndsmbl << ' ';
            std::cin >> z_pnd >> z_shl >> z_pnc; 	
        }else
        {
            std::cout << "Enter the number: ";
            std::cin >> number;
            
            f_pnd = number * x_pnd;
            f_shl = number * x_shl;
            f_pnc = number * x_pnc;
            
            pnd = static_cast<int>(f_pnd);
            shl = static_cast<int>(f_shl);
            pnc = static_cast<int>(f_pnc);
            
            if(pnc >= 12)
            {
				shl += pnc / 12; 
				pnc %= 12;
			}
            if(shl >= 20)
            {
				pnd += shl / 20; 
				shl %= 20;
			} 

        }
        switch(ch)	
        {
            case '+' :
            pnd = x_pnd + z_pnd; 
            shl = x_shl + z_shl; 
            pnc = x_pnc + z_pnc;	
            if(pnc > 11)
            {
				++shl; 
				pnc %= 12;
			}
            if(shl > 19)
            {
				++pnd; 
				shl %= 20;				
			} break;	
            
            case '-' :
            pnd = x_pnd - z_pnd;
            shl = x_shl - z_shl;  
            pnc = x_pnc - z_pnc;
            if(pnc < 0)
            {
				--shl; 
				pnc += 12;
			}
            if(shl < 0)
            {
				--pnd; 
				shl += 20;
			} break; 
	
        }
        std::cout << "The result is: " << pndsmbl << ' ' << pnd << "." << shl << "." << pnc;
        std::cout << "\nContinue (y/n)? ";
        std::cin >> ch;
        
    }while(ch!='n');	
  	
    return 0;
}
