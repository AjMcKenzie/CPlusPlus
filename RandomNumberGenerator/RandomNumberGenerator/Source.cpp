//Random Number Generator
//Andrew McKenzie
//Date: 4/18/2017

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>


int main()
{
	int number;
	int chances = 0;
	bool correct;

	do{
		std::cout << "Pick a number between 1 and 100." << std::endl;
		std::cin >> number;
		srand(static_cast<unsigned int>(time(0))); // Random number generator
		int randomNumber = rand(); // Generate random number
		int die = (randomNumber % 100) + 1; // Get a number between 1 and 100
		chances++; // chances = chances + 1;

		if (number == die)
		{
			std::cout << "You guessed it right! It was " << die << "!" << std::endl;
			correct = true;
		}
		else if (number > die)
		{
			std::cout << "You chose too high!" << std::endl;
		}
		else
		{
			std::cout << "You chose too low!" << std::endl;
		}

		std::cout << "You have used " << chances << " of 5 chances." << std::endl;
		std::cout << "The number was " << die << "!" << std::endl;
		std::cout << " " << std::endl;

	} while (chances != 5);




	system("pause");
	return 0;
}