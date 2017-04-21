//Switch Statments Practice
//Andrew McKenzie
//Date: 4/21/2017

#include <iostream>
#include <string>

int main()
{
	char grade = ' ';
	std::cout << "Enter a letter grade: ";
	std::cin >> grade;
	grade = toupper(grade);

	switch (grade)
	{
	case 'A':
		std::cout << "Excellent\n";
		break;
	case 'B':
		std::cout << "Above Average\n";
		break;
	case 'C':
		std::cout << "Average\n";
		break;
	case 'D':
	case 'F':
		std::cout << "Below Average\n";
		break;
	default:
		std::cout << "Invalid grade\n";
	}





	system("pause");
	return 0;
}