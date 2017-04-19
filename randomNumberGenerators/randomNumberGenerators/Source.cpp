//Random Number Generator
//Andrew McKenzie
//Date:

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

int main()
{
	int number;
	int chances = 0;
	bool correct;

	std::cout << "Pick a number between 1 and 10." << std::endl;
	std::cin >> number;
	do{

		srand(static_cast<unsigned int>(time(0))); // Random number generator
		int randomNumber = rand(); // Generate random number
		int die = (randomNumber % 10) + 1; // Get a number between 1 and 10
		chances ++; // chances = chances + 1;
		std::cout << "The number the computer guessed is " << die << std::endl;
		
		if (die == number)
		{
			std::cout << " " << std::endl;
			std::cout << "The computer guessed "<< die << "!" << std::endl;
			correct = true;
		}
		else if (die > number)
		{
			std::cout << " " << std::endl;
			std::cout << "It chose too high!" << std::endl;
		}
		else
		{
			std::cout << " " << std::endl;
			std::cout << "It chose too low!" << std::endl;
		}
		
		std::cout << "It has used " << chances << " of 5 chances." << std::endl;
		

	} while (chances != 5);

	std::cout << " " << std::endl;
	std::cout << " 'I GOT IT RIGHT HUMAN!' " << std::endl;
	std::cout << "                        ~Computer " << std::endl;

	system("pause");
	return 0;
}