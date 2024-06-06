#ifndef PAYMENT_H
#define PAYMENT_H

#include "subscribe.h"  // Correct header inclusion
#include <string>
#include <iostream>
using namespace std;

class Student : public Subscribe {
private: 
    string university;
    int ID;
public:
    // Default constructor
    Student() : Subscribe(), university(""), ID(0) {}

    // Constructor that initializes inherited and own attributes
    Student(string usna, int usag, string usem, int mon, string uni, int id) : 
    Subscribe(usna, usag, usem, mon), university(uni), ID(id) {}

    // Method to calculate student price
    float StudentPrice() { return (months - 1) * 5.99; }

    // Getters
    string getUniversity() { return university; }
    int getID() { return ID; }

    // Method to display student information
    void show_info() {
        cout << "\nYou have successfully subscribed to Spotify" << endl;
        cout << "Student Name: " << get_user_name() << endl;
        cout << "University: " << getUniversity() << endl;
        cout << "ID: " << getID() << endl;
        cout << "Subscription Months: " << get_months() << endl;
        cout << "Total: $" << StudentPrice() << endl;
        cout << "Please make your deposit to the following account: \nSpotify \nHSBC: SPO23456789" << endl;
    }
}; 

class Individual : public Subscribe {
public:
    // Default constructor
    Individual() : Subscribe() {}

    // Constructor that initializes inherited attributes
    Individual(string usna, int usag, string usem, int mon) : 
    Subscribe(usna, usag, usem, mon) {}

    // Method to calculate individual price
    float IndividualPrice() { return (months - 1) * 11.99; }

    // Method to display individual information
    void show_info() {
        cout << "\nYou have successfully subscribed to Spotify" << endl;
        cout << "User Name: " << get_user_name() << endl;
        cout << "Subscription Months: " << get_months() << endl;
        cout << "Total: $" << IndividualPrice() << endl;
        cout << "Please make your deposit to the following account: \nSpotify \nHSBC: SPO23456789" << endl;
    }
}; 

class Duo : public Subscribe {
private: 
    string name_user2;
public:
    // Default constructor
    Duo() : Subscribe() {}

    // Constructor that initializes inherited attributes
    Duo(string usna, int usag, string usem, int mon, string naus2) : 
    Subscribe(usna, usag, usem, mon), name_user2(naus2) {}

    string get_name_user2(){return name_user2;}

    // Method to calculate duo price
    float DuoPrice() { return (months - 1) * 16.99; }

    // Method to display duo information
    void show_info() {
        cout << "\nYou have successfully subscribed to Spotify" << endl;
        cout << "Plan Manager's Name: " << get_user_name() << endl;
        cout << "Second User's Name: " << get_name_user2() << endl;
        cout << "Subscription Months: " << get_months() << endl;
        cout << "Total: $" << DuoPrice() << endl;
        cout << "Please make your deposit to the following account: \nSpotify \nHSBC: SPO23456789" << endl;
    }
}; 

#endif // PAYMENT_H
