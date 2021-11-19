#include <iostream>
#include <string>

auto main(int, char *argv[]) -> int
{
	auto const n = std::stoi(argv[1]);
	std::cout << "Podane n: " << n << "\n";
	for(auto i=1; i<=n; i++)
	{
		if(i%3==0 && i%5==0)
		{
			std::cout <<"FizzBuzz "<< i << "\n";
		}
		else if(i%3==0)
		{
			std::cout <<"Fizz "<< i <<"\n";	
		}
		else if(i%5==0)
		{
			std::cout <<"Buzz "<< i <<"\n";	
		}
	}

	return 0;
}
