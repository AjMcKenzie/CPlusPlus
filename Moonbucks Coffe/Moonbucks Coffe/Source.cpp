//Moonbucks Coffe total and average
//Name: Andrew McKenzie
//Date: 5/3/2017

#include <iostream>

double getTotal(double used[], int numElements);
void getAverage(double totalLBS, int numElements, double &avg);

int main()
{
	double pounds[12] = { 400.5, 450.0, 475.5, 336.5, 457.0, 325.0, 220.5, 267.0, 300.0, 320.5, 400.5, 415.0 };
	double total = 0.0;
	double average = 0.0;
	

	total = getTotal(pounds, 12);
	getAverage(total, 12, average);

	std::cout << "Total pounds: " << total << std::endl;
	std::cout << "Average pounds: " << average << std::endl;
	
	system("pause");
	return 0;
}


double getTotal(double poundsUsed[], int numElements)
{
	double totalUsed = 0.0;
	for (int sub = 0; sub < numElements; sub += 1)
	{
		totalUsed += poundsUsed[sub];
	}
	return totalUsed;
}

void getAverage(double totalLBS, int numElements, double &avg)
{
	avg = totalLBS / numElements;
}