#include<iostream>
#include<conio.h>
#include<string>

class Rectangulo {

private:
    int base{};
    int altura{};
    std::string nombre{};

public:
    void LeerDatos(int b, int a)
    {
        base = b;
        altura = a;
    }
    int Area(){
        int area{ base * altura };
        return area;
    }
};

int main()
{
    system("color 2F");
    Rectangulo rec;
    rec.LeerDatos(7, 5);
    std::cout << "El area del Rectangulo es: " << rec.Area() << " Cm\n";

    _Check_return_ _getch();
    return 0;
}
