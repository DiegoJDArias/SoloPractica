
#include <iostream>
#include <string>


class Estudiante
{
public:
    std::string m_nombre{};
    int m_id{};
    double m_nota{};

    // Imprime la información del empleado
    void imprimir()
    {
        std::cout << "Nombre: " << m_nombre <<
            "  Id: " << m_id <<
            "  Nota: " << m_nota << '\n';
    }
};


int main()
{
    // Instanciamos dos estudiantes
    Estudiante juan{ "Juan", 1, 7.4 };
    Estudiante ana{ "Ana", 2, 8.7 };

    // Imprime la información de los estudiantes
    juan.imprimir();
    ana.imprimir();

    return 0;
}



#include <iostream>

int funcionB()
{
    funcionA();
}

int funcionA()
{
    funcionB();
}



int main()
{
    funcionA();


}



#include <iostream>
class Comprobar
{
public:
    void funcionA()
    {
        std::cout << "Estamos en funcionA que llama a funcionB" << std::endl;
        funcionB(); //correcto, aunque funciónB aún no esté definida
    }
    void funcionB()
    {
        std::cout << "Estamos en funcionB que llama a funcionA" << std::endl;
        funcionA();
    }
};

int main()
{
    //Se ejecutárán hasta que se llene la pila.
    Comprobar c;
    c.funcionA();
    c.funcionB();


}





#include <iostream>
#include <vector>


class Calculadora
{
public:
    using tipo_numero = int; // este es un tipo alias anidado

    std::vector<tipo_numero> m_historiaResultado{};

    tipo_numero sumar(tipo_numero a, tipo_numero b)
    {
        auto resultado{ a + b };

        m_historiaResultado.push_back(resultado);

        return resultado;
    }
};


int main()
{
    Calculadora calculadora;

    std::cout << calculadora.sumar(3, 4) << '\n'; // 7
    std::cout << calculadora.sumar(99, 24) << '\n'; // 123

    for (Calculadora::tipo_numero resultado : calculadora.m_historiaResultado)
    {
        std::cout << resultado << '\n';
    }

    return 0;
}




#include <iostream>
#include <vector>

class Calculadora
{
public:
    using tipo_numero = double; // este es un tipo alias anidado

    std::vector<tipo_numero> m_historiaResultado{};

    tipo_numero sumar(tipo_numero a, tipo_numero b)
    {
        auto resultado{ a + b };

        m_historiaResultado.push_back(resultado);

        return resultado;
    }
};

int main()
{
    Calculadora calculadora;

    std::cout << calculadora.sumar(3.3, 4.5) << '\n'; // 7
    std::cout << calculadora.sumar(99.7, 24.2) << '\n'; // 123

    for (Calculadora::tipo_numero resultado : calculadora.m_historiaResultado)
    {
        std::cout << resultado << '\n';
    }

    return 0;
}



#include <string> // for std::string
#include <vector> // for std::vector
#include <utility> // for std::pair

using listapares_t = std::vector<std::pair<std::string, int>>; // hacemos listapares_t un alias 
//para este tipo enrevesado




#include <string>
#include <array>
#include <vector>
#include <iostream>

int main()
{
    std::string s{ "Hola mundo" }; // instancia un objeto de la clase string
    std::array<int, 3> a{ 1, 2, 3 }; // instancia un objeto de la clase array
    std::vector<double> v{ 1.1, 2.2, 3.3 }; // instancia un objeto de la clase vector

    std::cout << "longitud: " << s.length() << '\n'; // llama a una función miembro



    return 0;
}





struct StructFecha // miembros son públicos por defecto
{
    int dia{}; // público por defecto, puede acceder cualquiera
    int mes{}; // público por defecto, puede acceder cualquiera
    int anho{}; // público por defecto, puede acceder cualquiera
};

int main()
{
    StructFecha fecha;
    fecha.dia = 10;
    fecha.mes = 03;
    fecha.anho = 2022;

    return 0;
}





class ClaseFecha // miembros son privados por defecto
{
    int m_dia{}; // privado por defecto, solo accesible a otros miembros
    int m_mes{}; // privado por defecto, solo accesible a otros miembros
    int m_anho{};// privado por defecto, solo accesible a otros miembros
};

