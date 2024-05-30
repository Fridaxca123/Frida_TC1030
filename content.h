#ifndef CONTENT_H
#define CONTENT_H
#include <iostream>
#include <string>
using namespace std;

class Content{
protected:
    string name_cont;
    string author;
    string type_cont;
public:
Content(string name_cont, string author, string type_cont)
{this->name_cont=name_cont;
this->author=author;
this->type_cont=type_cont;}


};
#endif // CONTENT_H
