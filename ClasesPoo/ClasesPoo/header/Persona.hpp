#pragma once

#ifndef PERSONA_HPP
#define PERSONA_HPP

#include <iostream>


class Persona
{
private:
    std::string nombre {};
    int edad {};

public:
    Persona(std::string, int);
    void informacion();
    void cambiarInfo(std::string, int);
    void cambiarEdad(int);
    void cambiarNombre(std::string);
};

#endif // PERSONA_HPP
