﻿
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





#include <iostream>

int main()
{
    auto a = []() {}; // define un lambda sin capturas, ni parámetros, y sin tipo de retorno

    std::cout << a;



    return 0;
}




#include <algorithm>
#include <array>
#include <iostream>
#include <string_view>

int main()
{
    constexpr std::array<std::string_view, 4> arr{ "amarillo", "naranja", "verde", "rojo" };

    // Definimos la función justo donde la usamos.
    const auto encontrado{ std::find_if(arr.begin(), arr.end(),
                             [](std::string_view str) // esta es nuestra lambda, sin cláusula de captura
                             {
                               return (str.find("ver") != std::string_view::npos);
                             }) };

    if (encontrado == arr.end())
    {
        std::cout << "No se encontró ver\n";
    }
    else
    {
        std::cout << "Encontrado en:  " << *encontrado << '\n';
    }

    return 0;
}





#include <vector>
#include <iostream>
#include <algorithm>
int main()
{

    std::vector <int> array{ 4,6,8,10,12 };


    // Confuso: tenemos que leer el lambda para entender lo que pasa.
// illustrate all_of
    if (std::all_of(array.begin(), array.end(), [](int i) { return i % 2 == 0; }))
    {
        std::cout << "Todos los enteros son pares\n";
    }
    else
    {
        std::cout << "No todos los enteros son pares\n";

    }
}





#include <vector>
#include <iostream>
#include <algorithm>
int main()
{

    // Mejor: En su lugar, podemos almacenar la lambda en una variable con nombre y pasarla a la fúnción.
    auto esPar{
      [](int i)
      {
        return ((i % 2) == 0);
      }
    };

    std::vector <int> array{ 4,6,8,10,12 };

    if (std::all_of(array.begin(), array.end(), esPar))
    {
        std::cout << "Todos los enteros son pares\n";
    }
    else
    {
        std::cout << "No todos los enteros son pares\n";

    }
}





#include <functional>
#include <iostream>
#include <conio.h>

int main()
{
    // Un puntero de función regular. Sólo funciona si la cláusula de captura está vacía.
    double (*addNumeros1)(double, double) {
        [](double a, double b) {
            return (a + b);
            }
    };

    double a1 = addNumeros1(1, 2);

    // Usando std::function. La lambda podría tener una cláusula de captura no vacía (próximo VT).
    std::function addNumeros2{ // nota: pre-C++17, usa std::function<double(double, double)> en su lugar
      [](double a, double b) {
        return (a + b);
      }
    };

    double a2 = addNumeros2(3, 4);

    // Usando auto. Almacena lambda con su tipo real.
    auto addNumeros3{
      [](double a, double b) {
        return (a + b);
      }
    };

    auto a3 = addNumeros3(5, 6);

    std::cout << a1 << '\n';
    std::cout << a2 << '\n';
    std::cout << a3 << '\n';

    _Check_return_ _getch();
    return 0;
}




#include <algorithm>
#include <array>
#include <iostream>
#include <string_view>
#include <conio.h>

