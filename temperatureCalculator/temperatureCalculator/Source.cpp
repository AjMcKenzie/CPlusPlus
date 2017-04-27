//Temperature Calculator
//Andrew McKenzie
//Date: 4/3/2017

#include <iostream>
#include <string>

int Temp1(double temp1)
{
	double convertTemp1;
	convertTemp1 = (temp1 - 32) / 1.8;
	return convertTemp1;
}

int Temp2(double temp2)
{
	double convertTemp2;
	convertTemp2 = (temp2 - 32) / 1.8;
	return convertTemp2;
}

int Temp3(double temp3)
{
	double convertTemp3;
	convertTemp3 = (temp3 - 32) / 1.8;
	return convertTemp3;
}

int main(double temp1, double temp2, double temp3)
{
	double fahrenheit, celsius, convertTemp1, convertTemp2, convertTemp3, calculate;


	
	std::cout << "What is the temperature at 8:00 in fahrenheit: " << std::endl;
	std::cin >> temp1;

	std::cout << "What is the temperature at 12:00 in fahrenheit: " << std::endl;
	std::cin >> temp2;

	std::cout << "What is the temperature at 17:00 in fahrenheit: " << std::endl;
	std::cin >> temp3;
	std::cout << " " << std::endl;


	std::cout << "The temperature at 8:00 is " << temp1 << " F or " << Temp1(temp1) << " C." << std::endl;
	std::cout << "The temperature at 12:00 is " << temp2 << " F or " << Temp2(temp2) << " C." << std::endl;
	std::cout << "The temperature at 17:00 is " << temp3 << " F or " << Temp3(temp3) << " C." << std::endl;
	
	system("pause");
	return 0;
}
