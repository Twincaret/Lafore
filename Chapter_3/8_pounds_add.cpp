#include <iostream> 

int main()
{ 
	float x_pnd, x_shl, x_pnc, z_pnd, z_shl, z_pnc, pnd, shl, pnc;
	char ch;
	do{
	    std::cout << "Enter the first amount: £ "; 
	    std::cin >> x_pnd >> x_shl >> x_pnc;
	    std::cout << "Enter the second amount: £ "; 
	    std::cin >> z_pnd >> z_shl >> z_pnc;

        pnc = x_pnc + z_pnc; 
        if (pnc > 11)
        {
		    ++shl;
		    pnc -= 12;
	    }
	    shl += x_shl + z_shl;	
        if (shl > 19)
        {
		    ++pnd;
		    shl -= 20;
	    }
	    pnd += x_pnd + z_pnd;	

	    std::cout << "Total amount £ " << pnd << ' ' << shl << ' ' << pnc << std::endl;
	    pnd = 0, shl = 0, pnc = 0;
        std::cout << "Continue(y/n)? ";
        std::cin >> ch;
    }while(ch != 'n' && ch != 'N' );
    
    return 0; 
} 
