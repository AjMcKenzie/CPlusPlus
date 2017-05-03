//Campany Sales Array
//Andrew McKenzie
//Date: 5/3/2017

#include <iostream>
#include <iomanip>

int main()
{
	//declare array
	double sales[4] = { 0.0 };


	//store data in the array
	for (int sub = 0; sub < 4; sub = sub + 1)
	{
		std::cout << "Enter the sales for Region ";
		std::cout << sub + 1 << ": ";
		std::cin >> sales[sub];
		//end for loop
	}

	//display the contents of the array
	std::cout << std::fixed << std::setprecision(2) << "\n\n";
	
	for (int sub = 0; sub < 4; sub = sub + 1)
	{
		std::cout << "Sales for Region " << sub + 1 << ": $";
		std::cout << sales[sub] << std::endl;
	}

	for (int sub = 0; sub < 4; sub = sub + 1)
	{
		
	}

	std::cout << "The total for all four regions is: " << std::endl;
	

	system("pause");
	return 0;
}