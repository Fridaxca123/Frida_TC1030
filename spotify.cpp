#include <iostream>
#include <string>
#include "subscribe.h"
#include "enterprise.h"
#include "content.h"
#include "music.h"
#include "podcast.h"
using namespace std;

//Creo objeto para enterprise
Enterprise ent("\nSpotify", 2006, "Daniel Ek", "Stockholm");

//Creo objeto para music
Music mus1("When we were young", "Adele", "Pop", "25", 4, 51);
Music mus2("Necesito decirtelo", "cardenales de Nuevo Leon", "Regional Mexicano", "De Norta a Sur", 3, 30);
Music mus3("Californica", "La gusana ciega", "Rock español", "Monarca", 3, 30);
Music mus4("Mockingbird", "Eminem", "Hip-Hop", "Encore", 4, 11);
Music mus5("Perdoname", "Factoria", "Reggaeton", "Nuevas metas", 4, 02);

//Creo objeto para podcast
Podcast pod1("Mas alla del rosa", "Jessica Fernandez", "Gender", "Weekly", 3.22, "Jessica Fernandez" );
Podcast pod2("Niñas bien", "Der y Ando", "Comedy", "Weeklu", 1.45, "Spotify" );
Podcast pod3("TEd Daily", "TED", "Educational", "Every two weeks", 0.3, "TED" );
Podcast pod4("Global News Podcast", "BBC", "News", "Daily", 0.5, "BBC" );
Podcast pod5("El vuelo de una abeja", "Luz Carreiro", "Personal stories", "Monthly", 1.45, "Luz Carreiro" );

//Menu
void show_menu() {
    cout <<"\n ✧.*MENU✧.*" << endl;
    cout << "1. Enterprise info:" << endl;
    cout << "2. Explore music" << endl;
    cout << "3. Explore podcast" << endl;
    cout << "4. Subscribe" << endl;
    cout << "5. Salir" << endl;
    cout << "\nChoose an option: ";
}

//Interaccion con el usuario para que ingrese los datos
void user_data(){
    string user_name, user_email;
    int user_age, months;
    cout << "\nUser's name: ";
    cin.ignore();
    getline(cin, user_name);
    cout << "Email: ";
    getline(cin, user_email);
    cout << "Age: ";
    cin >> user_age;
    cout <<"Months you wish to subscribe: ";
    cin>>months;
    Subscribe user(user_name, user_age, user_email, months);
    user.payment_info();
}

//Main
int main(){
    cout<<"✧.* Welcome to spotify✧.*"<<endl;
    int option;
    bool continuar=true;
    while (continuar){ //Mientras continuar sea verdadero el codigo continua
        show_menu();
        cin >> option;
        if (option==1){ent.show_info(); break;}
        else if (option==2){
            mus1.music_info();
            mus2.music_info();
            mus3.music_info();
            mus4.music_info();
            mus5.music_info();
            break;}
        else if (option==3){
            pod1.podcast_info();
            pod2.podcast_info();
            pod3.podcast_info();
            pod4.podcast_info();
            pod5.podcast_info();
            break;}
        else if(option==4){user_data(); break;}
        else if (option==5){continuar=false;}
    }

    return 0;
}
