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

	srand(static_cast<unsigned int>(time(0))); // Random number generator
	int randomNumber = rand(); // Generate random number
	int die = (randomNumber % 10) + 1; // Get a number between 1 and 10

	std::cout << "What difficulty do you want? Easy, Medium, Hard." << std::endl;
	std::cin >> difficulty;

	if (difficulty == "Easy")
	{
		for (int i = 0; i < 6; i++)
		{
			std::cout << "Choose a number?" << std::endl;
			std::cin >> number;
			std::cout << i <<" ";
		}
	}

	if (difficulty == "Medium")
	{

	}
	
	if (difficulty == "Hard")
	{

	}

	system("pause");
	return 0;
}