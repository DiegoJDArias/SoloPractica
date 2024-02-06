
#include <iostream>

class Rectangulo
{
private:
    double m_largo{ 1.0 }; // m_largo tiene un valor predeterminado de 1.0
    double m_ancho{ 1.0 }; // m_ancho tiene un valor predeterminado de 1.0

public:
    void imprimir()
    {
        std::cout << "largo: " << m_largo << ", ancho: " << m_ancho << '\n';
    }
};


int main()
{
    Rectangulo x{}; // x.m_largo = 1.0, x.m_ancho = 1.0
    x.imprimir();

    return 0;
}


#include <iostream>

class Rectangulo
{
private:
    double m_largo{ 1.0 };
    double m_ancho{ 1.0 };

public:

    // nota: No se provee un constructor predeterminado en este programa

    Rectangulo(double largo, double ancho)
        : m_largo{ largo }, m_ancho{ ancho }
    {
        // m_largo and m_ancho son inicializados por el constructor (los valores predeterminados no son usados)
    }

    void imprimir()
    {
        std::cout << "largo: " << m_largo << ", ancho: " << m_ancho << '\n';
    }

};


int main()
{
    Rectangulo x{}; // no compilará, porque no existe un constructor predeterminado, 
    //incluso aunque los miembros tengan valores de inicialización predeterminados

    return 0;
}



#include <iostream>

class Rectangulo
{
private:
    double m_largo{ 1.0 };
    double m_ancho{ 1.0 };

public:

    // nota: Ahora sí se activa el Constructor implícito de la Clase

    Rectangulo() = default;

    Rectangulo(double largo, double ancho)
        : m_largo{ largo }, m_ancho{ ancho }
    {
        // m_largo and m_ancho son inicializados por el constructor (los valores predeterminados no son usados)
    }

    void imprimir()
    {
        std::cout << "largo: " << m_largo << ", ancho: " << m_ancho << '\n';
    }

};


int main()
{
    Rectangulo x{}; // Se instasncia de modo correcto, porque se crea Constructor implícito.
    x.imprimir();

    return 0;
}


#include <iostream>

class Rectangulo
{
private:
    double m_largo{ 1.0 };
    double m_ancho{ 1.0 };

public:


    Rectangulo()
    {
        // m_largo and m_ancho son inicializados con los valores predeterminados
    }
    Rectangulo(double largo, double ancho)
        : m_largo{ largo }, m_ancho{ ancho }
    {
        // m_largo y m_ancho son inicializados por el constructor (los valores predeterminados no son usados)
    }

    Rectangulo(double largo)
        : m_largo{ largo }
    {
        // m_largo es inicializado por el constructor.
        // m_ancho usa el valor predeterminado (1.0).
    }

    void imprimir()
    {
        std::cout << "largo: " << m_largo << ", ancho: " << m_ancho << '\n';
    }

};


int main()
{
    Rectangulo x{ 2.0, 3.0 };
    x.imprimir();
    Rectangulo y{ 4.0 };
    y.imprimir();
    Rectangulo z{};
    z.imprimir();

    return 0;
}


#include <iostream>

class Rectangulo
{
private:
    double m_largo(1.0); //error por usar inicialización directa
    double m_ancho = 1.0; // si podemos usar inicialización por copia

public:


    Rectangulo()
    {
        // m_largo and m_ancho son inicializados con los valores predeterminados
    }
    Rectangulo(double largo, double ancho)
        : m_largo{ largo }, m_ancho{ ancho }
    {
        // m_largo y m_ancho son inicializados por el constructor (los valores predeterminados no son usados)
    }

    Rectangulo(double largo)
        : m_largo{ largo }
    {
        // m_largo es inicializado por el constructor.
        // m_ancho usa el valor predeterminado (1.0).
    }

    void imprimir()
    {
        std::cout << "largo: " << m_largo << ", ancho: " << m_ancho << '\n';
    }

};


int main()
{
    Rectangulo x{ 2.0, 3.0 };
    x.imprimir();
    Rectangulo y{ 4.0 };
    y.imprimir();
    Rectangulo z{};
    z.imprimir();

    return 0;
}



#include <string>
#include <iostream>


class Pelota
{
private:
    std::string m_color{};
    double m_radio{};

public:
    // constructor predeterminado sin parámetros
    Pelota()
    {
        m_color = "negro";
        m_radio = 10.0;
    }

    // Constructor con solo parámetro color (radio usará valor predeterminado)
    Pelota(const std::string& color)
    {
        m_color = color;
        m_radio = 10.0;
    }

    // Constructor solo con parámetro radio (color usará valor predeterminado)
    Pelota(double radio)
    {
        m_color = "negro";
        m_radio = radio;
    }

    // Constructor con parámetros color y radio
    Pelota(const std::string& color, double radio)
    {
        m_color = color;
        m_radio = radio;
    }

    void imprimir()
    {
        std::cout << "color: " << m_color << ", radio: " << m_radio << '\n';
    }
};


int main()
{
    Pelota def;
    def.imprimir();

    Pelota azul{ "azul" };
    azul.imprimir();

    Pelota veinte{ 20.0 };
    veinte.imprimir();

    Pelota azulVeinte{ "azul", 20.0 };
    azulVeinte.imprimir();

    return 0;
}



//SOLUCIÓN MODIFICACIÓN CÓDIGO
#include <string>
#include <iostream>


