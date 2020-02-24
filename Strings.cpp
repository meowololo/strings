#include <iostream>
#include <iomanip>
#include <string>

int main()
{
	std::cout << "Enter your string: " << "\n";
	std::string something;
	std::getline(std::cin, something);

	std::cout << "\n" << "Your string: " << something << "\n";
	std::cout << "Length of string: " << something.length() << "\n";
	std::cout << "First symbol: " << something[0] << "\n";
	std::cout << "Last symbol: " << something[something.length() - 1] << "\n";

}