int main()
{
    ClaseFecha fecha;
    fecha.m_dia = 10; // error
    fecha.m_mes = 03; // error
    fecha.m_anho = 2022; // error

    return 0;
}




#include <iostream>

class ClaseFecha // miembros son privados por defecto
{
public: // convertirmos los miembros en públicos con "public:"
    int m_dia{}; // privado por defecto, solo accesible a otros miembros
    int m_mes{}; // privado por defecto, solo accesible a otros miembros
    int m_anho{};// privado por defecto, solo accesible a otros miembros
};

int main()
{
    ClaseFecha fecha;
    fecha.m_dia = 10; // correcto
    fecha.m_mes = 03; // correcto
    fecha.m_anho = 2022; // correcto

    return 0;
}





#include <iostream>

class ClaseFecha // miembros privados por defecto
{
    int m_dia{};  // privado por defecto, solo accesible a otros miembros
    int m_mes{};  // privado por defecto, solo accesible a otros miembros
    int m_anho{}; // privado por defecto, solo accesible a otros miembros

public:
    void setFecha(int dia, int mes, int anho) // público, accesible desde fuera de la Clase
    {
        // setFecha() puede acceder a los miembros de la clase porque también es miembro
        m_dia = dia;
        m_mes = mes;
        m_anho = anho;
    }

    void imprimir() // público, acceso desde fuera de la clase
    {
        std::cout << m_dia << '/' << m_mes << '/' << m_anho;
    }
};

int main()
{
    ClaseFecha fecha;
    fecha.setFecha(10, 03, 2022); // correcto, porque setFecha() es público
    fecha.imprimir(); // correcto, porque imprimir() es público
    std::cout << '\n';

    return 0;
}




#include <iostream>
#include <conio.h>

class ClaseFecha // miembros son privados por defecto
{
    int m_dia{};  // privado por defecto, solo accesible a otros miembros
    int m_mes{};  // privado por defecto, solo accesible a otros miembros
    int m_anho{}; // privado por defecto, solo accesible a otros miembros

public:
    void setFecha(int dia, int mes, int anho) // público, accesible desde fuera de la Clase
    {
        // setFecha() puede acceder a los miembros de la clase porque también es miembro
        m_dia = dia;
        m_mes = mes;
        m_anho = anho;
    }

    void imprimir() // público, acceso desde fuera de la clase
    {
        std::cout << m_dia << '/' << m_mes << '/' << m_anho;
    }

    // Añadimos esta nueva función
    void copiarDe(const ClaseFecha& d)
    {
        // Observa que podemos acceder a los miembros privados de d directamente
        m_dia = d.m_dia;
        m_mes = d.m_mes;
        m_anho = d.m_anho;
    }
};


int main()
{
    ClaseFecha fecha;
    fecha.setFecha(10, 03, 2022); // correcto, porque setFecha() es público

    ClaseFecha copiar{};
    copiar.copiarDe(fecha); // correcto, porque copiarDe() es público
    copiar.imprimir();
    std::cout << '\n';

    _Check_return_ _getch();
    return 0;
}




#include <iostream>

class Simple
{
private:
    int m_x{ 3 };
    int m_y{ 4 };
};


int main()
{
    Simple simple{ };
    std::cout << simple.m_x << " " << simple.m_y << std::endl;

    return 0;
}




#include <conio.h>

class Simple
{
public:
    int m_x{ 3 };
    int m_y{ 4 };
};

int main()
{
    Simple simple{ 6, 7 }; // Inicialización de lista

    _Check_return_ _getch();
    return 0;
}



#include <iostream>

class Fraccion
{
private:
    int m_numerador{};
    int m_denominador{};

public:
    Fraccion() // constructor predeterminado
    {
        m_numerador = 0;
        m_denominador = 1;
    }

    int getNumerador() { return m_numerador; }
    int getDenominador() { return m_denominador; }
    double getValor() { return static_cast<double>(m_numerador) / m_denominador; }
};

int main()
{
    Fraccion frac{}; // Llama al constructor predeterminado de Fraccion()
    std::cout << frac.getNumerador() << '/' << frac.getDenominador() << '\n';

    return 0;
}



#include <cassert>

