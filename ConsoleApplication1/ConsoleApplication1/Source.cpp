//Mad Libs Function
//Andrew McKenzie
//Date: 5/2/2017

#include <iostream>
#include <string>

std::string Color(std::string Color1)
{
	std::string color;
	std::cout << "Type a color: ";
	std::cin >> color;
	return color;
}

std::string WordEst()
{
	std::string wordEst;
	std::cout << "Type a word ending in 'est': ";
	std::cin >> wordEst;
	return wordEst;
}

std::string BodyParts()
{
	std::string body_parts;
	std::cout << "Type a plural body part: ";
	std::cin >> body_parts;
	return body_parts;
}

std::string Animal()
{
	std::string animal;
	std::cout << "Type an animal: ";
	std::cin >> animal;
	return animal;
}

std::string Noun()
{
	std::string noun;
	std::cout << "Type a noun: ";
	std::cin >> noun;
	return noun;
}

std::string PluralNoun()
{
	std::string plural_noun;
	std::cout << "Type a plural noun: ";
	std::cin >> plural_noun;
	return plural_noun;
}

int A(int a)
{
	std::cout << "Type a number: ";
	std::cin >> a;
	return a;
}

int B(int b)
{
	std::cout << "Type another number that is less then the first: ";
	std::cin >> b;
	return b;
}

int C(int c, int a, int b)
{
	c = a - b;
	return c;
}

int main()
{
	std::string Color1;
	int a, int b, int c;
	Color(Color1);
	WordEst();
	BodyParts();
	Animal();
	Noun();
	PluralNoun();
	A(a);
	B(b);
	C(c, a, b);



	std::cout << "                                                            " << std::endl;
	std::cout << "                                                            " << std::endl;

	std::cout << "The " << Color() << " Dragon is the " << WordEst() << " Dragon of all. \nIt has " << C(c, a, b) << " " << BodyParts() << ", and a " << Animal() << " shaped like a " << Noun() << ". \nIt loves to eat " << PluralNoun() << ", although it will feast on nearly anything." << std::endl;

	system("pause");
	return 0;
}

