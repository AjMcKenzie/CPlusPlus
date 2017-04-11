//Concert Hall
//Andrew McKenzie
//Date: 3/30/2017

#include <iostream>
#include <string>

int main()
{
	
	int orchestra_Seats, mainFloor_Seats, balcony_Seats, orchestra_Seats_Cost, mainFloor_Seats_Cost, balcony_Seats_Cost, allSeats;



	std::cout << "Please enter how many tickets sold for Orchestra: ";
	std::cin >> orchestra_Seats;

	std::cout << "Please enter how many tickets sold for Main Floor: ";
	std::cin >> mainFloor_Seats;

	std::cout << "Please enter how many tickets sold for Balcony: ";
	std::cin >> balcony_Seats;

	orchestra_Seats_Cost = orchestra_Seats * 25;
	mainFloor_Seats_Cost = mainFloor_Seats * 30;
	balcony_Seats_Cost = balcony_Seats * 15;
	allSeats = orchestra_Seats_Cost + mainFloor_Seats_Cost + balcony_Seats_Cost;

	std::cout << " " << std::endl;
	std::cout << "For the Orchestra seats the cost is $" << orchestra_Seats_Cost << "."<< std::endl;
	std::cout << "For the Main Floor seats the cost is $" << mainFloor_Seats_Cost << "." << std::endl;
	std::cout << "For the Balcony seats the cost is $" << balcony_Seats_Cost << "." << std::endl;
	std::cout << " "<< std::endl;
	std::cout << "The total over all is $" << allSeats << "." << std::endl;



	system("pause");
	return 0;
}
