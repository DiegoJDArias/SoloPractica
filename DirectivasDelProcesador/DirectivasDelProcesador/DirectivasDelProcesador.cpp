// Author Diego J D Arias

#include "Cuadrado.h"
#include "Geometria.h"
#include <iostream>
#include <conio.h>


extern const int externa;
extern int external;
void imprimir();
std::string nombre{ "Svetlana" };


namespace Diego::Arias //se puede usar apartir de C++17. 
{
    int sumar(int x, int y)
    {
        return x + y;
    }
}

int main()
{

   std::cout << "El valor de la Funcion: " << obtenerLadosCuad() << '\n';
   std::cout << "Valor de G: " << g << '\n';
   std::cout << "Valor de const " << externa << '\n';
   std::cout << "Valor de constexpr " << external << '\n';
   imprimir();
   std::cout << "El nombre tomado es: " << nombre << '\n';
   std::cout << "Usamos nuesto namespace propios: " << die::e << '\n';
   std::cout << "Usamos nuesto namespace propios: " << die::pi << '\n';
   std::cout << "Funcion en Namespace anidados personales: " << Diego::Arias::sumar(21, 45) << '\n';
   std::cout << "La direccion de mi casa es, Cura Brochero: " << direccion << '\n';
   std::cout << "El numero de documento es: " << dni << '\n';
   
   
    _Check_return_ _getch();

    return 0;
}
