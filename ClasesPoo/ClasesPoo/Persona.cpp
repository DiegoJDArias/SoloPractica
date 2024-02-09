#include "header/Persona.hpp"


Persona::Persona(std::string nombre, int edad)
{
    this->nombre = nombre;
    this->edad = edad;
}

void Persona::informacion()
{
    std::cout << "El nombre registrado es: " << nombre << " Y su edad es: " << edad << " anios" << std::endl;
}

void Persona::cambiarInfo(std::string nombre, int edad)
{
    this->nombre = nombre;
    this->edad = edad;
}

void Persona::cambiarEdad(int edad)
{
    this->edad = edad;
}

void Persona::cambiarNombre(std::string nombre)
{
    this->nombre = nombre;
}
