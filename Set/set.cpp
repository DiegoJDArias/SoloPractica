#if 1
#include <set>
#include <iostream>

int main()
{
    std::set<int> numero;
    numero.insert(2);
    numero.insert(4);
    numero.insert(6);
    numero.insert(8);
    numero.insert(10);

    for (int i : numero)
    std::cout << "Los numeros guardados en el conjunto son: " << i << std::endl;

    // Devuelve la longitud de la secuencia más larga que el objeto puede controlar
    // en tiempo constante independientemente de la longitud de la secuencia controlada.

    std::set <int>::size_type i, e;
    i = numero.max_size(); 
    std::cout << "El valor maximo es: " << i << std::endl;

    // Devuelve la longitud de la secuencia controlada, 
    // en tiempo constante independientemente de la longitud de la secuencia controlada.
    e = numero.size();
    std::cout << e << "\n";

    return 0;
}
#endif

#if 0

#include <iostream>
#include <set>
#include <conio.h>


struct custom_compare final
{
    bool operator() (const std::string& left, const std::string& right) const
    {
        int nLeft = atoi(left.c_str());
        int nRight = atoi(right.c_str());
        return nLeft > nRight; // > mayor a menor, < de menor a mayor...
    }
};


int main()
{
    std::set<std::string> sut({ "1", "2", "5", "23", "6", "290" });

    std::cout << "### Clasificación predeterminada activada std::set<std::string> :" << std::endl;
    for (auto&& data : sut)
        std::cout << data << std::endl;

    std::set<std::string, custom_compare> sut_custom({ "1", "2", "5", "23", "6", "290" },
        custom_compare{}); //< Compare object optional as its default constructible.

    std::cout << std::endl << "### Clasificación personalizada en el set :" << std::endl;
    for (auto&& data : sut_custom)
        std::cout << data << std::endl;

    auto compare_via_lambda = [](auto&& lhs, auto&& rhs) { return lhs > rhs; };
    using set_via_lambda = std::set<std::string, decltype(compare_via_lambda)>;
    set_via_lambda sut_reverse_via_lambda({ "1", "2", "5", "23", "6", "290" },
        compare_via_lambda);

    std::cout << std::endl << "### Clasificación lambda en el set :" << std::endl;
    for (auto&& data : sut_reverse_via_lambda)
        std::cout << data << std::endl;

    _Check_return_ _getch();
    return 0;
}

#endif
