// Hourly Rate
//Name: Andrew McKenzie
//Date: 5/4/2017

#include <iostream>
#include <iomanip>

int main()
{

	//declare array and variabl
	double rates[6] = { 11.25, 10.0, 9.85, 8.65, 15.0, 25.0 };
	int code = 0;

	//Dispaly  hourly rate with two decimal places
	std::cout << std::fixed << std::setprecision(2);

	//Get pay code
	std::cout << "Pa code (1 - 6): ";
	std::cin >> code;
	if (code >= 1 && code <= 6)
	{
		std::cout << "Hourly rate : $" << rates[code - 1] << std::endl;
	}
	else
	{
		std::cout << "Invalid pay code." << std::endl;
	}




	system("pause");
	return 0;
}