#include <iostream>


struct Instituto
{
  struct Alumnos
  {
    std::string nombre{};
    int edad{};
  };
  int numeroAlumno{};
  Alumnos persona{};
};


struct Datos
{
    std::string nombre{ };
    int edad{ };
    int id{ };
};


int main() {

    Datos persona1, persona2;
    persona1.nombre = "J";
    persona2.nombre = "Diego";
    Datos persona3{"D"};
    
    std::cout << "Las tres personas registradas son: " << persona1.nombre << " " << persona2.nombre << " " << persona3.nombre << std::endl;
    const Datos persona4{ .nombre{"Arias"}, .id{777}}; // utilizamos la inicialización de estructuras con designadores de miembros. disponible en C99 y C++20.

    std::cout << "Ahora se ha agregado una nueva persona de nombre: " << persona4.nombre << " edad " << persona4.edad << " id: " << persona4.id << std::endl;


   Instituto per{2, {"Diego J D Arias", 21}};
   std::cout << per.persona.nombre << std::endl;

    return 0;
}
