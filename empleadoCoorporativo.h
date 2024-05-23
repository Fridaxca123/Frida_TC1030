#ifndef EMPLEADOCOORPORATIVO_H
#define EMPLEADOCOORPORATIVO_H
#include "emplado.h"
#include <iostream>
using namespace std;

//clase herencia de empleado
class empcoo: public Empleado{
private: //Modificador de acceso
    float numanos;//variables
    float bonos;
public:
    //constructor por defecto de empcoo
    empcoo() : numanos(0.0), bonos(0.0) {};
    //constructor con parametros
    empcoo(string nom, int ed, string dom, string puest,float na, float bo) : 
    Empleado(nom, ed, dom, puest), numanos(na), bonos(bo) {};

    float get_numanos()const{
        return numanos;
    }

    float get_bonos()const{
        return bonos;
    }

    float salario()const{
        return numanos*5600;
    }

    float ahorro()const{
        return this->salario()*0.10;

    }

    float salarioneto()const{
        return (this->salario()-this->ahorro())+bonos;

    }

    float seguro()const{
        return this->salario()*0.025;
    }

    //sobreescritura
    void mostrar_info() const override {
        Empleado::mostrar_info();
        cout << "Número de años: " << numanos << endl;
        cout << "Bonos: " << bonos << endl;
        cout << "Salario: " << salario() << endl;
        cout << "Ahorro: " << ahorro() << endl;
        cout << "Salario Neto: " << salarioneto() << endl;
        cout << "Seguro: " << seguro() << endl;
    }



};
#endif 