class Fraccion
{
private:
    int m_numerador{};
    int m_denominador{};

public:
    Fraccion() // constructor predeterminado
    {
        m_numerador = 0;
        m_denominador = 1;
    }

    // Constructor con dos parámetros, uno de los parámetros tiene un valor predeterminado
    Fraccion(int numerador, int denominador = 1)
    {
        assert(denominador != 0); // Si el denominador es 0, lanza una excepción.
        m_numerador = numerador;
        m_denominador = denominador;
    }

    int getNumerador() { return m_numerador; }
    int getDenominador() { return m_denominador; }
    double getValor() { return static_cast<double>(m_numerador) / m_denominador; }
};

int main() {
    Fraccion cincoTercios{ 5, 3 }; // Inicialización de Lista, llama a Fraccion(int, int)
    Fraccion tresCuartos(3, 4); // Inicialización directa, también llama a Fraccion(int, int)
    Fraccion seis{ 6 }; // llama a Fraccion(int, int), segundo parámetro usa el valor predeterminado de 1


}




#include <iostream>
class Fecha
{
private:
    int m_dia{ 1 };
    int m_mes{ 1 };
    int m_anho{ 2001 };

    // Sin constructors, el compilador 
    // generará uno implícito "Fecha::Fecha( )"
};

int main()
{
    Fecha fecha{}; // Llama al constructor implícito de Fecha()
    std::cout << fecha.m_dia; // no puede acceder a miembros privados


    return 0;
}




class Fecha
{
private:
    int m_dia{ 1 };
    int m_mes{ 1 };
    int m_anho{ 2001 };

public:
    Fecha(int dia, int mes, int anho) // constructor normal no predeterminado
    {
        m_dia = dia;
        m_mes = mes;
        m_anho = anho;
    }

    // No se provee un constructor implícito porque tenemos un constructor propio
};

int main()
{
    Fecha fecha{}; // error: No puede instanciar objeto porque el constructor predeterminado no existe
    Fecha nuevoSiglo{ 1, 1, 2001 }; // nuevoSiglo se inicializa a 1, enero, 2001

    return 0;
}




class Fecha
{
private:
    int m_dia{ 1 };
    int m_mes{ 1 };
    int m_anho{ 2001 };

public:
    // Le dice al compilador que cree un constructor predeterminado, incluso
    // aunque haya otros constructos provistos por el usuario.
    Fecha() = default;

    Fecha(int dia, int mes, int anho) // constructor normal no predeterminado
    {
        m_dia = dia;
        m_mes = mes;
        m_anho = anho;
    }
};

int main()
{
    Fecha fecha{}; // fecha es inicializado a 1, Enero, 2001
    Fecha hoy{ 11, 04, 2022 }; // hoy es inicializado a 11, abril, 2022

    return 0;
}




#include <iostream>

class Interna
{
public:
    Interna() { std::cout << "Interna\n"; }
};

class Externa
{
private:
    Interna m_interna; // Externa contiene a Interna como una variable miembro

public:
    Externa() { std::cout << "Externa\n"; }
};


int main()
{
    Externa externa;

    return 0;
}





class Cualquiera
{
private:
    // Aquí es donde inicializamos las variables miembro "por valor"
    int m_valor1{};
    double m_valor2{};
    char m_valor3{};

public:
    Cualquiera()
    {
        // Estas son todas asignaciones, no inicializaciones
        m_valor1 = 1;
        m_valor2 = 2.2;
        m_valor3 = 'c';
    }
};


int main()
{
    int m_valor1{};
    double m_valor2{};
    char m_valor3{};

    m_valor1 = 1;
    m_valor2 = 2.2;
    m_valor3 = 'c';
}


class Cualquiera
{
private:
    const int m_valor;

public:
    Cualquiera()
    {
        m_valor = 1; // error: variables const no pueden ser asignadas
    }
};



const int m_valor; // error: variables const debe inicializarse con un valor
m_valor = 5; //  error: variables const no pueden ser asignadas




int valor1 = 1; // inicialización por copia
double value2(2.2); // inicialización directa
char value3{ 'c' }; // inicialización uniforme


class Cualquiera
{
private:
    int m_valor1{};
    double m_valor2{};
    char m_valor3{};

public:
    Cualquiera()
    {
        // Todas son asignaciones, no inicializaciones
        m_valor1 = 1;
        m_valor2 = 2.2;
        m_valor3 = 'c';
    }
};



