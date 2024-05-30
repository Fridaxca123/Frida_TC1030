#ifndef PODCAST_H
#define PODCAST_H

#include <iostream>
#include <string>
#include "content.h"

using namespace std;

class Podcast : public Content {
private:
    string frequency; // Corregido el nombre de la variable
    float hours;
    string company;

public:
    // Constructor de Podcast
    Podcast(string name_cont, string author, string type_cont, string frequency, float hours, string company)
        : Content(name_cont, author, type_cont), frequency(frequency), hours(hours), company(company) {} // Corregidos los nombres de las variables

    // Método para mostrar los datos específicos de Podcast
    void data(){
        cout << "Frequency: " << frequency << endl; // Corregido el nombre de la variable
        cout << "Duration: " << hours << " hours" << endl;
        cout << "Company: " << company << endl;
    }

    // Método para mostrar la información completa de Podcast
    void podcast_info() {
        cout << "Name: " << name_cont << endl;
        cout << "Author: " << author << endl;
        cout << "Type: " << type_cont << endl;
        data();
    }
};

#endif // PODCAST_H

