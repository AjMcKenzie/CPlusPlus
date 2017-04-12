//Delgados Tacos
//Andrew McKenzie
//Date: 4/11/2017

#include <iostream>
#include <string>

int main()
{
	std::string burrito, taco, pop, churros, tamales, tacoSalad, chipsSalsa, taquitos, chimichanga, potatoOle;
	int order;

	double burritoPrice = 1.99; //Burrito
	double burritosOrdered = NULL;

	double tacoPrice = 0.99; //Taco
	double tacosOrdered = NULL;

	double popPrice = 0.99; //Pop (Mt. Dew)
	double popOrdered = NULL;

	double churrosPrice = 2.00; //Churro
	double churrosOrdered = NULL;

	double tamalesPrice = 1.50; //Tamales
	double tamalesOrdered = NULL;

	double tacoSaladPrice = 2.50; //Taco Salad
	double tacoSaladsOrdered = NULL;

	double chipsSalsaPrice = 1.00; //Chips & Salsa
	double chipsSalsaOrdered = NULL;

	double taquitosPrice = 1.50; //Taquitos
	double taquitosOrdered = NULL;

	double chimichangaPrice = 2.00; //Chimichanga
	double chimichangasOrdered = NULL;

	double potatoOlePrice = 1.50; //Potato Ole
	double potatoOlesOrdered = NULL;

	const double taxRate = 1.075;

	double totalPrice;
	double totalPriceWithTax;





	std::cout << "                              sss                                                                                                 " << std::endl;
	std::cout << "                             s   s                                                                                                " << std::endl;
	std::cout << "                            s     s                                                                                               " << std::endl;
	std::cout << "                           s       s                                                                                              " << std::endl;
	std::cout << "                 sssssssssssssssssssssssssssss                                                                                    " << std::endl;
	std::cout << "               ssssssssss           sssssssssss                                                                                   " << std::endl;
	std::cout << "   ***********************************************************                                                                    " << std::endl;
	std::cout << "   *         _____  ____     ___    ___                      *                                                                    " << std::endl;
	std::cout << "   *           |   |____|   |      |   |                     *                                                                    " << std::endl;
	std::cout << "   *           |   |    |   |___   |___|                     *                                                                    " << std::endl;
	std::cout << "   *                                                         *                                                                    " << std::endl;
	std::cout << "   *         ****************************                    *                                                                    " << std::endl;
	std::cout << "   *         *          ooo             *                    *                                                                    " << std::endl;
	std::cout << "   *         *         o   o            *                    *                                                                    " << std::endl;
	std::cout << "   *         *          ooo V           *                    ****************                                                     " << std::endl;
	std::cout << "   *         *           | /            *                    *     *         *                                                    " << std::endl;
	std::cout << "   *         *          /|              *                    *     *          *                                                   " << std::endl;
	std::cout << "   *         ****************************                    *     *           *                                                  " << std::endl;
	std::cout << "   *                                                         *     *************                                                  " << std::endl;
	std::cout << "   *                                                         *                 *                                                  " << std::endl;
	std::cout << "   *                                                         *                 *                                                  " << std::endl;
	std::cout << "   *                                                         *                 *                                                  " << std::endl;
	std::cout << "   *                                                         *******************                                                  " << std::endl;
	std::cout << "   *********ooooo**************************ooooo*************                                                                     " << std::endl;
	std::cout << "          oo     oo                      oo     oo                                                                                " << std::endl;
	std::cout << "         oo       oo                    oo       oo                                                                               " << std::endl;
	std::cout << "          oo     oo                      oo     oo                                                                                " << std::endl;
	std::cout << "            ooooo                          ooooo                                                                                  " << std::endl;




	std::cout << "Welcome to Delgados Tacos, where we make the dos in Delgados." << std::endl;



	std::cout << "                                           " << std::endl;
	std::cout << "  ~|~|~|~|~|~|~|~|~|~|~|~|~|~|~|~|~|~|~|~|~|  " << std::endl;
	std::cout << "  |                                        |  " << std::endl;
	std::cout << "  ~                                        ~  " << std::endl;
	std::cout << "  |                                        |  " << std::endl;
	std::cout << "  ~                                        ~  " << std::endl;
	std::cout << "  |                                        |  " << std::endl;
	std::cout << "  ~  1         Tacos | price | $0.99       ~  " << std::endl;
	std::cout << "  |  2       Burrito | price | $1.99       |  " << std::endl;
	std::cout << "  ~  3       Mt. Dew | price | $0.99       ~  " << std::endl;
	std::cout << "  |  4       Churros | price | $2.00       |  " << std::endl;
	std::cout << "  ~  5       Tamales | price | $1.50       ~  " << std::endl;
	std::cout << "  |  6    Taco Salad | price | $2.50       |  " << std::endl;
	std::cout << "  ~  7 Chips & Salsa | price | $1.00       ~  " << std::endl;
	std::cout << "  |  8      Taquitos | price | $1.50       |  " << std::endl;
	std::cout << "  ~  9   Chimichanga | price | $2.00       ~  " << std::endl;
	std::cout << "  |  10   Potato Ole | price | $1.50       |  " << std::endl;
	std::cout << "  ~                                        ~  " << std::endl;
	std::cout << "  |                                        |  " << std::endl;
	std::cout << "  ~                                        ~  " << std::endl;
	std::cout << "  |                                        |  " << std::endl;
	std::cout << "  ~                                        ~  " << std::endl;
	std::cout << "  |~|~|~|~|~|~|~|~|~|~|~|~|~|~|~|~|~|~|~|~|~  " << std::endl;
	std::cout << "                                           " << std::endl;


	//How many...

	std::cout << "Please select the number of the order you want,\nin chronological order of the menu. ";
	std::cin >> order;
	std::cout << " " << std::endl;

	if (order == 1)
	{
		std::cout << "How many Tacos do you want? " << std::endl;
		std::cin >> tacosOrdered;
		std::cout << "Please select the number of the order you want. Type a number greater than 10! ";
		std::cin >> order;
		std::cout << " " << std::endl;
	}

	if (order == 2)
	{
		std::cout << "How many Burritos do you want? " << std::endl;
		std::cin >> burritosOrdered;
		std::cout << "Please select the number of the order you want. Type a number greater than 10! ";
		std::cin >> order;
		std::cout << " " << std::endl;
	}

	if (order == 3)
	{
		std::cout << "How many Mt. dews do you want? " << std::endl;
		std::cin >> popOrdered;
		std::cout << "Please select the number of the order you want. Type a number greater than 10! ";
		std::cin >> order;
		std::cout << " " << std::endl;
	}

	if (order == 4)
	{
		std::cout << "How many churros do you want? " << std::endl;
		std::cin >> churrosOrdered;
		std::cout << "Please select the number of the order you want. Type a number greater than 10! ";
		std::cin >> order;
		std::cout << " " << std::endl;
	}

	if (order == 5)
	{
		std::cout << "How many tamales do you want? " << std::endl;
		std::cin >> tamalesOrdered;
		std::cout << "Please select the number of the order you want. Type a number greater than 10! ";
		std::cin >> order;
		std::cout << " " << std::endl;
	}

	if (order == 6)
	{
		std::cout << "How many containers of taco salad do you want? " << std::endl;
		std::cin >> tacoSaladsOrdered;
		std::cout << "Please select the number of the order you want. Type a number greater than 10! ";
		std::cin >> order;
		std::cout << " " << std::endl;
	}

	if (order == 7)
	{
		std::cout << "How many bowls of chips & salsa do you want? " << std::endl;
		std::cin >> chipsSalsaOrdered;
		std::cout << "Please select the number of the order you want. Type a number greater than 10! ";
		std::cin >> order;
		std::cout << " " << std::endl;
	}

	if (order == 8)
	{
		std::cout << "How many taquitos do you want? " << std::endl;
		std::cin >> taquitosOrdered;
		std::cout << "Please select the number of the order you want. Type a number greater than 10! ";
		std::cin >> order;
		std::cout << " " << std::endl;
	}

	if (order == 9)
	{
		std::cout << "How many chimichanga do you want? " << std::endl;
		std::cin >> chimichangasOrdered;
		std::cout << "Please select the number of the order you want. Type a number greater than 10! ";
		std::cin >> order;
		std::cout << " " << std::endl;
	}

	if (order == 10)
	{
		std::cout << "How many containers of potato oles do you want? " << std::endl;
		std::cin >> potatoOlesOrdered;
		std::cout << "Please select the number of the order you want. Type a number greater than 10! ";
		std::cin >> order;
		std::cout << " " << std::endl;
	}
	else if (order > 10)
	{
	
		//Math

		totalPrice = (burritosOrdered * burritoPrice) + (tacoPrice * tacosOrdered) + (popOrdered * popPrice)
			+ (churrosOrdered * churrosPrice) + (tamalesOrdered * tamalesPrice) + (tacoSaladsOrdered * tacoSaladPrice)
			+ (chipsSalsaOrdered * chipsSalsaPrice) + (taquitosOrdered * taquitosPrice) + (chimichangasOrdered * chimichangaPrice)
			+ (potatoOlesOrdered * potatoOlePrice);



		totalPriceWithTax = totalPrice * taxRate;

		std::cout << " " << std::endl;

		//Total

		std::cout << "You ordered " << tacosOrdered << " tacos, " << burritosOrdered << " burritos, " << popOrdered << " Mt. Dews, " << churrosOrdered << " churros, \n" << tamalesOrdered << " tamales, "
			<< tacoSaladsOrdered << " containers of taco salad, " << chipsSalsaOrdered << " bowls of chips & salsa, \n" << taquitosOrdered << " taquitos, "
			<< chimichangasOrdered << " chimichangas, and " << potatoOlesOrdered << " containers of potato oles, \nfor a total of $"
			<< totalPrice << std::endl;

		std::cout << " " << std::endl;

		//Total with tax

		std::cout << "Your total for all items entered with tax is $" << totalPriceWithTax << std::endl;


	}



	system("pause");
	return 0;
}