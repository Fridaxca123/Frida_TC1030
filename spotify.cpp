/*Frida Xcaret Vargas Trejo 
*A01707168
*ITC TC1030
*Este es un proyecto demo para la clase TC1030 Programación Orientado a
* Objetos. Es un programa que captura diferentes tipos de contenido de audio, tambien
* inscribir diferentes tipos de usuario con sus  y nos permite calcular
* el pago para cada tipo de usuario. */

#include <iostream> //para imprimir
#include <string>
#include "subscribe.h" //biblioteca con objetos de mi proyecto
#include "enterprise.h"
#include "content.h"
#include "music.h"
#include "podcast.h"
#include "payment.h"

using namespace std;

// Crea un objeto de enterprise  al recibir 4 parametros
Enterprise ent("Spotify", 2006, "Daniel Ek", "Stockholm");

// Crea onjetos de podcast al recibir 6 parametros
void podcastcont() {
    Podcast Podcasts[MAX] = {
        Podcast("Mas alla del rosa", "Jessica Fernandez", "Gender", "Weekly", 3.22, "Jessica Fernandez"),
        Podcast("Niñas bien", "Fer y Ando", "Comedy", "Weekly", 1.45, "Spotify"),
        Podcast("TED Daily", "TED", "Educational", "Every two weeks", 0.3, "TED"),
        Podcast("Global News Podcast", "BBC", "News", "Daily", 0.5, "BBC"),
        Podcast("El vuelo de una abeja", "Luz Carreiro", "Personal stories", "Monthly", 1.45, "Luz Carreiro")
    };

    for (int i = 0; i < MAX; ++i) {
        Podcasts[i].InfoContent();
        Podcasts[i].MasInfo();
    }
}

// Crea funcion al recibir 6 parametros 
void musiccont() {
    Music Musics[MAX] = {
        Music("When we were young", "Adele", "Pop", "25", 4, 51),
        Music("Necesito decirtelo", "Cardenales de Nuevo Leon", "Regional Mexicano", "De Norta a Sur", 3, 30),
        Music("Californica", "La Gusana Ciega", "Rock español", "Monarca", 3, 30),
        Music("Mockingbird", "Eminem", "Hip-Hop", "Encore", 4, 11),
        Music("Perdoname", "Factoria", "Reggaeton", "Nuevas metas", 4, 02)
    };

    for (int i = 0; i < MAX; ++i) {
        Musics[i].InfoContent();
        Musics[i].MasInfo();
    }
}

/* Funcion que no recibe ningun parametro, no
*retorna ningun valor solo imprime el menu*/
void show_menu() {
    cout << "\n✧.*MENU✧.*" << endl;
    cout << "1. Enterprise info:" << endl;
    cout << "2. Explore podcast" << endl;
    cout << "3. Explore music" << endl;
    cout << "4. Subscribe" << endl;
    cout << "5. Salir" << endl;
    cout << "\nChoose an option: ";
}
void show_subs(){
    cout << "\n✧.*SUBSCRIBE✧.*" << endl;
    cout << "1. Individual" << endl;
    cout << "2. Student" <<endl;
    cout << "3. Duo" << endl;
}
/* Funcion que recopila datos del usuario, crea un objeto de 
*tipo subscribe y luego manda llamar un metodo paymnet.info()
*en este objeto */
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
    Individual user(user_name, user_age, user_email, months);
    user.show_info();
}
void student_data() {
    string user_name, user_email, university;
    int user_age, months, id;
    cout << "\nUser's name: ";
    cin.ignore(); // Ignore any newline character left in the buffer
    getline(cin, user_name);
    cout << "University: ";
    getline(cin, university);
    cout << "ID: ";
    cin >> id;
    cin.ignore(); // Ignore the newline character left after reading id
    cout << "Email: ";
    getline(cin, user_email);
    cout << "Age: ";
    cin >> user_age;
    cout << "Months you wish to subscribe: ";
    cin >> months;
    Student user(user_name, user_age, user_email, months, university, id);
    user.show_info();
}

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
    cin >> user_name2;
    cin.ignore();
    Duo user(user_name, user_age, user_email, months, user_name2);
    user.show_info();
}

/* Main responsable de manejar la interaccion del 
*usuario con un menu, permitiendo seleccionar diferentes 
*opciones que ejecutan diferentes funcionalidades.*/

int main() {
    //Imprime mensaje de bienvenida
    cout << "✧.* Welcome to spotify✧.*" << endl; 
    int option; //Almacena la opcion seleccionada por el usuario
    bool continuar = true; //Controla bucle while
    while (continuar) { //Bucle principal 
        show_menu();//Manda llamar funcion que muestra el menu
        cin >> option; //Lee la opcion elegida
        if (option == 1) { //Muestra informacion de la empresa
            ent.show_info(); /*Manda llamar el objeto ent 
            y el metodo show_info (imprime )declarada en la clase*/
        } else if (option == 2) { //Podcast
            podcastcont(); /*Manda llamar a la funcion podcastcont
            en la cual se encuentra el objeto de podcast*/
        } else if (option == 3) { //Musica
            musiccont(); /*Manda llamar a la funcion musicont
            en la cual se encuentra el objeto de music*/
        } else if (option == 4) { //Subscirbete
            int type;
            show_subs();
            cin >> type;
            if (type==1){
                individual_data();/*Manda llamar la user_data la cual 
            pide al usuario datod */
            }
            else if (type==2){
                student_data();/*Manda llamar la duo_data la cual*/
            } 
            else if (type==3){
                duo_data();/*Manda llamar la duo_data la cual*/
            }
        } else if (option == 5) { //Salir del programa
            continuar = false; /*Termina el bloque while y el programa
            termina*/
        }
    }

    return 0; //Fin del bucle y retorno
}

