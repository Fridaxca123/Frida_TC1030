#ifndef PODCAST_H
#define PODCAST_H

#include <iostream>
#include <string>
#include "content.h"

using namespace std;
/*Define la clase podcast, la cual hereda publicamente 
de la clase Content */
class Podcast : public Content {
private: //Atributos privados
    string frequency;
    float hours;
    string company;

public: //Inicia la seccion publica
//constructor por defecto 
Podcast(): Content("","", ""){}; //Sobrecarga

/*Constructor para Podcast, toma tanto los parametros
de content y tambien los propios*/ 
Podcast(string name_cont, string author, string type_cont, string frequency, float hours, string company)
: Content(name_cont, author, type_cont), frequency(frequency), hours(hours), company(company) {}

/*Metodo que muestra infomacion especifica del podcast, 
sobreescribe el metodo virtual puro de la clase Content*/ 
void MasInfo(){
cout << "Frequency: " << frequency << endl; //Imprime
cout << "Duration: " << hours << " hours" << endl;
cout << "Company: " << company << endl; }
};

#endif // PODCAST_H
