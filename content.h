#ifndef CONTENT_H
#define CONTENT_H

#include <iostream>
#include <string>

using namespace std;

const int MAX = 5; /*Constante que define 
el numero maximo de contenidos*/

/*Delaracion de clase base content
Es una clase abstracta ya que implementa una 
funcion virtual pura, no puede crear objetos
diractamente*/
class Content {
protected: //Atributos protegidos
    string name_cont;
    string author;
    string type_cont;
    Content* cont[MAX]; 

public: //Inicia la sccion publica
/* Constructor por defecto que inicializa los 
atributos a cadenas vacías y el arreglo a punteros nulos */
Content() : name_cont(""), author(""), type_cont("") { 
    for (int i = 0; i < MAX; i++) {
        cont[i] = nullptr;}
    }
/* Constructor que inicializa los atributos con los valores 
proporcionados y el arreglo a punteros nulos */
Content(string namco, string aut, string con) : name_cont(namco), author(aut), type_cont(con) {
    for (int i = 0; i < MAX; i++) {
        cont[i] = nullptr; }
    }

// Métodos getter que retornan los valores de los atributos
string getNameCont() const { return name_cont; } //Retorna
string getAuthor() const { return author; }
string getTypeCont() const { return type_cont; }

// Método que muestra la información básica del contenido
void InfoContent() const {
cout << "\nName: " << name_cont << endl; //Imprime atributos
cout << "Author: " << author << endl;
cout << "Type: " << type_cont << endl; }

// Pure virtual method to display additional information
virtual void MasInfo() = 0;

// Destructor virtual
virtual ~Content() {}
};

#endif // CONTENT_H