int main()
{
    constexpr std::array<std::string_view, 4> arr{ "amarillo", "naranja", "verde", "rojo" };

    // Definimos la función justo donde la usamos.
    const auto encontrado{ std::find_if(arr.begin(), arr.end(),
                             [](std::string_view str) // esta es nuestra lambda, sin cláusula de captura
                             {
                               return (str.find("ver") != std::string_view::npos);
                             }) };

    if (encontrado == arr.end())
    {
        std::cout << "No se encontró ver\n";
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
#include <string>
#include <conio.h>

int main()
{
    std::array<std::string_view, 4> arr{ "amarillo", "naranja", "verde", "rojo" };

    // Pedir al usuario qué buscar.
    std::cout << "buscar por: ";

    std::string buscar{};
    std::cin >> buscar;

    auto encontrado{ std::find_if(arr.begin(), arr.end(), [](std::string_view str) {
        // Buscar por @buscar en lugar de por "ver".
        return (str.find(buscar) != std::string_view::npos); // Error: buscar no accesibe en este alcance
      }) };

    if (encontrado == arr.end())
    {
        std::cout << "No encontrado\n";
    }
    else
    {
        std::cout << "Encontrado " << *encontrado << '\n';
    }

    _Check_return_ _getch();
    return 0;
}





#include <algorithm>
#include <array>
#include <iostream>
#include <string_view>
#include <string>
#include <conio.h>

int main()
{
    std::array<std::string_view, 4> arr{ "amarillo", "naranja", "verde", "rojo" };

    // Pedir al usuario qué buscar.
    std::cout << "buscar por: ";

    std::string buscar{};
    std::cin >> buscar;

    auto encontrado{ std::find_if(arr.begin(), arr.end(), [buscar](std::string_view str) {
        // Buscar por @buscar en lugar de por "ver".
        return (str.find(buscar) != std::string_view::npos); // Error: buscar no accesibe en este alcance
      }) };

    if (encontrado == arr.end())
    {
        std::cout << "No encontrado\n";
    }
    else
    {
        std::cout << "Encontrado " << *encontrado << '\n';
    }

    _Check_return_ _getch();
    return 0;
}





#include <iostream>
#include <conio.h>

int main()
{
    int balas{ 10 };

    // Define una lambda y la  almacena en una variable llamada "disparar".
    auto disparar{
      [balas]() {
            // Ilegal, balas fue capturada como un copia const.
            --balas;

            std::cout << "bang, quedan " << balas << " disparos.\n";
          }
    };

    // Llamar a la lambda
    disparar();

    std::cout << "quedan" << balas << " disparos\n";

    _Check_return_ _getch();
    return 0;
}





#include <iostream>
#include <conio.h>

int main()
{
    int balas{ 10 };

    auto disparar{
        // Añadimos a la definición de la lambda "mutable" después de paréntesis parámetros.
        [balas]() mutable {
            // Ahora ya podemos modificar balas (pero modificará el clon, no aceptará al original)
            --balas;

            std::cout << "Bang, quedan " << balas << " disparos.\n";
          }
    };

    disparar();
    disparar();

    std::cout << "quedan " << balas << " disparos\n";

    _Check_return_ _getch();
    return 0;
}



#include <iostream>
#include <conio.h>

int main()
{
    int balas{ 10 };

    auto disparar{
        // Ya no necesitamos mutable
        [&balas]() { // &balas significa que balas es capturado por referencia
            // Cambios en balas afectarán también al balas original
            --balas;

            std::cout << "Bang, quedan " << balas << " disparos.\n";
          }
    };

    disparar();

    std::cout << "Quedan " << balas << " disparos\n";

    _Check_return_ _getch();
    return 0;
}





#include <algorithm>
#include <array>
#include <iostream>
#include <string>
#include <conio.h>

struct Coche
{
    std::string marca{};
    std::string modelo{};
};

int main()
{
    std::array<Coche, 3> coches{ { { "Seat", "Arona" },
                               { "Renault", "Arkana" },
                               { "Honda", "jazz" } } };

    int comparaciones{ 0 };

    std::sort(coches.begin(), coches.end(),
        // Captura @comparaciones por referencia.
        [&comparaciones](const auto& a, const auto& b) {
            // Al capturar comparaciones por referencia. Podemos modificarlo sin "mutable".
            ++comparaciones;

            // Ordenamos los coches por su marca.
            return (a.marca < b.marca);
        });

    std::cout << "Comparaciones: " << comparaciones << '\n';

    for (const auto& coche : coches)
    {
        std::cout << coche.marca << ' ' << coche.modelo << '\n';
    }

    _Check_return_ _getch();
    return 0;
}



#include <vector>
#include <conio.h>

int main()
{
    int salud{ 33 };
    int armadura{ 100 };
    std::vector<int> enemigos{};

    // Captura salud y armadura por valor, y enemigos por referencia.
    [salud, armadura, &enemigos]() {};

    _Check_return_ _getch();
    return 0;
}





#include <array>
#include <iostream>
#include <conio.h>

int main()
{
    std::array areas{ 100, 25, 121, 40, 56 };

    int ancho{};
    int alto{};

    std::cout << "Escribe ancho y alto: ";
    std::cin >> ancho >> alto;

    auto encontrado{ std::find_if(areas.begin(), areas.end(),
                             [alto, &ancho](int conocerArea) { // capturará alto por valor y ancho por referencia
                               return (ancho * alto == conocerArea); // porque se mencionan aquí
                             }) };

    if (encontrado == areas.end())
    {
        std::cout << "No conozco esta area :(\n";
    }
    else
    {
        std::cout << "Area encontrada :)\n";
    }

    _Check_return_ _getch();
    return 0;
}


