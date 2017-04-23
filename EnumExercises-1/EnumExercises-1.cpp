// EnumExercises-1.cpp : Defines the entry point for the console application.
//
//Phone number exercise
#include <iostream>

struct phone
{
	int areaCode;
	int exchange;
	int number;
};

int main()
{

	phone no1{ 212, 767, 8900 };
	phone no2{};

	std::cout << "Please provide your phone number\n";
	std::cout << "Area Code: ";
	std::cin >> no2.areaCode;
	std::cout << "Exchange: ";
	std::cin >> no2.exchange;
	std::cout << "Number: ";
	std::cin >> no2.number;

	std::cout << "My number is (" << no1.areaCode << ") " << no1.exchange << " - " << no1.number << "\n";
	std::cout << "Your number is (" << no2.areaCode << ") " << no2.exchange << " - " << no2.number << "\n";

	system("pause");
    return 0;
}

