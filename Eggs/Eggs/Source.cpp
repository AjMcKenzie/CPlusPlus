//Eggs
//Andrew McKenzie
//Date: 4/4/2017

#include <iostream>
#include <string>

int main()
{
	int  remainingEggs, dozenEggs, someEggs;
	double dozenPrice, remainingEggsCost, garndTotal;
	std::cout << "How many eggs would you like? " << std::endl;
	std::cin >> someEggs;
	std::cout << "" << std::endl;

	remainingEggs = someEggs % 12;

	remainingEggsCost = remainingEggs * 0.25;

	dozenEggs = someEggs / 12;

	dozenPrice = dozenEggs * 2;

	garndTotal = dozenPrice + remainingEggsCost;

	std::cout << "You have " << dozenEggs << " dozen eggs for total price of $" << dozenPrice << ".00\nwith a remainder of " << remainingEggs << " eggs for a total price of $" << remainingEggsCost << ". " << std::endl;
	std::cout << "" << std::endl;
	std::cout << "For a grand total of $" << garndTotal << "! Thanks for shopping here." << std::endl;

	system("pause");
	return 0;
}
