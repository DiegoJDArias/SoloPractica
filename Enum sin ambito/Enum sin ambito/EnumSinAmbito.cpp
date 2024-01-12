#include <iostream>

enum Color {
    Rojo,
    Verde,
    Azul
};

int main() {
    Color color { Verde };

    switch (color) {
        case Rojo:
            std::cout << "El color es Rojo." << std::endl;
            break;
        case Verde:
            std::cout << "El color es Verde." << std::endl;
            break;
        case Azul:
            std::cout << "El color es Azul." << std::endl;
            break;
    }

    return 0;
}

/*En C++, el alcance de un enum se refiere a la visibilidad de los enumeradores (los valores)
fuera del enum en sí mismo. Hay dos formas de definir un enum en C++: con y sin alcance (o ámbito).
Desde C++11, se introdujo la capacidad de asignar un alcance (o ámbito) a un enum, lo que significa
que los enumeradores están encapsulados dentro del enum y no contaminan el espacio de nombres circundante.

Ejemplo de enum sin alcance:
En este caso, los enumeradores Rojo, Verde y Azul están en el mismo espacio de nombres que main().
Esto significa que si hay otro elemento en el mismo espacio de nombres con el mismo nombre, podría haber conflictos. */
