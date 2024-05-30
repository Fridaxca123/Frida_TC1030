#ifndef CONTENIDO_H
#define CONTENIDO_H
#include <iostream>
#include <string>
using namespace std;

class Contenido{
protected:
    string nombre_con;
    int estreno;
    string genero;
    string tipo;
public: 
//constructor por defecto 
Contenido(): nombre_con(""), estreno(0), genero(""), tipo(""){};
//contructor por parametros
Contenido(string nomcon, int est, string gen, string tip, float dur): 
nombre_con(nomcon), estreno(est), genero(gen), tipo(tip){};
//metodos get
string get_nombre_con()const{return nombre_con;}
int get_estreno()const{return estreno;}
string get_genero()const{return genero;}
string get_tipo()const{return tipo;}
//metodos set (sobrecarga de metodos)
void set_info(string nomcon)
{nombre_con=nomcon;}
void set_info(string nomcon, int est)
{nombre_con=nomcon; estreno=est;}
void set_info(string nomcon, int est, string gen)
{nombre_con=nomcon; estreno=est; genero=gen;}
void set_info(string nomcon, int est, string gen, string tip)
{nombre_con=nomcon; estreno=est; genero=gen; tipo=tip;}
//sobreescritura (se declara en la base se redefine en la hija)

virtual void display()const{
    cout<<"Nombre: "<<nombre_con<<endl;
    cout<<"Año de estreno: "<<estreno<<endl;
    }
void print()const{
    cout<<"Nombre: "<<nombre_con<<endl;
    cout<<"Estreno: "<<estreno<<endl;
    cout<<"Tipo:"<<tipo<<endl;
    cout<<"Genero:"<<genero<<endl;}
}; 
#endif 
