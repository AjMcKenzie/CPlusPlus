//Right Triangle
//Andrew McKenzie
//Date: 4/12/2017

#include <iostream>
#include <string>

int main()
{
	std::string whichSide, side, A, a, B, b, C, c;

	int responds = 0;

	do{
		std::cout << "Please select the side you need to be answered A, B, or C >>> ";
		std::cin >> side;

		if (side == A || side == a)
		{
			double userEntryC, userEntryB, answerA;
			std::cout << "Enter you number for side B >>> ";
			std::cin >> userEntryB;

			std::cout << "Enter you number for side C >>> ";
			std::cin >>	userEntryC;

			answerA = Math.sqrt(userEntryC * userEntryC - userEntryB * userEntryB);
			std::cout << "The answer for side A is " << answerA << "\n";
		}
		}
		if (side == B || side == b)
		{
			displayBside();
		}
		if (side == C || side == c)
		{
			displayCside();
		}





	system("pause");
	return 0;
}