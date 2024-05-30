#ifndef USUARIO_H
#define USUARIO_H

#include <iostream>
#include <string>

using namespace std;

class Usuario {
private:
    string nombre_usu;
    int edad;
    string email;
    int meses;

public:
    // Constructor por defecto
    Usuario() : nombre_usu(""), edad(0), email(""), meses(0) {}

    // Constructor con parámetros
    Usuario(string nomus, int ed, string em, int mes) : nombre_usu(nomus), edad(ed), email(em), meses(mes) {}

    // Getters
    string getNombre_usu() const { return nombre_usu; }
    int get_edad() const { return edad; }
    string getEmail() const { return email; }
    int getMeses() const { return meses; }

    int pagopendiente() const {
        return (meses * 200) * 0.16;
    }

    // Método para mostrar información del usuario
    void info_usuario() {
        cout << "\nNombre: " << nombre_usu << endl;
        cout << "Edad: " << edad << endl;
        cout << "Correo electronico: " << email << endl;
    }

    // Método para mostrar información de pago
    void info_pago() {
        cout << "Nombre: " << nombre_usu << endl;
        cout << "Su total es de: " << pagopendiente() << endl;
    }
};

#endif

