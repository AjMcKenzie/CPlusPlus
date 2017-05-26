//Right Triangle
//Andrew McKenzie
//Date: 4/12/2017

#include <iostream>
#include <string>
#include <math.h>

int displayAside()
{
	double userEntryC, userEntryB, answerA;
	std::cout << "Enter you number for side B >>> ";
	std::cin >> userEntryB;

	std::cout << "Enter you number for side C >>> ";
	std::cin >> userEntryC;

	answerA = sqrt(userEntryC * userEntryC - userEntryB * userEntryB);
	std::cout << "The answer for side A is " << answerA << "\n";
	return 0;
}

int displayBside()
{
	double userEntryA, userEntryC, answerB;
	std::cout << "Enter you number for side A >>> ";
	std::cin >> userEntryA;

	std::cout << "Enter you number for side C >>> ";
	std::cin >> userEntryC;

	answerB = sqrt(userEntryA * userEntryA - userEntryC * userEntryC);
	std::cout << "The answer for side B is " << answerB << "\n";
	return 0;
}

int displayCside()
{
	double userEntryA, userEntryB, answerC;
	std::cout << "Enter you number for side A >>> ";
	std::cin >> userEntryA;

	std::cout << "Enter you number for side B >>> ";
	std::cin >> userEntryB;

	answerC = sqrt(userEntryA * userEntryA - userEntryB * userEntryB);
	std::cout << "The answer for side C is " << answerC << "\n";
	return 0;
}


int main()
{
	std::string whichSide, side, A, a, B, b, C, c;

	int responds = 0;
	do
	{
			std::cout << "Please select the side you need to be answered A, B, or C >>> ";
			std::cin >> side;

			if (side == "A" || side == "a")
			{
				displayAside();
			}

			if (side == "B" || side == "b")
			{
				displayBside();
			}
			if (side == "C" || side == "c")
			{
				displayCside();
			}
			std::cout << "\nWould you like to solve for another triangle?";
			std::cout << "\nEnter 1 for yes, or any other number for no >>>> ";
			std::cin >> responds;
	} while (responds <= 1);

	system("pause");
	return 0;
}
