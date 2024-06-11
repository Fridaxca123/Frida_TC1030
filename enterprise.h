#ifndef ENTERPRISE_H
#define ENTERPRISE_H
#include <iostream>
#include <string>
#include "content.h"
#include "podcast.h"
#include "music.h"
using namespace std;

const int MAX=5;  /*Constante de tamaño de arreglo*/
//Declara clase enterprise
class Enterprise {
private: //Atributos privados de la clase
    string name;
    int year; 
    string CEO; 
    string location; 
    Content* cont[MAX]; /* Se define como apuntador
    para usar polimorfismo*/
public: //Inicia la seccion publica
//Constructor de la clase
Enterprise(string n, int y, string c, string l)
: name (n), year(y), CEO(c), location(l){
    for (int i=0; i<MAX; ++i){
        cont [i]=nullptr;
    }
}
//Destructor de la clase
~Enterprise(){
    for (int i=0; i<MAX; ++i){
        delete cont [i];
    }
}
//Metodo para mostrar informacion de la empresa 
void show_info(){
    cout << "\nName: " << name << endl; //Imprime datos
    cout << "Year: " << year << endl;
    cout << "CEO: " << CEO << endl;
    cout << "Location: " << location << endl;
}

void creaEjemplosMusic();
void muestraEjemplosMusic()const;
void muestraEjemplosMusic(string tipo)const;
void creaEjemplosPodcast();
void muestraEjemplosPodcast()const;
void muestraEjemploPodcast(string tipo)const;
}; 
void Enterprise::creaEjemplosMusic() {
    cont[0] = new Music("When we were young", "Adele", "Pop", "25", 4, 51);
    cont[1] = new Music("Necesito decirtelo", "Cardenales de Nuevo Leon", "Regional Mexicano", "De Norte a Sur", 3, 30);
    cont[2] = new Music("Californica", "La Gusana Ciega", "Rock español", "Monarca", 3, 30);
    cont[3] = new Music("Mockingbird", "Eminem", "Hip-Hop", "Encore", 4, 11);
    cont[4] = new Music("Perdoname", "Factoria", "Reggaeton", "Nuevas metas", 4, 2);
}
void Enterprise::muestraEjemplosMusic() const {
    // Usar el polimorfismo para llamar a MasInfo
    for (int i = 0; i<MAX; ++i) { 
        if (cont[i] != nullptr) {
            cont[i]->InfoContent();
            // Llama al método sobreescrito en Podcast
            cont[i]->MasInfo();}
        }
}
void Enterprise::muestraEjemplosMusic( string tipo) const {
    for (int i = 0; i < MAX; ++i) {
        if (cont[i] != nullptr && cont[i]->getTypeCont() == tipo) {
            cont[i]->InfoContent();
            cont[i]->MasInfo();
        }
    }
}
void Enterprise::creaEjemplosPodcast(){
    cont[0]= new Podcast("Mas alla del rosa", "Jessica Fernandez", "Gender", "Weekly", 3.22, "Jessica Fernandez");
    cont[1]= new Podcast("Niñas bien", "Fer y Ando", "Comedy", "Weekly", 1.45, "Spotify");
    cont[2]= new Podcast("TED Daily", "TED", "Educational", "Every two weeks", 0.3, "TED");
    cont[3]= new Podcast("Global News Podcast", "BBC", "News", "Daily", 0.5, "BBC");
    cont[4]= new Podcast("El vuelo de una abeja", "Luz Carreiro", "Personal stories", "Monthly", 1.45, "Luz Carreiro");
}
void Enterprise::muestraEjemplosPodcast() const {
    for (int i = 0; i < MAX; ++i) {
        if (cont[i] != nullptr) {
            cont[i]->InfoContent();
            cont[i]->MasInfo();
        }
    }
}

void Enterprise::muestraEjemploPodcast(string tipo) const {
    for (int i = 0; i < MAX; ++i) {
        if (cont[i] != nullptr && cont[i]->getTypeCont() == tipo) {
            cont[i]->InfoContent();
            cont[i]->MasInfo();
        }
    }
}
#endif // ENTERPRISE_H