#include <iostream>

class Cualquiera
{
private:
    int m_valor1{};
    double m_valor2{};
    char m_valor3{};

public:
    Cualquiera() : m_valor1{ 1 }, m_valor2{ 2.2 }, m_valor3{ 'c' } // Inicializa variables miembro
        //Cualquiera() : m_valor1( 1 ), m_valor2( 2.2 ), m_valor3( 'c' ) // Inicializa variables miembro
        //Cualquiera() : m_valor1= 1 , m_valor2 = 2.2 , m_valor3 = 'c'  // error


    {
        // No son necesarias las asignaciones aquí
    }

    void imprimir()
    {
        std::cout << "Cualquiera(" << m_valor1 << ", " << m_valor2 << ", " << m_valor3 << ")\n";
    }
};

int main()
{
    Cualquiera cualquiera{};
    cualquiera.imprimir();
    return 0;
}



#include <iostream>

class Cualquiera
{
private:
    int m_valor1{};
    double m_valor2{};
    char m_valor3{};

public:
    Cualquiera(int valor1, double valor2, char valor3 = 'a')
        : m_valor1{ valor1 }, m_valor2{ valor2 }, m_valor3{ valor3 } // inicialización directa de las variables miembro
    {
        // No es necesaria la asignación aquí
    }

    void imprimir()
    {
        std::cout << "Cualquiera(" << m_valor1 << ", " << m_valor2 << ", " << m_valor3 << ")\n";
    }

};

int main()
{
    Cualquiera cualquiera{ 3, 4.4 }; // valor1 = 3, valor2 = 4.4, valor3 usa valor predeterminado 'a'
    cualquiera.imprimir();
    return 0;
}





class Cualquiera
{
private:
    const int m_valor;

public:
    Cualquiera() : m_valor{ 3 } // inicializa variable miembro const
    {
    }
};






class Cualquiera
{
private:
    const int m_array[3];

};




class Cualquiera
{
private:
    const int m_array[3];

public:
    Cualquiera() : m_array{} // inicializa los elementos del array miembro a cero
    {
    }

};




class Cualquiera
{
private:
    const int m_array[3];

public:
    Cualquiera() : m_array{ 5, 3, 2 } // inicialización uniforme de los elementos del array miembro
    {
    }

};




#include <iostream>
#include <conio.h>


class A
{
public:
    A(int x = 0) { std::cout << "A " << x << '\n'; }
};

class B
{
private:
    A m_a{};
public:
    B(int y)
        : m_a{ y - 1 } // llama al constructor A(int) para inicializar miembro m_a 
    {
        std::cout << "B " << y << '\n';
    }
};


int main()
{
    B b{ 5 };

    _Check_return_ getch();
    return 0;
}





class Something
{
private:
    int m_value1{};
    double m_value2{};
    char m_value3{};

public:
    Something() : m_value1{ 1 }, m_value2{ 2.2 }, m_value3{ 'c' } // everything on one line
    {
    }
};

class Something
{
private:
    int m_value1;
    double m_value2;
    char m_value3;

public:
    Something(int value1, double value2, char value3 = 'c') // this line already has a lot of stuff on it
        : m_value1{ value1 }, m_value2{ value2 }, m_value3{ value3 } // so we can put everything indented on next line
    {
    }

};

class Something
{
private:
    int m_value1{};
    double m_value2{};
    char m_value3{};
    float m_value4{};

public:
    Something(int value1, double value2, char value3 = 'c', float value4 = 34.6f) // this line already has a lot of stuff on it
        : m_value1{ value1 } // one per line
        , m_value2{ value2 }
        , m_value3{ value3 }
        , m_value4{ value4 }
    {
    }

};



//@Author Diego J D Arias

#include "header/Persona.hpp"
#include <conio.h>


int main()
{
    Persona per1 = Persona("Diego J D Arias", 49);
    per1.informacion();

    per1.cambiarInfo("Svetlana Vladislavana Raxmanava", 45);
    per1.informacion();

    per1.cambiarEdad(46);
    per1.informacion();

    std::cout << "\nHola a todos" << std::endl;

    _Check_return_ _getch();
    return 0;
}
