#ifndef MUSIC_H
#define MUSIC_H
#include <iostream>
#include <string>
#include "content.h"
using namespace std;

class Music : public Content {
private:
    string album;
    int min;
    int sec;
public:
Music(string name_cont, string author, string type_cont, string album, int min, int sec):
Content(name_cont, author, type_cont) {
    this->album=album;
    this->min=min;
    this->sec=sec;
}
void data(){
    cout << "Album: "<< album<< endl;
    cout << "Duration: " << min << " minutes and " << sec << " seconds"<<endl;
}
void music_info(){
    cout<<"\nName: "<<name_cont<<endl;
    cout<<"Author: "<<author<<endl;
    cout<<"Type: "<<type_cont<<endl;
    data();
}

}; 
#endif // MUSIC_H
