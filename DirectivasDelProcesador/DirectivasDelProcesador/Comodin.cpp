#include <iostream>
#include "Cuadrado.h"
// Funciones y variables no constante, tienen vinculacion predeterminada externa
// Para convertirlas en interna se usa Static.
// Variables constantes tienen vinculacion predeterminada interna
// Para convertirla en externa se usa extern.

extern const int externa{ 999 };

int external{ 333 }; //Variables glob no constante hay que evitarla mientas se pueda. Mejor usar inline
static std::string nombre{ "Diego J D Arias" }; //static convierte a interna

void imprimir() { std::cout << "Funcion externa ahora imprime " << nombre << '\n'; std::cout << "El numero de documento es: " << dni << '\n';
}

