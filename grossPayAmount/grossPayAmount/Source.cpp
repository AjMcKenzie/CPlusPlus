//Groos Pay Amount
//Andrew McKenzie
//Date: 4/26/2017

#include <iostream>
#include <string>

int getHoursWorked()
{
	int hoursWorked;
	std::cout << "Please type how many hours you worked. ";
	std::cin >> hoursWorked;
	return hoursWorked;
}

int getPayRate()
{
	double payRate;
	std::cout << "Please enter your pay rate. ";
	std::cin >> payRate;
	return payRate;
}

int calcGross()
{
	
}

int main()
{
	getHoursWorked();
	getPayRate();
	calcGross();





	system("pause");
	return 0;
}