class Pelota
{
private:
    std::string m_color{ "azul" };
    double m_radio{ 20 };

public:
    // constructor predeterminado sin parámetros
    Pelota() : m_color{ "negro" }, m_radio{ 10 } {}

    // Constructor con solo parámetro color (radio usará valor predeterminado)
    Pelota(const std::string& color) : m_color{ color }, m_radio{ 10 } {}

    // Constructor solo con parámetro radio (color usará valor predeterminado)
    Pelota(double radio) : m_color{ "negro" }, m_radio{ radio } {}

    // Constructor con parámetros color y radio
    Pelota(const std::string& color, double radio) : m_color{ color }, m_radio{ radio } {}

    void imprimir()
    {
        std::cout << "color: " << m_color << ", radio: " << m_radio << '\n';
    }
};


int main()
{
    Pelota def;
    def.imprimir();

    Pelota azul{ "azul" };
    azul.imprimir();

    Pelota veinte{ 20.0 };
    veinte.imprimir();

    Pelota azulVeinte{ "azul", 20.0 };
    azulVeinte.imprimir();

    return 0;
}



class Cualquiera
{
public:
    Cualquiera()
    {
        // código para hacer A
    }

    Cualquiera(int valor)
    {
        // código para hacer A
        // código para hacer B
    }
};



class Cualquiera
{
public:
    Cualquiera()
    {
        // Código para hacer A
    }

    Cualquiera(int valor)
    {
        Cualquiera(); // Usar el otro constructor para hacer A no funciona
        // código para hacer B
    }
};



class Cualquiera
{
private:

public:
    Cualquiera()
    {
        // Código para hacer A
    }

    Cualquiera(int valor) : Cualquiera{} // usamos el constructor predeterminado Cualquiera() para hacer A
    {
        // código para hacer B
    }

};




#include <string>
#include <iostream>


class Alumno
{
private:
    int m_id{};
    std::string m_nombre{};

public:
    Alumno(int id = 0, const std::string& nombre = "") :
        m_id{ id }, m_nombre{ nombre }
    {
        std::cout << "Alumno " << m_nombre << " creado.\n";
    }

    // Usar un constructor delegado para minimizar código redundante
    Alumno(const std::string& nombre) : Alumno{ 0, nombre }
    { }
};



class Cualquiera
{
private:
    const int m_valor{ 0 };

public:
    Cualquiera()
    {
        // Código para hacer alguna tarea común como abrir un archivo
    }

    Cualquiera(int valor) : m_valor{ valor } // debemos inicializar m_valor porque es const
    {
        //¿Cómo obtenemos el código de la inicialización común en Cualquiera()?
    }

};



#include <iostream>

class Cualquiera
{
private:
    const int m_valor{ 0 };

    void setup() // setup es private así que solo puede ser usada por nuestros constructors
    {
        // Código para hacer alguna tarea común como abrir un archivo
        std::cout << "Configuración inicial...\n";
    }

public:
    Cualquiera()
    {
        setup();
    }

    Cualquiera(int valor) : m_valor{ valor } // debemos inicializar m_valor porque es const
    {
        setup();
    }

};


int main()
{
    setlocale(LC_ALL, "es_ES.UTF-8");
    Cualquiera a;
    Cualquiera b{ 5 };

    return 0;
}



#include <iostream>
class Cualquiera
{
private:
    int m_a{ 1 };
    int m_b{ 2 };

public:
    Cualquiera()
    {
    }

    Cualquiera(int a, int b)
        : m_a{ a }, m_b{ b }
    {
    }

    void imprimir()
    {
        std::cout << m_a << ' ' << m_b << '\n';
    }

    void reset()
    {
        m_a = 1;
        m_b = 2;
    }
};


int main()
{
    Cualquiera a{ 3, 4 };

    a.imprimir();
    a.reset();
    a.imprimir();

    return 0;
}








#include <iostream>

class Cualquiera
{
private:
    int m_a{ 5 };
    int m_b{ 6 };


public:
    Cualquiera()
    {
    }

    Cualquiera(int a, int b)
        : m_a{ a }, m_b{ b }
    {
    }

    void imprimir()
    {
        std::cout << m_a << ' ' << m_b << '\n';
    }

    void reset()
    {
        *this = Cualquiera{ }; // crea nuevo objeto Cualquiera, luego usa asignación para sobrescribir nuestro objeto implícito
    }
};

int main()
{
    Cualquiera a{ 1, 2 };

    a.imprimir();
    a.reset();
    a.imprimir();

    return 0;
}




#if 0

#endif
#endif

#if 0

#include <iostream>
#include <cassert>
#include <cstddef>

class IntArray
{
private:
    int* m_array{};
    int m_tamanho{};

public:
    IntArray(int tamanho) // constructor
    {
        assert(tamanho > 0);

        m_array = new int[static_cast<std::size_t>(tamanho)] {};
        m_tamanho = tamanho;
    }

    ~IntArray() // destructor
    {
        // Dinámicamente delete el array que asignamos antes
        delete[] m_array;
    }

    void setValor(int indice, int valor) { m_array[indice] = valor; }
    int getValor(int indice) { return m_array[indice]; }
    int getTamanho() { return m_tamanho; }
};

int main()
{
    IntArray ar(10); // asigna 10 integers
    for (int contador{ 0 }; contador < ar.getTamanho(); ++contador)
        ar.setValor(contador, contador + 1);

    std::cout << "El valor del elemento 3 es: " << ar.getValor(3) << '\n';

    return 0;
} // ar se destruye aquí, así que la función destructor ~IntArray() es llamada aquí

#endif
