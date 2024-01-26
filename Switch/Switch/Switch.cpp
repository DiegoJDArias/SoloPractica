#include <iostream>


int main(){
	int numero{};
	
	std::cout<<"Digite un numero entre el 1 - 5: ";
	std::cin>>numero;
	
	switch(numero){
	    case 1: std::cout <<"El numero es 1";
	    break;
	    case 2: std::cout <<"El numero es 2";
	    break;
	    case 3: std::cout <<"El numero es 3";
	    break;
	    case 4: std::cout <<"El numero es 4";
	    break;
	    case 5: std::cout <<"El numero es 5";
	    break;
	    default: std::cout <<"El numero no esta dentro del rango 1 - 5";
	    break;
	}
	
	return 0;
}


#include <iostream>


bool ver(int x)
{
	switch (x)
	{
	case 1:
	case 2:
	case 3:
	case 4:
		return true;
	default:
		return false;
	}
}


int main() {

	int x{ 2 };

	std::cout << "Es " << std::boolalpha << ver(x);

	std::cout << " y Se ejecuta";

	return 0;
}

/* En este ejemplo, std::boolalpha configura la salida para que los valores booleanos
se impriman como palabras ("true" o "false"). Luego, al imprimir el resultado de la función
obtendrás "true" o "false" en lugar de 1 o 0. Esta configuración es válida para todas las salidas
booleanas subsiguientes en el programa hasta que se cambie con std::noboolalpha*/


#include<iostream>


int main() {
	int numero;

	std::cout << "Digite un numero entre [1-12]: ";
	std::cin >> numero;

	switch (numero) {
	case 1: std::cout << "Enero"; break;
	case 2: std::cout << "Febrero"; break;
	case 3: std::cout << "Marzo"; break;
	case 4: std::cout << "Abril"; break;
	case 5: std::cout << "Mayo"; break;
	case 6: std::cout << "Junio"; break;
	case 7: std::cout << "Julio"; break;
	case 8: std::cout << "Agosto"; break;
	case 9: std::cout << "Septiembre"; break;
	case 10: std::cout << "Octubre"; break;
	case 11: std::cout << "Noviembre"; break;
	case 12: std::cout << "Diciembre"; break;
	default: std::cout << "No existe mes para ese numero"; break;
	}

	return 0;
}