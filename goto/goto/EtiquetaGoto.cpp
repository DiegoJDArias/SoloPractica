#include <iostream>
#include <cmath>


int main()
{
    double x{};

otraVez:
    std::cout << "Escribe un numero no negativo: \n";
    std::cin >> x;

    if (x < 0.0)
        goto otraVez;
    std::cout << "La raiz cuadrade de " << x << " es " << std::sqrt(x) << '\n';

    return 0;
}
