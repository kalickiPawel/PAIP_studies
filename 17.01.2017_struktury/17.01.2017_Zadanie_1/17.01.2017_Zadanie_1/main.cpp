//
//  main.cpp
//  17.01.2017_Zadanie_1
//
//  Created by Paweł Kalicki on 17/01/2017.
//  Copyright © 2017 Paweł Kalicki. All rights reserved.
//
//  Struktura tworzenie obiektów za pomocą tablicy
//

#include <iostream>
#include <string>

using namespace std;

struct student
{
    int nr_albumu;
    string nazwisko;
    string imie;
    int planowany_rok_ukonczenia;
};

void dodawanie_do_struktury(int rozmiar)
{
    student tab[3];
    for (int i=0; i<3; i++)
    {
        int j=i;
        cout << "Jest to student " << ++j << ". w bazie!" << endl;
        cout << "Podaj nr albumu: ";
        cin >> tab[i].nr_albumu;
        cout << "Podaj nazwisko: ";
        cin >> tab[i].nazwisko;
        cout << "Podaj imie: ";
        cin >> tab[i].imie;
    }
}

void wyswietlanie(int rozmiar){
    dodawanie_do_struktury();
    for (int i=0; i<3; i++)
    {
        int j=i;
        cout << "Numer studenta w bazie: ";
        cout << ++j << endl;
        cout << "Numer albumu to: "<< tab[i].nr_albumu << endl;
        cout << "Nazwisko studenta: " << tab[i].nazwisko << endl;
        cout << "Imie studenta: " << tab[i].imie << endl;
        cout << "Planowany rok ukonczenia studiow: " << tab[i].planowany_rok_ukonczenia << endl;
    }
}

int main(int argc, const char * argv[]) {
    
    
    
    //
    
    
    return 0;
}
