#include <iostream>
#include <unistd.h>

int main()
{
	int liczba;
	std::cin >> liczba;
	for(int i=liczba; i>=0; i--)
	{
		sleep(1);
		std::cout << i <<"..."<<"\n";
	}
	
	return 0;
}

