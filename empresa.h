#ifndef EMPRESA_H
#define EMPRESA_H
#include<iostream>
using namespace std;

//Declaro clase
class Empresa{
private: //Modificador de acceso
    string nombreEmpresa; //Declaro varibles 
    string licenciadeEmpresa; 
    string ubicacion; 

//Constructor de la clase empresa:
    Empresa(string numen, string lic, string ubi){
        nombreEmpresa = numen;
        licenciadeEmpresa = lic;
        ubicacion = ubi; 
    }

//Metodo de la clase empresa
    void GetInfo(){
        cout << "\nNombre: " << nombreEmpresa << endl;
        cout << "\nLicencia de la empresa: " << licenciadeEmpresa << endl;
        cout << "\nUbicación: " << ubicacion << endl;
    }

};
#endif 