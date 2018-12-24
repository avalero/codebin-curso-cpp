#include <iostream>

using namespace std;

class Persona{

public:
    //constructor
    Persona(string _nombre, unsigned short int _edad, unsigned short int _altura, unsigned short int _peso)
    {
        nombre = _nombre;
        edad = _edad;
        altura = _altura;
        peso = _peso;
    }

    //variables miembro (atributos)
    string nombre;
    unsigned short edad;
    unsigned short altura;
    unsigned short peso;
};

int main()
{
    Persona chica("Nieves", 27, 171, 58);
    cout << "Hola " << chica.nombre <<
            ", tienes " << chica.edad <<
            " años y mides "<< chica.altura << "cm. " <<
            "Pesas " << chica.peso << " kg. " << endl;
    return 0;
}
