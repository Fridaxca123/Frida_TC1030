/* Frida Xcaret Vargas Trejo 
 * A01707168
 * ITC TC1030
 * Este es un proyecto demo para la clase TC1030 Programación Orientada a
 * Objetos. Es un programa que captura diferentes tipos de contenido de audio, también
 * inscribir diferentes tipos de usuario y nos permite calcular
 * el pago para cada tipo de usuario.
 */

#include <iostream>
#include <string>
#include "subscribe.h"
#include "enterprise.h"
#include "content.h"
#include "music.h"
#include "podcast.h"
#include "payment.h"

using namespace std;

// Crea un objeto de Enterprise al recibir 4 parámetros
Enterprise ent("Spotify", 2006, "Daniel Ek", "Stockholm");

/* Función que no recibe ningún parámetro, no
 * retorna ningún valor, solo imprime el menú
 */
void show_menu() {
    cout << "\n✧.*MENU✧.*" << endl;
    cout << "1. Enterprise info:" << endl;
    cout << "2. Explore podcast" << endl;
    cout << "3. Explore music" << endl;
    cout << "4. Subscribe" << endl;
    cout << "5. View Subscription" << endl;
    cout << "6. Salir" << endl;
    cout << "\nChoose an option: ";
}

/* Función que no recibe ningún parámetro, no
 * retorna ningún valor, solo imprime las opciones
 * de suscripción
 */
void show_subs() {
    cout << "\n✧.*SUBSCRIBE✧.*" << endl;
    cout << "1. Individual" << endl;
    cout << "2. Student" << endl;
    cout << "3. Duo" << endl;
    cout << "\nChoose a subscription plan: ";
}

/* Función que recopila datos del usuario, crea un objeto de 
 * tipo Individual y luego manda llamar un método show.info()
 * en este objeto
 */
void individual_data() {
    string user_name, user_email;
    int user_age, months;
    cout << "\nUser's name: ";
    cin.ignore();
    getline(cin, user_name);
    cout << "Email: ";
    getline(cin, user_email);
    cout << "Age: ";
    cin >> user_age;
    cout << "Months you wish to subscribe: ";
    cin >> months;
    Individual* user = new Individual(user_name, user_age, user_email, months);
    user->show_info();
    ent.agregaSubscription(user); // Agrega la suscripción al objeto Enterprise
}

/* Función que recopila datos del usuario, crea un objeto de 
 * tipo Student y luego manda llamar un método show.info()
 * en este objeto
 */
void student_data() {
    string user_name, user_email, university;
    int user_age, months, id;
    cout << "\nUser's name: ";
    cin.ignore();
    getline(cin, user_name);
    cout << "University: ";
    getline(cin, university);
    cout << "ID: ";
    cin >> id;
    cin.ignore();
    cout << "Email: ";
    getline(cin, user_email);
    cout << "Age: ";
    cin >> user_age;
    cout << "Months you wish to subscribe: ";
    cin >> months;
    Student* user = new Student(user_name, user_age, user_email, months, university, id);
    user->show_info();
    ent.agregaSubscription(user); // Agrega la suscripción al objeto Enterprise
}

/* Función que recopila datos del usuario, crea un objeto de 
 * tipo Duo y luego manda llamar un método show.info()
 * en este objeto
 */
void duo_data() {
    string user_name, user_email, user_name2;
    int user_age, months;
    cout << "\nPlans Manager Name: ";
    cin.ignore();
    getline(cin, user_name);
    cout << "Email: ";
    getline(cin, user_email);
    cout << "Age: ";
    cin >> user_age;
    cout << "Months you wish to subscribe: ";
    cin >> months;
    cout << "Second User's Name: ";
    cin.ignore();
    getline(cin, user_name2);
    Duo* user = new Duo(user_name, user_age, user_email, months, user_name2);
    user->show_info();
    ent.agregaSubscription(user); // Agrega la suscripción al objeto Enterprise
}

/* Main responsable de manejar la interacción del 
 * usuario con un menú, permitiendo seleccionar diferentes 
 * opciones que ejecutan diferentes funcionalidades.
 */
int main() {
    srand(time(0));//Inicializa el generado de numero aleatorios
    // Imprime mensaje de bienvenida
    cout << "✧.* Welcome to Spotify ✧.*" << endl;
    int option; // Almacena la opción seleccionada por el usuario
    bool continuar = true; // Controla bucle while
    while (continuar) { // Bucle principal
        show_menu(); // Manda llamar función que muestra el menú
        cin >> option; // Lee la opción elegida
        if (option == 1) { // Muestra información de la empresa
            ent.show_info(); // Manda llamar el objeto ent y el método show_info
        } else if (option == 2) { // Podcast
            ent.creaEjemplosPodcast(); // Crea ejemplos de podcast
            ent.muestraEjemplosPodcast(); // Muestra ejemplos de podcast
        } else if (option == 3) { // Música
            ent.creaEjemplosMusic(); // Crea ejemplos de música
            ent.muestraEjemplosMusic(); // Muestra ejemplos de música
        } else if (option == 4) { // Suscribirse
            int type;
            show_subs(); // Manda llamar la función que muestra los tipos de suscripción
            cin >> type;
            if (type == 1) {
                individual_data(); // Manda llamar función que determina el precio del paquete individual
            } else if (type == 2) {
                student_data(); // Manda llamar función que determina el precio del paquete estudiante
            } else if (type == 3) {
                duo_data(); // Manda llamar función que determina el precio del paquete duo
            }
        } else if (option == 5) { 
            ent.muestraSubscription(); //Muestra informacion de la subscripcion previamente realizada
        } else if (option == 6) { // Salir del programa
            continuar = false; // Termina el bucle while y el programa
        }
    }

    return 0; // Fin del bucle y retorno
}

