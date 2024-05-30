#ifndef SUBSCRIBE_H
#define SUBSCRIBE_H

#include <iostream>
#include <string>
using namespace std;

class Subscribe {
private:
    std::string user_name;
    int user_age;
    std::string user_email;
    int months;

public:
// Constructor por defecto
Subscribe() : user_name(""), user_age(0), user_email(""), months(0) {}

// Constructor con parámetros
Subscribe(string usna, int usag, string usem, int mon):
 user_name(usna), user_age(usag), user_email(usem), months(mon) {}

//Getters
string get_user_name()const {return user_name;}
int get_user_age()const {return user_age;}
string get_user_email()const {return user_email;}
int get_months()const {return months;}
int payment() const {
        return (months * 200) * 0.16;
    }
void payment_info() {
        cout<<"\nYou have succesfully subscirbed to spotify"<<endl;
        cout << "Name: " << user_name << endl;
        cout << "Total payment: " << payment() << endl;
        cout << "Please make your deposit to the following account: \nSpotify \nHSBC: SPO23456789"<<endl;
    }
}; 
#endif // SUBSCRIBE_H
