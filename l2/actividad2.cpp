#include <iostream>

using namespace std;

class Mascota{
public:
    Mascota(){

    }
    Mascota(string _nombre, string _especie, unsigned short _edad){
        nombre = _nombre;
        especie = _especie;
        edad = _edad;
    }

    string nombre;
    string especie;
    unsigned short edad;
};

class Persona{

public:
    //constructor
    Persona(string _nombre,
            unsigned short int _edad,
            unsigned short int _altura,
            unsigned short int _peso,
            Mascota _mascota)
    {
        nombre = _nombre;
        edad = _edad;
        altura = _altura;
        peso = _peso;
        mascotaFavorita = _mascota;
    }

    //variables miembro (atributos)
    string nombre;
    unsigned short edad;
    unsigned short altura;
    unsigned short peso;
    Mascota mascotaFavorita;
};

int main()
{
    Mascota mascota("Pippin","perro",3);
    Persona chica("Nieves", 27, 171, 58, mascota);
    cout << "Hola " << chica.nombre <<
            ", tienes " << chica.edad <<
            " años y mides "<< chica.altura << "cm. " <<
            "Pesas " << chica.peso << " kg. " << endl;

    cout << "Tus mascota se llama " << chica.mascotaFavorita.nombre <<
            ". Es un " << chica.mascotaFavorita.especie <<
            " y tiene " << chica.mascotaFavorita.edad << " anios" << endl;
    return 0;
}

