#include <iostream>
#include <iomanip>

int main()
{
	const std::string pndsmbl = "\u00A3";

	float pounds, shillings, penny, decpnds;

	std::cout <<"Enter pounds quantity: ";
	std::cin >> pounds;
    std::cout << "Enter shillings quantity: ";
    std::cin >> shillings;
    std::cout << "Enter penny quantity: ";
    std::cin >> penny;
	    
	decpnds = (penny / 12 + shillings) / 20 + pounds;
	
	
    std::cout << "Quantity of decimal pounds: " << pndsmbl << std::setprecision(3) << decpnds << std::endl;
    

return 0;
	
}
