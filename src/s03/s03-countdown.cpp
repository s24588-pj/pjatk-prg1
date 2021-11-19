#include <iostream>
#include <unistd.h>
#include <string>

auto main(int, char* argv[]) -> int
{
	auto const liczba = std::stoi(argv[1]);
	for(auto i=liczba; i>=0; i--)
	{
		sleep(1);
		std::cout << i <<"..."<<"\n";
	}
	
	return 0;
}

