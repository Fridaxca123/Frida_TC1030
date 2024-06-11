#ifndef CONTENT_H
#define CONTENT_H

#include <iostream>
#include <string>

using namespace std;

/*Delaracion de clase base content
Es una clase abstracta ya que implementa una 
funcion virtual pura, no puede crear objetos
diractamente*/
class Content {
protected: //Atributos protegidos porque es herencia
    string name_cont;
    string author;
    string type_cont;
    
public: //Inicia la seccion publica
/* Constructor por defecto que inicializa los 
atributos a cadenas vacías y el arreglo a punteros nulos */
Content() : name_cont(""), author(""), type_cont("") {}; //Sobrecarga

/* Constructor que inicializa los atributos con los valores 
proporcionados y el arreglo a punteros nulos */
Content(string namco, string aut, string con) : 
name_cont(namco), author(aut), type_cont(con) {};

// Métodos getter que retornan los valores de los atributos
string getNameCont() const { return name_cont; } //Retorna
string getAuthor() const { return author; }
string getTypeCont() const { return type_cont; }

// Método que muestra la información básica del contenido
void InfoContent() const {
cout << "\nName: " << name_cont << endl; //Imprime atributos
cout << "Author: " << author << endl;
cout << "Type: " << type_cont << endl; }

// Metodo virtual puro que sera sobreescrito
virtual void MasInfo() = 0;

// Destructor virtual
virtual ~Content() {}
};

#endif // CONTENT_H

