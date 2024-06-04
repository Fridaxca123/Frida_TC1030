#ifndef ENTERPRISE_H
#define ENTERPRISE_H
#include <iostream>
#include <string>
using namespace std;

//Declara clase enterprise
class Enterprise {
private: //Atributos privados de la clase
    string name;
    int year; 
    string CEO; 
    string location; 
public: //Inicia la sccion publica
//Constructor de la clase
Enterprise(string n, int y, string c, string l){
    name = n; //Inicializan
    year = y;
    CEO = c;
    location = l;
}
//Metodo para mostrar informacion de la empresa 
void show_info(){
    cout << "\nName: " << name << endl; //Imprime datos
    cout << "Year: " << year << endl;
    cout << "CEO: " << CEO << endl;
    cout << "Location: " << location << endl;
}
}; 
#endif // ENTERPRISE_H
