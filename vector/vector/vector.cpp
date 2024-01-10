#if 0

#include <vector>

int main()
{
	// no necesitamos especificar el tamaño en la declaración
	std::vector<int> array;
	std::vector<int> array2 = { 9, 7, 5, 3, 1 }; // usa una lista de inicializadores para inicializar el array (antes C++11)
	std::vector<int> array3{ 9, 7, 5, 3, 1 }; // usa inicialización uniforme para inicializar el array

	// como con los std::array, el tipo puede ser omitido desde  C++17
	std::vector array4{ 9, 7, 5, 3, 1 }; // deducido a std::vector<int>

	array[6] = 2; // no comprueba límites
	array.at(7) = 3; // comprueba límites

	array = { 0, 1, 2, 3, 4 }; // correcto, tamaño array es ahora 5
	array = { 9, 8, 7 }; // correcto, tamaño array es ahora 3
}


void hazAlgo(bool salidaTemprana)
{
	int* array{ new int[5] { 9, 7, 5, 3, 1 } }; // asigna memoria usando new

	if (salidaTemprana)
		return; // la función sale sin desasignar la memoria asignada arriba

	// hacer algo

	delete[] array; // nunca llamado
}


#include <iostream>
#include <vector>

void imprimirTam(const std::vector<int>& array)
{
	setlocale(LC_ALL, "es_ES.UTF-8");
	std::cout << "El tamaño es: " << array.size() << '\n';
}


int main()
{
	std::vector array{ 9, 7, 5, 3, 1 };
	imprimirTam(array);

	std::vector<int> vacio{};
	imprimirTam(vacio);

	return 0;
}


#include <iostream>
#include <vector>

int main()
{
	setlocale(LC_ALL, "es_ES.UTF-8");
	std::vector array{ 0, 1, 2 };
	array.resize(5); // configura el tamaño a  5

	std::cout << "El tamaño es: " << array.size() << '\n';

	for (int i : array)
		std::cout << i << ' ';

	std::cout << '\n';

	return 0;
}


#include <vector>
#include <iostream>


int main()
{
	setlocale(LC_ALL, "es_ES.UTF-8");
	std::vector array{ 0, 1, 2, 3, 4 };
	array.resize(3); // configura tamaño a 3

	std::cout << "El tamaño es: " << array.size() << '\n';

	for (int i : array)
		std::cout << i << ' ';

	std::cout << '\n';

	return 0;
}
#endif


#include <iostream>
#include <vector>
#include <conio.h>


int main()
{
	setlocale(LC_ALL, "es_ES.UTF-8");
	// Usando inicialización directa, podemos crear un vector con 5 elementos,
	// cada elemento es un 0. Si usamos inicializción entre llaves (uniforme), 
	// el vector tendría un elemento de valor 5.
	std::vector<int> array(5);
	std::vector<int> array2{ 5 };

	std::cout << "El tamaño de array es: " << array.size() << '\n';
	std::cout << "El tamaño de array2 es:" << array2.size() << '\n';


	for (int i : array)
		std::cout << i << ' ';

	std::cout << '\n';

	for (int j : array2)
		std::cout << j << ' ';
	std::cout << '\n';


	_Check_return_ _getch();
	return 0;
}
