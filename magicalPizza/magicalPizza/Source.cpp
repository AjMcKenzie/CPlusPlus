//Magical Pizza
//Andrew McKenzie && Isaiah Ponciano
//Date:

#include <iostream>
#include <string>

int main()
{
	int yes;
	std::string choice, type;

	std::cout << "Welcome to: The Prancing Unicorn Pizzaria!!" << std::endl;
	std::cout << "Do you want some magical pizza? Press 1 for Yes 2 for No- ";
	std::cin >> yes;
	if (yes == 1)
	{
		std::cout << "What size:\n Imp (Small), Giant (Medium), Dragon (Large)- ";
		std::cin >> choice;

		if (choice == "small" || choice == "Small" || choice == "imp" || choice == "Imp")
		{
			std::cout << "What type:\nUnicorn (Sausage), Goat (Cheese), Ivy (Veggie)- ";
			std::cin >> type;
		}


		if (choice == "medium" || choice == "Medium" || choice == "giant" || choice == "Giant")
		{
			std::cout << "What type:\n Unicorn (Sausage), Goat (Cheese), Ivy (Veggie)- ";
			std::cin >> type;
		}

		if (choice == "large" || choice == "Large" || choice == "dragon" || choice == "Dragon")
		{
			std::cout << "What type:\nUnicorn (Sausage), Goat (Cheese), Ivy (Veggie)- ";
			std::cin >> type;
		}

		std::cout << " " << std::endl;

		//Price
		if (choice == "small" || choice == "Small" || choice == "imp" || choice == "Imp")
		{
			std::cout << "You ordered a" << choice << " with " << type << " Toppings.\nThe cost for your pizza is 10 Gold ($5.00).\nThnk you for shopping here at The Prancing Unicorn Pizzaria!!" << std::endl;
		}

		if (choice == "medium" || choice == "Medium" || choice == "giant" || choice == "Giant")
		{
			std::cout << "You ordered a " << choice << " with " << type << " Toppings.\nThe cost for your pizza is 30 Gold ($15.00).\nThnk you for shopping here at The Prancing Unicorn Pizzaria!!" << std::endl;
		}

		if (choice == "large" || choice == "Large" || choice == "dragon" || choice == "Dragon")
		{
			std::cout << "You ordered a " << choice << " with " << type << " Toppings.\nThe cost for your pizza is 40 Gold ($20.00).\nThnk you for shopping here at The Prancing Unicorn Pizzaria!!" << std::endl;
		}

	}
	else
		std::cout << "Okay, Goodbye!" << std::endl;







	system("pause");
	return 0;
}
