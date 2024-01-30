
#include <algorithm>
#include <array>
#include <iostream>
#include <conio.h>

int main()
{
    std::array arr{ 13, 90, 99, 5, 40, 80 };

    std::cout << "Escribe un valor para buscar y uno para reemplazarlo: ";
    int buscar{};
    int sustituir{};
    std::cin >> buscar >> sustituir;

    // Validación entrada omitida

    // std::find  devuelve un iterador apuntando al elemento encontrado (o al final del contenedor)
    // lo almacenaremos en una variable, usando inferencia de tipo para deducir el tipo

    auto encontrado{ std::find(arr.begin(), arr.end(), buscar) };
    

    // Algoritmos que no encuentran lo que están buscando devuelven el iterador end.
    // podemos acceder a él usando la función miembro end().
    if (encontrado == arr.end())
    {
        std::cout << "No se ha encontrado " << buscar << '\n';
    }
    else
    {
        // Sobrescribir el elemento encontrado.
        *encontrado = sustituir;
    }

    for (int i : arr)
    {
        std::cout << i << ' ';
    }

    std::cout << '\n';

    _Check_return_ _getch();

    return 0;
}




#include <algorithm>
#include <array>
#include <iostream>
#include <string_view>
#include <conio.h>

// Nuestra función devolverá true si el elemento coincide
bool contieneVer(std::string_view str)
{
    // std::string_view::find devuelve std::string_view::npos si no encuentra
    // el substring. Si lo encuentra devuelve el índice donde está el substring
    // en str.
    return (str.find("ver") != std::string_view::npos);
}


int main()
{
    std::array <std::string_view, 4> arr{ "amarillo", "naranja", "verde", "rojo" };

    // Escanea nuestro array para ver si alguno de los elementos contiene el subtring "ver"
    auto encontrado{ std::find_if(arr.begin(), arr.end(), contieneVer) };

    if (encontrado == arr.end())
    {
        std::cout << "No se encontró ver \n";
    }
    else
    {
        std::cout << "Encontrado en:  " << *encontrado << '\n';
    }

    _Check_return_ _getch();

    return 0;
}




#include <algorithm>
#include <array>
#include <iostream>
#include <string_view>
#include <conio.h>


bool contieneVer(std::string_view str)
{
    return (str.find("ver") != std::string_view::npos);
}


int main()
{
    std::array<std::string_view, 5> arr{ "amarillo", "rojo", "verde menta", "verde oliva", "azul" };

    auto ver{ std::count_if(arr.begin(), arr.end(), contieneVer) };

    std::cout << "Contados " << ver << " ver\n";

    
    _Check_return_ _getch();
    return 0;
}




#include <algorithm>
#include <array>
#include <iostream>
#include <conio.h>

bool mayorque(int a, int b)
{
    // Ordena "a" antes de "b" si "a" es mayor que "b".
    return (a > b);
}

int main()
{
    std::array arr{ 13, 90, 99, 5, 40, 80 };

    // Pasamos mayorque a std::sort
    std::sort(arr.begin(), arr.end(), mayorque);


    for (int i : arr)
    {
        std::cout << i << ' ';
    }

    std::cout << '\n';

    std::cout << mayorque;

    _Check_return_ _getch();

    return 0;
}




#include <algorithm>
#include <array>
#include <iostream>
#include <conio.h>

int main()
{
    std::array arr{ 13, 90, 99, 5, 40, 80 };

    std::sort(arr.begin(), arr.end(), std::greater{}); // Usa el tipo greater de la librería estándar 


    for (int i : arr)
    {
        std::cout << i << ' ';
    }

    std::cout << '\n';

    _Check_return_ _getch();

    return 0;
}





#include <iostream>
#include <algorithm>
#include <array>
#include <conio.h>

int main() {

    std::array miArray{ 4, 6, 2, 10, 8 };
    std::sort(miArray.begin(), miArray.end()); // ordena acendente
    //std::sort(miArray.rbegin(), miArray.rend()); //ordena decendentemente

    for (int elemento : miArray)
        std::cout << elemento << ' ';

    std::cout << '\n';

    _Check_return_ _getch();
    return 0;
}

