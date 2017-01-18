//
//  main.cpp
//  17.01.2017_Teoria_do_zadan_struktura
//
//  Created by Paweł Kalicki on 17/01/2017.
//  Copyright © 2017 Paweł Kalicki. All rights reserved.
//

#include <iostream>

using namespace std;

//tworzenie struktury:
struct student
{
    int nr_albumu;
    string nazwisko;
    string imie;
    int rok;
    //pierwszy sposób tworzenia osoby, może tworzenie nastąpić w dalszej częsci kodu:
}osoba1={1234, "x","y",2}; // <-- wazne zeby byl srednik!!!


int main(int argc, const char * argv[]) {
    //drugi sposób tworzenia osoby:
    student osoba2;         //student -> struktura jest tak jakby typem zmiennej
    osoba2.nr_albumu = 12; // przypisanie wartosci numeru albumu
    cout << "Wpisz nazwisko" << endl; //komunikat
    cin >> osoba2.nazwisko; //wprowadzenie przez uzytkownika nazwiska
    cout << osoba2.nazwisko << " " << osoba2.nr_albumu << endl; //wyswietlanie danych
    return 0;
}
