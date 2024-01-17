#include <iostream>


int main() {
	
    std::string nombres[]{ "juan", "beatriz", "carla", "bianca", "emilio" };
    constexpr int notas[]{ 84, 92 , 76, 81, 56 };
    int notaMax{};

    for (int i{}; auto nota : notas)
    {
        if (nota > notaMax)
        {
            std::cout << nombre[i] << "supera la mejor nota previa de " << notaMax << " por " << (nota - notaMax) << " puntos\n";
        }
        ++i;
    }
    std::cout << "La mejor nota final es " << notaMax << '\n';

    return 0;
}
