//Student Computer Numbers
//Andrew McKenzie
//Date:

#include <iostream>
#include <string>

int main()
{
	int Yes_No;
	unsigned long studentComputerNumber;

	do{

		std::cout << "Please scan your computer: ";
		std::cin >> studentComputerNumber;

		switch (studentComputerNumber)
		{
		case 99732:
			std::cout << "Dusty's computer\n";
			break;
		case 99720:
			std::cout << "Hannah's computer\n";
			break;
		case 99724:
			std::cout << "Kayla's computer\n";
			break;
		case 99718:
			std::cout << "Zach's computer\n";
			break;
		case 99727:
			std::cout << "Chase's computer\n";
			break;
		case 99733:
			std::cout << "Chance's computer\n";
			break;
		case 99715:
			std::cout << "Glenn's computer\n";
			break;
		case 99735:
			std::cout << "Trey's computer\n";
			break;
		case 99721:
			std::cout << "Gairren's computer\n";
			break;
		case 99738:
			std::cout << "Dipesh's computer\n";
			break;
		case 99717:
			std::cout << "Andrew's computer\n";
			break;
		default:
			std::cout << "Not Valid\n";
		}
		std::cout << "Would you like to scan another computer? 1 for Yes 2 for No. ";
		std::cin >> Yes_No;
	} while (Yes_No == 1);


	system("pause");
	return 0;
}