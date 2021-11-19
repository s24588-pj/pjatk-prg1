#include <iostream>
#include <string>

auto ask(std::string prompt) -> std::string
{
    std::cout << prompt;
    auto n = std::string{};
    std::getline(std::cin ,n);
    return n;
}

auto main(int, char *argv[]) -> int
{
	std::cout << "Please enter your password!"<< "\n";
	auto pass = std::string(argv[1]);
	auto cont = std::string{};
	while(pass!= cont)
	{
		cont = ask("Yours try: ");
		if(pass==cont)
		{
			std::cout << "Correct"<< "\n";
		}
		else
		{
			std::cout <<"Invalid Password"<< "\n";
		}		
	}
	return 0;
}
