//Age Program
//Andrew McKenzie
//Date:

#include <iostream>
#include <string>

int main()
{
	int age;
	
	
	std::cout << "Enter your age. ";
	std::cin >> age;

	if (age <= 11)
		std::cout << "You are 11 or less.";
	else if (age >= 12 && age < 18)
		std::cout << "You are less than 18 but older than 12.";
	else if (age >= 19 && age <= 30)
		std::cout << "You are still in your 20's, enjoy it.";
	else if (age > 30 && age <= 40)
		std::cout << "Not much to look foward to now.";
	else if (age > 40 && age <= 50)
		std::cout << "You are getting old, admit it.";
	else if (age > 50 && age <= 70)
		std::cout << "You better look back at your life, before you die.";



	system("pause");
	return 0;
}
