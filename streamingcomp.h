#ifndef STREAMINGCOMP_H
#define STREAMINGCOMP_H
#include <iostream>
using namespace std;

class streamingcomp{ //declaro clase
protected: //metodo de acceso 
    string nombre; 
    int año;
    int numero_usuarios;
    int numero_contenido; 
public: 
//constructor
streamingcomp(string numen, int year, int numus, int numcon){
    nombre=numen;
    año=year;
    numero_usuarios=numus;
    numero_contenido=numcon;}
//metodo 
void muestra_info(){
    cout<<" \nNombre: "<<nombre<<endl;
    cout<<"\nAño de creación: "<<año<<endl;
    cout<<"\nNúmero de usuarios: "<<numero_usuarios<<endl;
    cout<<"\nNúmero de contenido: "<<numero_contenido<<endl;
}


};

#endif
