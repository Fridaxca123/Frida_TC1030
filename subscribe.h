#ifndef SUBSCRIBE_H
#define SUBSCRIBE_H

#include <iostream>
#include <string>
using namespace std;
//Define la clase subscribe 
class Subscribe {
private: //Atributos privados 
    string user_name;
    int user_age;
    string user_email;
    int months;

public: //Inicia la seccion publica
/*Constructor por defecto que inicializa los 
atributos a cadenas vacías*/
Subscribe() : user_name(""), user_age(0), user_email(""), months(0) {}

/*Constructor que inicializa los atributos con los valores 
proporcionados*/
Subscribe(string usna, int usag, string usem, int mon):
 user_name(usna), user_age(usag), user_email(usem), months(mon) {}

// Métodos getter que retornan los valores de los atributos
string get_user_name()const {return user_name;} //Retorna
int get_user_age()const {return user_age;}
string get_user_email()const {return user_email;}
int get_months()const {return months;}
float payment() const {
        return (months * 200) * 0.16;
    }
// Método que muestra    
void payment_info() {
        cout<<"\nYou have succesfully subscirbed to spotify"<<endl;//imprime
        cout << "Name: " << user_name << endl;
        cout << "Total payment: " << payment() << endl;
        cout << "Please make your deposit to the following account: \nSpotify \nHSBC: SPO23456789"<<endl;
    }
}; 
#endif // SUBSCRIBE_H
