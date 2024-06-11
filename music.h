#ifndef MUSIC_H
#define MUSIC_H

#include <iostream>
#include <string>
#include "content.h"

using namespace std;

/*Define la clase de music que hereda de 
la clase abstracta content*/
class Music : public Content {
private: //Atributos privados
    string album;
    int min;
    int sec;

public://Inicia la seccion publica
//Constructor por defecto
Music():Content("","", ""){}; //Sobrecarga 

/*Constructor para Music, toma tanto los parametros
de content y tambien los propios*/
 Music(string name_cont, string author, string type_cont, string album, int min, int sec)
: Content(name_cont, author, type_cont), album(album), min(min), sec(sec) {}

/*Metodo que muestra infomacion especifica de la musica, 
sobreescribe el metodo virtual puro de la clase Content*/ 
void MasInfo(){
cout << "Album: " << album << endl;
cout << "Duration: " << min << " minutes and " << sec << " seconds" << endl; }
};

#endif // MUSIC_H


