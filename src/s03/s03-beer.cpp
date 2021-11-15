#include <iostream>


int n;

int main()
{
	std::cout << "Podaj liczbę butelek" << "\n";
	std::cin >> n;
	for(int i=n; i>0; i--)
	{
		std::cout << i <<" bottles of beer on the wall, "<< i <<" bottles of beer."<<"\n";
		std::cout <<"Take one down, pass it around, "<< i-1 <<" bottles of beer on the wall..."<<"\n";
		if(i==1)
		{
			std::cout <<"No more bottles of beer on the wall, no more bottles of beer."<<"\n";
			std::cout <<"Go to the store and buy some more, "<< n <<" bottles of beer on the wall..."<<"\n";		
		}
	}

	return 0;
}
