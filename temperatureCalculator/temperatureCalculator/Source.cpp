//Temperature Calculator
//Andrew McKenzie
//Date: 4/3/2017

#include <iostream>
#include <string>

int main()
{
	double fahrenheit, celsius, temp1, temp2, temp3, convertTemp1, convertTemp2, convertTemp3, calculate;


	
	std::cout << "What is the temperature at 8:00 in fahrenheit: " << std::endl;
	std::cin >> temp1;

	std::cout << "What is the temperature at 12:00 in fahrenheit: " << std::endl;
	std::cin >> temp2;

	std::cout << "What is the temperature at 17:00 in fahrenheit: " << std::endl;
	std::cin >> temp3;
	std::cout << " " << std::endl;

	convertTemp1 = (temp1 - 32) / 1.8;
	
	convertTemp2 = (temp2 - 32) / 1.8;

	convertTemp3 = (temp3 - 32) / 1.8;

	std::cout << "The temperature at 8:00 is " << temp1 << "F or " << convertTemp1 << "C." << std::endl;
	std::cout << "The temperature at 12:00 is " << temp2 << "F or " << convertTemp2 << "C." << std::endl;
	std::cout << "The temperature at 17:00 is " << temp3 << "F or " << convertTemp3 << "C." << std::endl;
	
	system("pause");
	return 0;
}
