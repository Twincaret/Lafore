#include<iostream>
#include<iomanip>

void printBorder();

int main ()
{
	std::cout << std::setiosflags(std::ios::left) << std::setw(13) << "Surname: " 
	<< std::setw(11) << "Name: " << std::setw(16) << "Address: " << std::setw(16) << "Sity: " << std::endl;
	printBorder();
    std::cout << std::endl;
	std::cout << std::setw(13) << "Petrov" << std::setw(11) << "Vasiliy" << std::setw(16) 
	<< "Klenovaya 16" << std::setw(16) << "Saint-Petersburg" << std::endl
	<< std::setw(13) << "Ivanov" << std::setw(11) << "Serghei" << std::setw(16) 
	<< "Osinovaya 3" << std::setw(16) << "Nahodka" << std::endl
	<< std::setw(13) << "Sidorov" << std::setw(11) << "Ivan" << std::setw(16) 
	<< "Berezovaya 21" << std::setw(16) << "Kaliningrad" << std::endl;
	printBorder();
	
	return 0;
		
}

void printBorder()
{
	for(int i = 0; i < 56; ++i)  
	{
        std::cout<< ((i<56)? '-' : ' ');
    }
};
