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
	
}

int WordEst()
{
	std::string wordEst;
	std::cout << "Type a word ending in 'est': ";
	std::cin >> wordEst;
	return;
}

int main()
{

	int a;
	int b;
	int c;

	std::string color, wordEst, body_parts, animal, noun, plural_noun, Co, Est;

	Co = Color();

	Est = WordEst();
	

	std::cout << "Type a plural body part: ";
	std::cin >> body_parts;

	std::cout << "Type an animal: ";
	std::cin >> animal;

	std::cout << "Type a noun: ";
	std::cin >> noun;

	std::cout << "Type a plural noun: ";
	std::cin >> plural_noun;

	std::cout << "Type a number: ";
	std::cin >> a;

	std::cout << "Type another number that is less then the first: ";
	std::cin >> b;

	c = a - b;
	std::cout << "                                                            " << std::endl;
	std::cout << "                                                            " << std::endl;

	std::cout << "The " << Color() << " Dragon is the " << wordEst << " Dragon of all. \nIt has " << c << " " << body_parts << ", and a " << animal << " shaped like a " << noun << "." << std::endl;
	std::cout << "It loves to eat " << plural_noun << ", although it will feast on nearly anything." << std::endl;

	system("pause");
	return 0;
}

