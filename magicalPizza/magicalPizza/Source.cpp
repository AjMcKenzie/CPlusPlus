//Magical Pizza
//Andrew McKenzie && Isaiah Ponciano
//Date:

#include <iostream>
#include <string>

int main()
{
	int yes, SCV;
	std::string choice, type;

	std::cout << "Welcome to:\nThe Prancing Unicorn Pizzaria!!";
	std::cout << "Do you want some magical pizza? Press 1 for Yes 2 for No";
	std::cin >> yes;
	if (yes==1)
		std::cout << "What size: Imp(Small), Giant(Medium), Dragon(Large)";
		std::cin >> choice;
		if (choice == "small" || choice == "Small" || choice == "imp" || choice == "Imp")
			std::cout << "What type";

		if (choice == "medium" || choice == "Medium" || choice == "giant" || choice == "Gaint")

		if (choice == "large" || choice == "Large" || choice == "dragon" || choice == "Dragon")
	else
		std::cout << "Then go away" << std::endl;







	system("pause");
	return 0;
}
