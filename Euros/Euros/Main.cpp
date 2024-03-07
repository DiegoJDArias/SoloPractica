#include "Euros.h"
#include <iostream>
#include <conio.h>


int main()
{
	Euros euros1{ 7 };
	Euros euros2{ 3 };

	//sin el prototipo en Euros.h, esto daría error de compilación
	Euros sumarEuros{ euros1 + euros2 }; 
	std::cout << "Tengo " << sumarEuros.getEuros() << " euros.\n";


	_Check_return_ _getch();
	return 0;
}