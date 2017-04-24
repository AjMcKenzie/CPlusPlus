//Random Number Generator
//Andrew McKenzie
//Date: 4/19/2017

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

int main()
{
	int number;
	std::string difficulty;
	//std::string contString;

	/*srand(static_cast<unsigned int>(time(0))); // Random number generator
	int randomNumber = rand(); // Generate random number
	int die = (randomNumber % 10) + 1; // Get a number between 1 and 10*/

	std::cout << "What difficulty do you want? Easy, Medium, Hard." << std::endl;
	std::cin >> difficulty;

	if (difficulty == "Easy")
	{
		for (int i = 0; i < 5;)
		{
			srand(static_cast<unsigned int>(time(0))); // Random number generator
			int randomNumber = rand(); // Generate random number
			int die = (randomNumber % 10) + 1; // Get a number between 1 and 10
			do{

				i++;

				std::cout << "Choose a number between 1 and 10." << std::endl;
				std::cin >> number;
			
					if (number == die)
					{
						std::cout << " " << std::endl;
						std::cout << "You got it right!" << std::endl;
					}
					else if (number > die)
					{
						std::cout << " " << std::endl;
						std::cout << "You chose too high!" << std::endl;
					}
					else
					{
						std::cout << " " << std::endl;
						std::cout << "You chose too low!" << std::endl;
					}
					std::cout << "You have used " << i << " out of 5 chances" << std::endl;
					std::cout << " " << std::endl;

			} while (i != 5);
			std::cout << "The number was " << die << std::endl;
		}
	}

	if (difficulty == "Medium")
	{
		for (int j = 0; j < 5;)
		{
			srand(static_cast<unsigned int>(time(0))); // Random number generator
			int randomNumber = rand(); // Generate random number
			int die = (randomNumber % 100) + 1; // Get a number between 1 and 100
			do{

				j++;

				std::cout << "Choose a number between 1 and 100." << std::endl;
				std::cin >> number;

				if (number == die)
				{
					std::cout << " " << std::endl;
					std::cout << "You got it right!" << std::endl;
				}
				else if (number > die)
				{
					std::cout << " " << std::endl;
					std::cout << "You chose too high!" << std::endl;
				}
				else
				{
					std::cout << " " << std::endl;
					std::cout << "You chose too low!" << std::endl;
				}
				std::cout << "You have used " << j << " out of 5 chances" << std::endl;
				std::cout << " " << std::endl;

			} while (j != 5);
			std::cout << "The number was " << die << std::endl;
		}
		
	}
	
	if (difficulty == "Hard")
	{
		for (int l = 0; l < 5;)
		{
			srand(static_cast<unsigned int>(time(0))); // Random number generator
			int randomNumber = rand(); // Generate random number
			int die = (randomNumber % 200) + 1; // Get a number between 1 and 200
			do{

				l++;

				std::cout << "Choose a number between 1 and 200." << std::endl;
				std::cin >> number;

				if (number == die)
				{
					std::cout << " " << std::endl;
					std::cout << "You got it right!" << std::endl;
				}
				else if (number > die)
				{
					std::cout << " " << std::endl;
					std::cout << "You chose too high!" << std::endl;
				}
				else
				{
					std::cout << " " << std::endl;
					std::cout << "You chose too low!" << std::endl;
				}
				std::cout << "You have used " << l << " out of 5 chances" << std::endl;
				std::cout << " " << std::endl;

			} while (l != 5);
			std::cout << "The number was " << die << std::endl;
		}
	}

	system("pause");
	return 0;
}