//Hotel Rooms
//Andrew McKenzie
//Date:

#include <iostream>
#include <string>

int main()
{
	int perNightRate, serviceCharge, amountOfNights, totalAmount, perMinutes, serviceYES_NO, grandTotal;
	double phoneCharge;


	std::cout << "How many nights did they stay? " << std::endl;
	std::cin >> amountOfNights;

	std::cout << "How many times did they pay for service? " << std::endl;
	std::cin >> serviceYES_NO;

	std::cout << "How many minutes were they on the phone? " << std::endl;
	std::cin >> perMinutes;

	serviceCharge = serviceYES_NO * 35;
	phoneCharge = perMinutes * .25;
	perNightRate = amountOfNights * 100;
	totalAmount = perNightRate +  serviceCharge;
	grandTotal = totalAmount + phoneCharge;

	std::cout << "They have to pay $" << perNightRate << " for rent" << std::endl;
	std::cout << "They have to pay $" << serviceCharge << " for the room service." << std::endl;
	std::cout << "They have to pay $" << phoneCharge << "0 for the phone bill." << std::endl;
	std::cout << "" << std::endl;
	std::cout << "Their total bill comes to $" << grandTotal << "." << std::endl;


	system("pause");
	return 0;
}
