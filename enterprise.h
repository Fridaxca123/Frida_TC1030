#ifndef ENTERPRISE_H
#define ENTERPRISE_H
#include <iostream>
#include <string>
using namespace std;

class Enterprise {
    string name;
    int year; 
    string CEO; 
    string location; 
public:
Enterprise(string n, int y, string c, string l){
    name = n;
    year = y;
    CEO = c;
    location = l;
}
void show_info(){
    cout << "Name: " << name << endl;
    cout << "Year: " << year << endl;
    cout << "CEO: " << CEO << endl;
    cout << "Location: " << location << endl;
}
}; 
#endif // ENTERPRISE_H
