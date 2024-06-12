/*Incluye tres clase que heredan de subscribe*/
#ifndef PAYMENT_H
#define PAYMENT_H

#include "subscribe.h"  //Incluye clase subscribe
#include <string>
#include <iostream>
using namespace std;

class Student : public Subscribe {
private: 
    string university;
    int ID;
public:
    //Constructor por default
    Student() : Subscribe(), university(""), ID(0) {}

    // Constructor que inicializa incluye atributos propios y heredados 
    Student(string usna, int usag, string usem, int mon, string uni, int id) : 
    Subscribe(usna, usag, usem, mon), university(uni), ID(id) {}

    // Getters
    string getUniversity() { return university; }
    int getID() { return ID; }

     // Metodo que calcula el pago
    float payment() { return (months - 1) * 5.99; }

    // Metodo con informacion de la subscripcion
    void show_info() {
        cout << "\nYou have successfully subscribed to Spotify" << endl;
        cout << "Student Name: " << get_user_name() << endl;
        cout << "University: " << getUniversity() << endl;
        cout << "ID: " << getID() << endl;
        cout << "Subscription Months: " << get_months() << endl;
        cout << "Total: $" << payment() << endl;
        cout << "Please make your deposit to the following account: \nSpotify \nHSBC: SPO23456789" << endl;
    }
}; 

class Individual : public Subscribe {
public:
    //Constructor por default
    Individual() : Subscribe() {}

    //Constructor que inicializa con atributos heredados
    Individual(string usna, int usag, string usem, int mon) : 
    Subscribe(usna, usag, usem, mon) {}

    //Metodo que calcula el precio
    float payment() { return (months - 1) * 11.99; }

    //Metodo con informacion de subscripcion
    void show_info() {
        cout << "\nYou have successfully subscribed to Spotify" << endl;
        cout << "User Name: " << get_user_name() << endl;
        cout << "Subscription Months: " << get_months() << endl;
        cout << "Total: $" << payment() << endl;
        cout << "Please make your deposit to the following account: \nSpotify \nHSBC: SPO23456789" << endl;
    }
}; 

class Duo : public Subscribe {
private: 
    string name_user2;
public:
    //Constructor por default
    Duo() : Subscribe() {}

    //constructor que se inicializa con atributos propios y los heredados
    Duo(string usna, int usag, string usem, int mon, string naus2) : 
    Subscribe(usna, usag, usem, mon), name_user2(naus2) {}

    //Getters
    string get_name_user2(){return name_user2;}

    // Metodo que calcula el precio
    float payment() { return (months - 1) * 16.99; }

    //Metodo con informacion de la subscripcion
    void show_info() {
        cout << "\nYou have successfully subscribed to Spotify" << endl;
        cout << "Plan Manager's Name: " << get_user_name() << endl;
        cout << "Second User's Name: " << get_name_user2() << endl;
        cout << "Subscription Months: " << get_months() << endl;
        cout << "Total: $" << payment() << endl;
        cout << "Please make your deposit to the following account: \nSpotify \nHSBC: SPO23456789" << endl;
    }
}; 

#endif // PAYMENT_H

