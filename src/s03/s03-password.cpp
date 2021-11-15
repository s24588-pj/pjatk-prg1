#include <iostream>



std::string pass;

int main()
{
	std::cout << "Enter your password" << "\n";
	
	while(pass!="student")
	{
		std::cout << "password: ";
		std::cin >> pass;	
		if(pass=="student")
		{
			std::cout << "ok!" << "\n";
		}	
		else
		{
			std::cout << "Try again" << "\n";
		}
	}
	return 0 ;

}
