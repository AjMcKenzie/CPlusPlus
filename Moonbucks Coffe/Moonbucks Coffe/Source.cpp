//Moonbucks Coffe total and average
//Name: Andrew McKenzie
//Date: 5/3/2017

#include <iostream>

int main()
{
	double pounds[12] = { 400.5, 450.0, 475.5, 336.5, 457.0, 325.0, 220.5, 267.0, 300.0, 320.5, 400.5, 415.0 };

	double total = 0.0;
	double average = 0.0;
	
	for (int n = 0; n < 12; n++)
	{
		total = pounds[12] + total;
	}
	std::cout << "Total pounds: " << total << std::endl;




	system("pause");
	return 0;
}