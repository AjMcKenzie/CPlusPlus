//
//Andrew McKenzie
//Date:
#include <iostream>
#include <string>

int main()
{
	std::string burrito, taco, pop, churros, tamales, tacoSalad, chipsSalsa, taquitos, chimichanga, potatoOle;

	double burritoPrice = 1.99; //Burrito
	double burritosOrdered;

	double tacoPrice = 0.99; //Taco
	double tacosOrdered;

	double popPrice = 0.99; //Pop (Mt. Dew)
	double popOrdered;

	double churrosPrice = 2.00; //Churro
	double churrosOrdered;

	double tamalesPrice = 1.50; //Tamales
	double tamalesOrdered;

	double tacoSaladPrice = 2.50; //Taco Salad
	double tacoSaladsOrdered;

	double chipsSalsaPrice = 1.00; //Chips & Salsa
	double chipsSalsaOrdered;

	double taquitosPrice = 1.50; //Taquitos
	double taquitosOrdered;

	double chimichangaPrice = 2.00; //Chimichanga
	double chimichangasOrdered;

	double potatoOlePrice = 1.50; //Potato Ole
	double potatoOlesOrdered;

	const double taxRate = 1.075;

	double tacoTotal, burritoTotal, drinkTotal;

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
	std::cout << "  ~|~|~|~|~|~|~|~|~|~|~|~|~|~|~|~|~|~|~|~  " << std::endl;
	std::cout << "  |                                     |  " << std::endl;
	std::cout << "  ~                                     ~  " << std::endl;
	std::cout << "  |                                     |  " << std::endl;
	std::cout << "  ~                                     ~  " << std::endl;
	std::cout << "  |                                     |  " << std::endl;
	std::cout << "  ~          Tacos | price | $0.99      ~  " << std::endl;
	std::cout << "  |        Burrito | price | $1.99      |  " << std::endl;
	std::cout << "  ~        Mt. Dew | price | $0.99      ~  " << std::endl;
	std::cout << "  |        Churros | price | $2.00      |  " << std::endl;
	std::cout << "  ~        Tamales | price | $1.50      ~  " << std::endl;
	std::cout << "  |     Taco Salad | price | $2.50      |  " << std::endl;
	std::cout << "  ~  Chips & Salsa | price | $1.00      ~  " << std::endl;
	std::cout << "  |       Taquitos | price | $1.50      |  " << std::endl;
	std::cout << "  ~    Chimichanga | price | $2.00      ~  " << std::endl;
	std::cout << "  |     Potato Ole | price | $1.50      |  " << std::endl;
	std::cout << "  ~                                     ~  " << std::endl;
	std::cout << "  |                                     |  " << std::endl;
	std::cout << "  ~                                     ~  " << std::endl;
	std::cout << "  |                                     |  " << std::endl;
	std::cout << "  ~                                     ~  " << std::endl;
	std::cout << "  |~|~|~|~|~|~|~|~|~|~|~|~|~|~|~|~|~|~|~|  " << std::endl;
	std::cout << "                                           " << std::endl;


	//How many...

	std::cout << "How many Tacos do you want? " << std::endl;
	std::cin >> tacosOrdered;

	std::cout << "How many Burritos do you want? " << std::endl;
	std::cin >> burritosOrdered;

	std::cout << "How many Mt. dews do you want? " << std::endl;
	std::cin >> popOrdered;

	std::cout << "How many churros do you want? " << std::endl;
	std::cin >> churrosOrdered;


	std::cout << "How many tamales do you want? " << std::endl;
	std::cin >> tamalesOrdered;


	std::cout << "How many containers of taco salad do you want? " << std::endl;
	std::cin >> tacoSaladsOrdered;


	std::cout << "How many bowls of chips & salsa do you want? " << std::endl;
	std::cin >> chipsSalsaOrdered;


	std::cout << "How many taquitos do you want? " << std::endl;
	std::cin >> taquitosOrdered;


	std::cout << "How many chimichanga do you want? " << std::endl;
	std::cin >> chimichangasOrdered;


	std::cout << "How many containers of potato oles do you want? " << std::endl;
	std::cin >> potatoOlesOrdered;

	std::cout << "                                                               " << std::endl;


	//Math

	totalPrice = (burritosOrdered * burritoPrice) + (tacoPrice * tacosOrdered) + (popOrdered * popPrice)
		+ (churrosOrdered * churrosPrice) + (tamalesOrdered * tamalesPrice) + (tacoSaladsOrdered * tacoSaladPrice)
		+ (chipsSalsaOrdered * chipsSalsaPrice) + (taquitosOrdered * taquitosPrice) + (chimichangasOrdered * chimichangaPrice)
		+ (potatoOlesOrdered * potatoOlePrice);



	totalPriceWithTax = totalPrice * taxRate;

	std::cout << "                                                               " << std::endl;

	//Total

	std::cout << "You ordered " << tacosOrdered << " tacos, " << burritosOrdered << " burritos, " << popOrdered << " Mt. Dews, " << churrosOrdered << " churros, \n" << tamalesOrdered << " tamales, "
		<< tacoSaladsOrdered << " containers of taco salad, " << chipsSalsaOrdered << " bowls of chips & salsa, \n" << taquitosOrdered << " taquitos, "
		<< chimichangasOrdered << " chimichangas, and " << potatoOlesOrdered << " containers of potato oles, for a total of \n$"
		<< totalPrice << std::endl;

	std::cout << "                                                               " << std::endl;

	//Total with tax

	std::cout << "Your total for all items entered with tax is $" << totalPriceWithTax << std::endl;







}