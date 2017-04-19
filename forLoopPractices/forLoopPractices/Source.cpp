//For Loops Pracice
//Andrew McKenzie
//Date: 4/19/2017

#include <iostream>
#include <string>
#include <string>

int main()
{
	std::cout << "Counting forward:\n";
	for (int i = 0; i < 50; i++)
	{
		std::cout << i << " ";
	}
	std::cout << "\n\n";
	std::cout << "Counting backward:\n";
	for (int i = 50; i >= 0; i--)
	{
		std::cout << i << " ";
	}
	std::cout <<"\n\n";
	std::cout << "Counting by fives:\n";
	for (int i = 0; i <= 100; i = i +5)
	{
		std::cout << i << " ";
	}
	std::cout << "\n\n";
	std::cout << "Counting with nested For Loops:\n";
	int row = 10;
	int column = 5;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			std::cout << i << "." << j << " ";
		}
		std::cout << std::endl;
	}
	std::cout << "\n\n";

	system("pause");
	return 0;
}