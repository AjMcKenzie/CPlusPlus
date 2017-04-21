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
					//	std::cout << "Continue or Exit.... " << std::endl;
					//	std::cin >> contStop;
					//	if (contStop == "Continue")
					//	{
					//		difficulty == "Easy";
					//	}
					//	else if (contStop == "Exit")
					//	{
					//		std::cout << "What difficulty do you want? Easy, Medium, Hard." << std::endl;
					//		std::cin >> difficulty;
					//	}
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
					std::cout << "The number was " << die << std::endl;
					std::cout << " " << std::endl;

			} while (i != 5 || number == die);
			
		}
	}

	if (difficulty == "Medium")
	{
		for (int j = 0; j < 5;)
		{
			srand(static_cast<unsigned int>(time(0))); // Random number generator
			int randomNumber = rand(); // Generate random number
			int die = (randomNumber % 100) + 1; // Get a number between 1 and 100
			j++;

			std::cout << "Choose a number between 1 and 100." << std::endl;
			std::cin >> number;
			

				std::cout << "You have used " << j << " out of 5 chances" << std::endl;
			}
		
	}
	
	if (difficulty == "Hard")
	{
		for (int l = 0; l < 5;)
		{
			srand(static_cast<unsigned int>(time(0))); // Random number generator
			int randomNumber = rand(); // Generate random number
			int die = (randomNumber % 200) + 1; // Get a number between 1 and 200
			l++;

			std::cout << "Choose a number between 1 and 200." << std::endl;
			std::cin >> number;
			std::cout << "You have used " << l << " out of 5 chances" << std::endl;
		}
	}

	system("pause");
	return 0;
}