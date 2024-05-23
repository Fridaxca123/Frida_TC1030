#ifndef EMPLEADOTIENDA_H
#define EMPLEADOTIENDA_H
#include "emplado.h"
#include <iostream>
using namespace std;

//Clase que hereda de la clase empleado 
class empTienda: public Empleado{
private: //Modificador de acceso
    float horas; //variable

public:
    //constructor por defecto de emp tienda
    empTienda(): Empleado(), horas(0.0) {};
    //constructor con parametros
    empTienda(string nom, int ed, string dom, string puest, float hor) : 
        Empleado(nom, ed, dom, puest), horas(hor) {};


    //Metodos 
    float get_horas()const{
        return horas;
    }

    float salario()const {
        return horas*47;
    }

    float pagoalIMSS() const{
        return this ->salario()*0.05;
    }

    float salarioNeto()const {
        return this->salario()- this->pagoalIMSS();
    }

    //sobreescritura
    void mostrar_info()const override{
        Empleado::mostrar_info();
        cout << "Horas trabajadas: " << horas << endl;
        cout << "Salario: " <<salario() << endl;
        cout << "Pago al IMSS: " << pagoalIMSS() << endl;
        cout << "Salario Neto: " << salarioNeto() << endl;
    }

};
#endif