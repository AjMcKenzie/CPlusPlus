//Array average of 6 numbers
//Name: Andrew McKenzie
//Date: 5/4/2017

#include <iostream>

int average[6] = { 23, 6, 47, 35, 2, 14 }; //The array
int n, result = 0;

int main()
{
	for (n = 0; n < 6; n++) //Loop
	{
		result = average[n] + result; //Adds up the numbers
	}
	result = result / 6; //Divide the total by 6
	std::cout << "The average is " << result << std::endl;


	system("pause");
	return 0;
}