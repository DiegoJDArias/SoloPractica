#include <iostream>
#include <conio.h>


int main() {
    volatile int contador = 0;

    while (contador < 10) {
        // Al ser 'volatile', el compilador no realizará optimizaciones
        // que podrían asumir que el valor de 'contador' no cambia.
        std::cout << "Contador: " << contador << std::endl;
        // Podría haber una interrupción o evento externo que modifique 'contador'.
    }

    _Check_return_ _getch();
    return 0;
}

/* En C++, el identificador volatile se utiliza para indicar al compilador que una variable
puede cambiar su valor en cualquier momento sin que el código aparentemente lo modifique.
Esto se utiliza principalmente en situaciones donde una variable puede ser modificada por una
fuente externa que no está bajo el control del programa.

Cuando una variable es declarada como volatile, el compilador no realizará optimizaciones
que podrían asumir que el valor de la variable no cambiará sin ser modificado por el código
fuente en ejecución. Esto es útil en situaciones donde una variable puede ser modificada por
hardware externo, interrupciones, o en entornos de multiprocesamiento.

Ejemplo de uso de volatile:
En este ejemplo, la variable contador se declara como volatile porque podría ser modificada
por una fuente externa (por ejemplo, una interrupción) mientras el bucle está en ejecución.
Esto garantiza que el compilador no realice optimizaciones que asuman que el valor de contador
no cambia, ya que puede ser modificado fuera del flujo de control del programa principal. */
