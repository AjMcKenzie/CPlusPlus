//Practice Array
//Andrew McKenzie
//Date:5/3/2017

#include <iostream>

int addition[] = { 1, 2, 3, 4, 5 };
int n, result = 0;

int addition2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};


int main()
{
	int x[] = { 1 };
	int y[] = { 2 };
	int z[] = { 3 };
	std::cout << x[0] << std::endl;
	std::cout << y[0] << std::endl;
	std::cout << z[0] << std::endl;

	for (n = 0; n < 5; n++)
	{
		result = addition[n] + result;
	}
	std::cout << result << std::endl;
	
	for (n = 0; n < 5; n++)
	{
		result = addition2[n] + result;
	}
	std::cout << result << std::endl;

	system("pause");
	return 0;
}