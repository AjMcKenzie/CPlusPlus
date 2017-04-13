//Hotel Rooms
//Andrew McKenzie
//Date: 4/13/2017

#include <iostream>
#include <string>

int main()
{
	double phoneCharge, perMinutes = 0, totalAmount, grandTotal, perNightRate, amountOfNights, serviceCharge;
	int extraNight = 0;
	std::string anotherNight_Yes_No, serviceYES_NO;
	
	
		std::cout << "How many nights did they stay? " << std::endl;
		std::cin >> amountOfNights;

		std::cout << "Did they pay for service? " << std::endl;
		std::cin >> serviceYES_NO;

		std::cout << "How many minutes were they on the phone? " << std::endl;
		std::cin >> perMinutes;

	do
	{
		std::cout << "Did they spend another night?" << std::endl;
		std::cin >> anotherNight_Yes_No;
		extraNight = extraNight + 100;

	} while (anotherNight_Yes_No == "Yes");

	if (serviceYES_NO == "Yes")
	{
		perNightRate = amountOfNights * 100 + extraNight;
		serviceCharge = 35;
		totalAmount = perNightRate + serviceCharge;
		phoneCharge = perMinutes * .25;
		grandTotal = totalAmount + phoneCharge;
	}
	else
	{
		phoneCharge = perMinutes * .25;
		perNightRate = amountOfNights * 100 + extraNight;
		grandTotal = perNightRate + phoneCharge;
		serviceCharge = 0;
	}
	

	std::cout << "They have to pay $" << perNightRate << " for rent" << std::endl;
	std::cout << "They have to pay $" << serviceCharge << " for the room service." << std::endl;
	std::cout << "They have to pay $" << phoneCharge << "0 for the phone bill." << std::endl;
	std::cout << "" << std::endl;
	std::cout << "Their total bill comes to $" << grandTotal << "." << std::endl;


	system("pause");
	return 0;
}
