#ifndef SERIES_H
#define SERIES_H
#include <iostream>
#include <string>
#include "contenido.h"
using namespace std;

class Series: public Contenido {
private: 
    int num_temporadas;
    int num_episodios;
    float dur_epi;
public: 
    //constructor por defecto
    Series(): num_temporadas(0), num_episodios(0), dur_epi(0.0) {}

    //constructor con parametros
    Series(int numtem, int numepi): num_temporadas(numtem), num_episodios(numepi) {}

    //getters 
    int get_num_temporadas() const { return num_temporadas; }
    int get_num_episodios() const { return num_episodios; }
    float get_dur_epi() const { return dur_epi; }
    int epi_temp() const { return num_temporadas * num_episodios; }
     
    using Contenido::display;
    void display() {
        cout << "\nNumero de Temporadas: " << get_num_temporadas() << endl;
        cout << "Numero de Episodios: " << get_num_episodios() << endl;
        cout << "Duracion de los episodios: "<< get_dur_epi() <<endl;
        cout << " Episodios por temporada: " << epi_temp() << endl;
    }

    void print() {
        cout << "\nNombre: " << Contenido::nombre_con << endl;
        cout << "Estreno: " << Contenido::estreno << endl;
        cout << "Tipo: " << Contenido::tipo << endl;
        cout << "Genero: " << Contenido::genero << endl;
    }
}; 
#endif
