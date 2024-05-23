#ifndef EMPLEADO_H
#define EMPLEADO_H
#include <iostream>
using namespace std; 

//Declaro clase 
class Empleado {
private: //modificador de acceso
    string nombre; //variables 
    int edad; 
    string domicilio;
    string puesto; 
public: 
  //constructor por defecto
  Empleado(): nombre(""), edad(0), domicilio(""),puesto("") {}; 
  //constructor con parametros
Empleado(string nom, int ed, string dom, string puest):
  nombre(nom), edad(ed), domicilio(dom), puesto(puest) {}; 

//Metodos 
string get_nombre()const{
    return nombre;
}

int get_edad()const{
    return edad;
}

string get_domicilio()const{
    return domicilio;
}

string get_puesto()const{
    return puesto;
}

//Sobrecarga de metodos
void set_info(string nom){
    nombre=nom;
}
void set_info(string nom, int ed){
    nombre=nom;
    edad=ed;
}
void set_info(string nom, int ed, string dom){
    nombre=nom;
    edad=ed;
    domicilio=dom;
}
void set_info(string nom, int ed, string dom, string puest){
    nombre=nom;
    edad=ed;
    domicilio=dom;
    puesto=puest;
}

//metodo para sobreescritura
virtual void mostrar_info()const{
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Puesto: "<<puesto<<endl;
}
}; 
#endif