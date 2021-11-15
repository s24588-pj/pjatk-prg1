#include <iostream>

int n;

int main()
{
	std::cout << "Podaj zakres od 1 do n" << "\n";
	std::cin >> n;
	std::cout << "Podane n: " << n << "\n";
	for(int i=1; i<=n; i++)
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
