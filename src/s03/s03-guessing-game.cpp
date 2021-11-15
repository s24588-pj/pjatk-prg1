#include <iostream>
#include <cstdlib>
#include <time.h>

int liczba, zgadnij;

int main()
{
	std::cout << "Take a guess from 1 to 100" << "\n";
	srand(time(NULL));
	liczba = rand()%100+1;
	
	while(zgadnij!=liczba)
	{
		std::cout << "guess: ";
		std::cin >> zgadnij;
		if(zgadnij==liczba)
		{
			std::cout << "Just right!" << "\n";
		}
		else if(zgadnij<liczba)
		{
			std::cout << "Too small!" << "\n";
		}
		else if(zgadnij>liczba)
		{
			std::cout << "Too big!" << "\n";
		}
	}

	return 0;
}
