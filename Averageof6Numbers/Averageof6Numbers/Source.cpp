//Array average of 6 numbers
//Name: Andrew McKenzie
//Date: 5/4/2017

#include <iostream>

int average[6] = { 23, 6, 47, 35, 2, 14 }; //The array
int n, result = 0;

int main()
{
	int highest;
	int even = 0;
	int oddNum = 0;

	for (n = 0; n < 6; n++) //Loop
	{
		result = average[n] + result; //Adds up the numbers
		if (highest < average[n])
		{
			highest = average[n];
		}
		if (even != average[n] % 2)
		{
			oddNum = average[n];
			std::cout << "The oddd numbers are " << oddNum << std::endl;
		}
	}
	result = result / 6; //Divide the total by 6
	std::cout << "The average is " << result << std::endl;
	std::cout << "The highest number  " << highest << std::endl;


	system("pause");
	return 0;
}