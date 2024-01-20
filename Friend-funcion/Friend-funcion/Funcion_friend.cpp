#include <iostream>

class MiClase {
private:
    int datoPrivado;

public:
    MiClase() : datoPrivado(0) {}

    // Declaración de función amiga
    friend void FuncionAmiga(MiClase&);

    void MostrarDatoPrivado() {
        std::cout << "Dato privado: " << datoPrivado << std::endl;
    }
};

// Definición de la función amiga
void FuncionAmiga(MiClase& objeto) {
    // Acceso a miembros privados de la clase
    objeto.datoPrivado = 42;
}

int main() {
    MiClase objeto;
    objeto.MostrarDatoPrivado();  // Muestra "Dato privado: 0"

    // Llamando a la función amiga
    FuncionAmiga(objeto);

    objeto.MostrarDatoPrivado();  // Muestra "Dato privado: 42"

    return 0;
}
