// Author Diego J D Arias

#include <string>
#include <iostream>

class Singleton {
private:
    // La instancia única de la clase
    static Singleton* instance;

    // Constructor privado para evitar la creación de instancias desde fuera de la clase
    Singleton() {}

public:
    // Método para obtener la instancia única de la clase
    static Singleton* getInstance() {
        if (instance == nullptr) {
            // Si la instancia aún no ha sido creada, la creamos
            instance = new Singleton();
        }
        return instance;
    }

    // Métodos de la instancia
    void showMessage() {
        std::cout << "Hola, soy la instancia única de Singleton." << std::endl;
    }
};

// Inicializamos la instancia como nullptr
Singleton* Singleton::instance{ nullptr };

int main() {
    // Obtenemos la instancia única
    Singleton* singletonInstance{ Singleton::getInstance() };

    // Utilizamos la instancia
    singletonInstance->showMessage();

    // Intentamos crear otra instancia (esto no debería ser posible)
    Singleton* anotherInstance{ Singleton::getInstance() };

    // Verificamos si las dos instancias son iguales
    if (singletonInstance == anotherInstance)
        std::cout << "Ambas instancias son iguales. ¡Se está utilizando el patrón Singleton correctamente!" << std::endl;
    else 
        std::cout << "Error: Se ha creado más de una instancia. El patrón Singleton no se está aplicando correctamente." << std::endl;


    return EXIT_SUCCESS;
}

