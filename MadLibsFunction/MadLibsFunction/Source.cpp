//Mad Libs Function
//Andrew McKenzie
//Date: 4/24/2017
#include <iostream>
#include <string>

int Color()
{
	std::string color;
	std::cout << "Type a color: ";
	std::cin >> color;
	return;
	
}

int WordEst()
{
	std::string wordEst;
	std::cout << "Type a word ending in 'est': ";
	std::cin >> wordEst;
	return;
}

int BodyParts()
{
	std::string body_parts;
	std::cout << "Type a plural body part: ";
	std::cin >> body_parts;
	return;
}

int Animal()
{
	std::string animal;
	std::cout << "Type an animal: ";
	std::cin >> animal;
	return;
}

int Noun()
{
	std::string noun;
	std::cout << "Type a noun: ";
	std::cin >> noun;
	return;
}

int PluralNoun()
{
	std::string plural_noun;
	std::cout << "Type a plural noun: ";
	std::cin >> plural_noun;
	return;
}

int A(int a)
{
	int a;
	std::cout << "Type a number: ";
	std::cin >> a;
	return a;
}

int B(int b)
{
	int b;
	std::cout << "Type another number that is less then the first: ";
	std::cin >> b;
	return b;
}

int C(int c, int a, int b)
{
	c = a - b;
}

int main(int a, int b, int c)
{


	std::string color, wordEst, body_parts, animal, noun, plural_noun;

	
	

	
	std::cout << "                                                            " << std::endl;
	std::cout << "                                                            " << std::endl;

	std::cout << "The " << Color() << " Dragon is the " << WordEst() << " Dragon of all. \nIt has " << C(c, a, b) << " " << BodyParts() << ", and a " << Animal() << " shaped like a " << Noun() << "." << std::endl;
	std::cout << "It loves to eat " << PluralNoun() << ", although it will feast on nearly anything." << std::endl;

	system("pause");
	return 0;
}

