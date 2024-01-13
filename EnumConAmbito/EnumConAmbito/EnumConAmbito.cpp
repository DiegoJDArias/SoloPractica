#include <iostream>

enum class Color {
    Rojo,
    Verde,
    Azul
};

int main() {
    Color color = Color::Rojo;

    switch (color) {
        case Color::Rojo:
            std::cout << "El color es Rojo." << std::endl;
            break;
        case Color::Verde:
            std::cout << "El color es Verde." << std::endl;
            break;
        case Color::Azul:
            std::cout << "El color es Azul." << std::endl;
            break;
    }

    return 0;
}

/* En C++, el alcance de un enum se refiere a la visibilidad de los enumeradores (los valores) fuera del enum en sí mismo.
Hay dos formas de definir un enum en C++: con y sin alcance (o ámbito). Desde C++11, se introdujo la capacidad de asignar
un alcance (o ámbito) a un enum, lo que significa que los enumeradores están encapsulados dentro del enum y no contaminan el espacio de nombres circundante.
Ejemplo de enum con alcance: En este caso, los enumeradores están dentro del ámbito de enum class Color, y necesitas usar
el operador de ámbito :: para acceder a ellos. Esto ayuda a evitar conflictos de nombres con otros elementos del mismo espacio de nombres.

En general, se recomienda el uso de enum class con ámbito debido a que proporciona una mejor encapsulación y reduce la posibilidad de conflictos de nombres. */
