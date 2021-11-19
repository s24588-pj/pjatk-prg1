#include <iostream>
#include <string>

auto main(int, char *argv[]) -> int
{
	auto const n = std::stoi(argv[1]);
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
