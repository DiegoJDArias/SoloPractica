/*
variable = limite_inferior + rand() % (limite_superior +1 - limite_inferior);
*/

#include<iostream>
#include<stdlib.h>
#include<time.h>


int main(){
	int numero{}, dato{}, contador{};
	
	srand(time(NULL)); //generar un numero aleatorio entre 1-100
	dato = 1 + rand()%(101-1);
	
	do{
		std::cout << "Digite un numero: "; std::cin >> numero;
		if (numero > dato)
		{
			std::cout << "Es un numero menor\n";
		}
		else if (numero < dato)
		{
			std::cout << "Es un numero mayor\n";
		}
		contador++;
	} while (numero != dato);
	
	std::cout << "\nFELICIDADES ADIVINO EL NUMERO!" << std::endl;
	std::cout << "Numero de intentos: " << contador << std::endl;
	
	
	system("pause");
	return 0;
}
