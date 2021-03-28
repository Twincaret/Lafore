#include <iostream> 
 
int main()
{ 
	const std::string pndsmbl = "\u00A3";
	float decpounds, decshillings, decfrac;
	int pounds, shillings, pence;	
	std::cout << "Enter quantity of decimal pounds: "; 
	std::cin >> decpounds; 
	pounds = static_cast<int>(decpounds);
	decfrac = decpounds - pounds;
	decshillings = decfrac*20;
	shillings = static_cast<int>(decshillings);
	decfrac = decshillings - shillings;
	pence =  decfrac*12;
    std::cout << "Equivalent amount in old form is: " << pndsmbl << pounds << '.' << shillings << '.' << pence;
  return 0; 
 } 
