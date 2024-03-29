﻿
#include <array>

std::array<int, 3> miArray; // declara un integer array de tamaño 3



std::array<int, 6> miArray = { 3, 5, 2, 9, 7, 2 }; // inicializador de lista
std::array<int, 7> miArray2{ 3, 5, 2, 9, 7, 2, 8 }; // lista de initialización


//Hasta C++ 17
std::array<int, > miArray = { 3, 5, 2, 9, 7, 2 }; //ilegal, tamaño array obligatorio
std::array<int> miArray2{ 3, 5, 2, 9, 7, 2, 8 }; // ilegal, tamaño array obligatorio


//Desde C++ 17
std::array miArray{ 3, 5, 2, 9, 7, 2 }; // El tipo es deducido a std::array<int, 5>
std::array miArray{ 4.7, 6.31 }; // El tipo es deducido a std::array<double, 2>

//Desde C++ 20
auto miArray1{ std::to_array<int, 6>({ 9, 7, 5, 3, 1,6 }) }; // Especifica tipo y tamaño
auto miArray2{ std::to_array<int>({ 9, 7, 5, 3, 1 }) }; // Especifica sólo tipo, deduce tamaño
auto miArray3{ std::to_array({ 9, 7, 5, 3, 1 }) }; // Deduce tipo y tamaño


#include <array>
#include <iostream>


int main()
{
	std::array<int, 6> miArray;
	miArray = { 0, 1, 2, 3, 4, 3 }; // okay
	miArray = { 9, 8, 7 }; // okay, elementos 3, 4 y 5 configurados a 0
	//miArray = { 0, 1, 2, 3, 4, 5, 6 }; // ilegal, demasiados elementos 
									   //en la lista de inicializadores

	std::cout << miArray[1] << '\n';
	miArray[2] = 6;
	std::cout << miArray[2] << '\n';
	std::cout << miArray[3] << '\n';
		
	return 0;
}


#include <array>
#include <iostream>


int main()
{
	std::array miArray{ 3, 6, 5, 2, 1 };
	std::cout << miArray[1] << '\n';
	miArray.at(1) = 7; // elemento 1 array es válido, le asigna valor de 7
	std::cout << miArray[1] << '\n';
	miArray.at(9) = 2; // element 9 array es inválido, error en ejecuión
	
	return 0;
}


#include <array>
#include <iostream>


int main()
{
	setlocale(LC_ALL, "es_ES.UTF-8");
	std::array miArray{ 6.2, 7.4, 7.3, 6.6, 2.8 };
	std::cout << "tamaño: " << miArray.size() << '\n';
		
	return 0;
}


#include <array>
#include <iostream>

void imprimirTam(const std::array<double, 5 >& miArray)
{
	std::cout << "tamaño: " << miArray.size() << '\n';
}


int main()
{
	setlocale(LC_ALL, "es_ES.UTF-8");
	std::array miArray{ 6.2, 7.4, 7.3, 6.6, 2.8 };

	imprimirTam(miArray);

	return 0;
}


#include <array>
#include <iostream>


int main()
{
	std::array myArray{ 10, 8, 6, 4, 2 };

	for (int elemento : myArray)
		std::cout << elemento << ' ';
			
	return 0;
}



#include <algorithm> // para std::sort
#include <array>
#include <iostream>


int main()
{
	std::array miArray{ 4, 6, 2, 10, 8 };
	//std::sort(miArray.begin(), miArray.end()); // ordena el array ascendente
	std::sort(miArray.rbegin(), miArray.rend()); // ordena el array descendente

	for (int elemento : miArray)
		std::cout << elemento << ' ';

	std::cout << '\n';

	return 0;
}
