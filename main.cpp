#include "streamingcomp.h"
#include "contenido.h"
#include "series.h"
#include "usuario.h"
#include <iostream>
#include <string>

streamingcomp frinet("Frinet", 2024, 100, 560);


void mostrar_menu() {
    cout << "\nMENU" << endl;
    cout << "1. Información de la empresa" << endl;
    cout << "2. Registrar un nuevo contenido" << endl;
    cout << "3. Registra usuario" << endl;
    cout << "4. Salir" << endl;
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

void datos_usuario(){
    string nombre_usu, email;
    int edad, meses;
    cout << "\nIngrese nombre de usuario: ";
    cin.ignore();
    getline(cin, nombre_usu);
    cout << "Ingrese email: ";
    getline(cin, email);
    cout << "Ingrese edad: ";
    cin >> edad;
    cout <<"Ingrese meses de subscripcion:";
    cin>>meses;
    Usuario usuario(nombre_usu, edad, email, meses);
    usuario.info_pago();
}

void programa (){
    cout<<"\nBienvenidos "<<endl;
    int opcion;
    bool continuar=true;
    while (continuar){
        mostrar_menu();
        cin>>opcion;
        if (opcion==1){frinet.muestra_info();}
        else if (opcion==2){
            ingresa_contenido();
            Contenido*cptr;
            Series s;
            cptr=&s;
            cptr->display();
            cptr->print();
            }
        else if (opcion==3){
            cout<<"\n Se ha llevado a cabo su registro"<<endl;
            datos_usuario();
            break;}
        else if (opcion==4){continuar=false;}
    }}

int main() {
    programa();
    return 0;
}
