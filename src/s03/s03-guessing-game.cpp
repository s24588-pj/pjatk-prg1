#include <iostream>
#include <cstdlib>
#include <time.h>
#include <string>
#include <random>

auto ask(std::string prompt) -> int
{
    std::cout << prompt;
    auto n = std::string{};
    std::getline(std::cin ,n);
    return std::stoi(n);
}

auto main() -> int
{
        std::random_device rd;
        std::uniform_int_distribution<int> d100(1, 100);

        auto const liczba = d100(rd);
	auto zgadnij = 0;
	while(zgadnij!=liczba)
	{
		zgadnij = ask("Take a guess: ");
		if(zgadnij<liczba)
		{
			std::cout << "Too small!" << "\n";
		}
		else if(zgadnij>liczba)
		{
			std::cout << "Too big!" << "\n";
		}
		else if(zgadnij==liczba)
		{
			std::cout << "Just right!" << "\n";
		}
	}

	return 0;
}
