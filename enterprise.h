#ifndef ENTERPRISE_H
#define ENTERPRISE_H

#include <iostream>
#include <string>
#include "content.h"
#include "podcast.h"
#include "music.h"
#include "subscribe.h"

using namespace std;

const int MAX = 5;  // Constante de tamaño de arreglo
const int MAX_SUBS = 3;  // Constante de tamaño de arreglo para suscripciones

// Declara la clase Enterprise
class Enterprise {
private: // Atributos privados de la clase
    string name;
    int year;
    string CEO;
    string location;
    Content* cont[MAX];  // Se define como apuntador para usar polimorfismo
    Subscribe* subs[MAX_SUBS];  // Arreglo de punteros a suscripciones
    int sub_count;  // Contador de suscripciones

public: // Inicia la sección pública
    // Constructor de la clase
    Enterprise(string n, int y, string c, string l)
        : name(n), year(y), CEO(c), location(l), sub_count(0) {
        for (int i = 0; i < MAX; ++i) {
            cont[i] = nullptr;
        }
        for (int i = 0; i < MAX_SUBS; ++i) {
            subs[i] = nullptr;
        }
    }

    // Destructor de la clase
    ~Enterprise() {
        for (int i = 0; i < MAX; ++i) {
            delete cont[i];
        }
        for (int i = 0; i < MAX_SUBS; ++i) {
            delete subs[i];
        }
    }

    // Método para mostrar información de la empresa
    void show_info() const {
        cout << "\nName: " << name << endl;
        cout << "Year: " << year << endl;
        cout << "CEO: " << CEO << endl;
        cout << "Location: " << location << endl;
    }

    void creaEjemplosMusic();
    void muestraEjemplosMusic() const;
    void muestraEjemplosMusic(string tipo) const;
    void creaEjemplosPodcast();
    void muestraEjemplosPodcast() const;
    void muestraEjemploPodcast(string tipo) const;
    void agregaSubscription(Subscribe* subs);
    void muestraSubscription() const;
};

// Crea instancias de objetos de tipo Music y los asigna al arreglo de contenido
void Enterprise::creaEjemplosMusic() {
    cont[0] = new Music("When we were young", "Adele", "Pop", "25", 4, 51);
    cont[1] = new Music("Necesito decírtelo", "Cardenales de Nuevo León", "Regional Mexicano", "De Norte a Sur", 3, 30);
    cont[2] = new Music("Californica", "La Gusana Ciega", "Rock español", "Monarca", 3, 30);
    cont[3] = new Music("Mockingbird", "Eminem", "Hip-Hop", "Encore", 4, 11);
    cont[4] = new Music("Perdóname", "Factoria", "Reggaeton", "Nuevas metas", 4, 2);
}

// Muestra información de un contenido de música de manera aleatoria
void Enterprise::muestraEjemplosMusic() const {
    // Usar el polimorfismo para llamar a MasInfo
    int index = rand() % MAX;
    if (cont[index] != nullptr) {
        cont[index]->InfoContent();
        // Llama al método sobreescrito en Podcast
        cont[index]->MasInfo();
    }
}

// Muestra información de los contenidos de música del tipo especificado
void Enterprise::muestraEjemplosMusic(string tipo) const {
    for (int i = 0; i < MAX; ++i) {
        if (cont[i] != nullptr && cont[i]->getTypeCont() == tipo) {
            cont[i]->InfoContent();
            cont[i]->MasInfo();
        }
    }
}

// Crea instancias de objetos de tipo Podcast y los asigna al arreglo de contenido
void Enterprise::creaEjemplosPodcast() {
    cont[0] = new Podcast("Más allá del rosa", "Jessica Fernández", "Gender", "Weekly", 3.22, "Jessica Fernández");
    cont[1] = new Podcast("Niñas bien", "Fer y Ando", "Comedy", "Weekly", 1.45, "Spotify");
    cont[2] = new Podcast("TED Daily", "TED", "Educational", "Every two weeks", 0.3, "TED");
    cont[3] = new Podcast("Global News Podcast", "BBC", "News", "Daily", 0.5, "BBC");
    cont[4] = new Podcast("El vuelo de una abeja", "Luz Carreiro", "Personal stories", "Monthly", 1.45, "Luz Carreiro");
}

// Muestra información de un contenido de podcast de manera aleatoria
void Enterprise::muestraEjemplosPodcast() const {
    int index = rand() % MAX;
    if (cont[index] != nullptr) {
        cont[index]->InfoContent();
        cont[index]->MasInfo();
    }
}

// Muestra información de los contenidos de podcast del tipo especificado
void Enterprise::muestraEjemploPodcast(string tipo) const {
    for (int i = 0; i < MAX; ++i) {
        if (cont[i] != nullptr && cont[i]->getTypeCont() == tipo) {
            cont[i]->InfoContent();
            cont[i]->MasInfo();
        }
    }
}

// Verifica si hay espacio en el arreglo de suscripciones y agrega la suscripción si es posible
void Enterprise::agregaSubscription(Subscribe* subs) {
    if (sub_count < MAX_SUBS) {
        this->subs[sub_count++] = subs;
    } else {
        cout << "No se pueden agregar más suscripciones." << endl;
    }
}

// Muestra información de todas las suscripciones almacenadas en el arreglo de suscripciones
void Enterprise::muestraSubscription() const {
    for (int i = 0; i < sub_count; ++i) {
        if (subs[i] != nullptr) {
            cout << "Nombre: " << subs[i]->get_user_name() << ", ";
            cout << "Email: " << subs[i]->get_user_email() << ", ";
            cout << "Meses: " << subs[i]->get_months() << endl;
        }
    }
}

#endif // ENTERPRISE_H

