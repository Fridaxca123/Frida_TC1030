#include "streamingcomp.h"
#include "contenido.h"
#include "series.h"
#include <iostream>
#include <string>

void info_empresa() {
    streamingcomp frinet("Frinet", 2024, 100, 560);
    frinet.muestra_info();
}

void mostrar_menu() {
    cout << "\nMENU" << endl;
    cout << "1. Información de la empresa" << endl;
    cout << "2. Registrar un nuevo contenido" << endl;
    cout << "3. Salir" << endl;
    cout << "\nIngrese su elección: ";
}

void ingresa_contenido(){
    string titulo, genero, tipo;
    int anio;
    float duracion;
    cout << "\nIngrese título del contenido: ";
    cin.ignore();
    getline(cin, titulo);
    cout << "Ingrese género del contenido: ";
    getline(cin, genero);
    cout << "Ingrese tipo del contenido (serie o película): ";
    getline(cin, tipo);
    cout << "Ingrese año de lanzamiento del contenido: ";
    cin >> anio;
    cout << "Ingrese duración del contenido (en minutos): ";
    cin >> duracion;

}

void programa (){
    cout<<"\nBienvenidos "<<endl;
    int opcion;
    bool continuar=true;
    while (continuar){
        mostrar_menu();
        cin>>opcion;
        if (opcion==1){info_empresa();}
        else if (opcion==2){
            ingresa_contenido();
            Contenido*cptr;
            Series s;
            cptr=&s;
            cptr->display();
            cptr->print();
            }
        else if (opcion==3){continuar=false;}
    }}

int main() {
    programa();
    return 0;
}
