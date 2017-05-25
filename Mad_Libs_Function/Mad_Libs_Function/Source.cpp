//Mad Libs Function
//Andrew McKenzie
//Date: 5/2/2017

#include <iostream>
#include <string>

std::string color;
std::string wordEst;
std::string body_parts;
std::string animal;
std::string noun;
std::string plural_noun;

int a = 0;
int b = 0;
int c = 0;


int Color()
{
	std::cout << "Type a color: ";
	std::cin >> color;
	return 0;
}

int WordEst()
{
	std::cout << "Type a word ending in 'est': ";
	std::cin >> wordEst;
	return 0;
}

int BodyParts()
{
	std::cout << "Type a plural body part: ";
	std::cin >> body_parts;
	return 0;
}

int Animal()
{
	std::cout << "Type an animal: ";
	std::cin >> animal;
	return 0;
}

int Noun()
{
	std::cout << "Type a noun: ";
	std::cin >> noun;
	return 0;
}

int PluralNoun()
{
	std::cout << "Type a plural noun: ";
	std::cin >> plural_noun;
	return 0;
}

int A()
{
	std::cout << "Type a number: ";
	std::cin >> a;
	return a;
}

int B()
{
	std::cout << "Type another number that is less then the first: ";
	std::cin >> b;
	return b;
}

int main()
{



	Color();
	WordEst();
	BodyParts();
	Animal();
	Noun();
	PluralNoun();
	A();
	B();

	c = a - b;

	std::cout << "                                                            " << std::endl;
	std::cout << "                                                            " << std::endl;

	std::cout << "The " << color << " Dragon is the " << wordEst << " Dragon of all. \nIt has " << c << " " << body_parts << ", and a " << animal << " \nshaped like a " << noun << ". "
		"It loves to eat " << plural_noun << ", \nalthough it will feast on nearly anything." << std::endl;

	system("pause");
	return 0;

}

