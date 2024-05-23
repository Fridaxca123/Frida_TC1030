#ifndef TIENDA_H
#define TIENDA_H
#include <iostream>
#include <fstream>
using namespace std; 

class Tienda{ //declaro clase
private: //modificador de acceso
   string producto; //variables
   int numerodeClave;
   float precio;

   //constructor por defecto
   Tienda(): producto(""), numerodeClave(0.0), precio(0){};
   //constructor con parametros
   Tienda(string pro, int numCla, float prec):
   producto(pro), numerodeClave(numCla), precio(prec){}; 

//Metodos
string get_producto()const{
    return producto;
}

int get_numerodeClave()const{
    return numerodeClave;
}

float get_precio()const{
    return precio;
}

float precioconIva()const{
    return precio*0.16;
}

// Método para guardar los datos de la tienda en un archivo
    void guardarDatos(string nombreArchivo) const {
        // Abrir el archivo de salida
        ofstream archivoSalida(nombreArchivo);

        // Verificar si el archivo se abrió correctamente
        if (archivoSalida.is_open()) {
            // Escribir los datos en el archivo
            archivoSalida << "Producto: " << producto << endl;
            archivoSalida << "Número de Clave: " << numerodeClave << endl;
            archivoSalida << "Precio: " << precio << endl;
            archivoSalida << "Precio con IVA: " << precioconIva() << endl;

            // Cerrar el archivo de salida
            archivoSalida.close();
            cout << "Los datos se han guardado en el archivo " << nombreArchivo << endl;
        } else {
            cout << "No se pudo abrir el archivo de salida." << endl;
        }
    }
};
#endif 