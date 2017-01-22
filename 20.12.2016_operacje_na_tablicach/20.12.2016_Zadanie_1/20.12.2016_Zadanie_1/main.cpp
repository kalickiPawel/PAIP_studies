//
//  main.cpp
//  20.12.2016_Zadanie_1
//
//  Created by Paweł Kalicki on 10/01/2017.
//  Copyright © 2017 Paweł Kalicki. All rights reserved.
//
//  Zadanie 1
//
//  Wyszukać największą i najmniejszą wartość z losowo wypełnionej tablicy.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std; //definiowanie przestrzeni nazw aby nie pisać std::polecenie

int main(int argc, const char * argv[]) {
    
    //  generator liczby losowej na bazie czasu
    //  (w innym środowisku time(NULL))
    
    srand(time_t(NULL));
    
    // rozmiar tablicy (może być podawany przez użytkownika: patrz niżej)
    
    int rozmiar = 10;
    
    /*
     Procedura wprowadzania rozmiaru przez użytkownika:
     cout << "Podaj rozmiar tablicy";
     cin >> rozmiar;
     */
    
    // inicjalizacja tablicy intów z podanym rozmiarem
    int tablica[rozmiar];
    
    //  pętla wypełniająca tablicę
    for(int i=0; i<rozmiar; i++)
    {
        //  wypełnienie wartościami losowymi
        tablica[i] = rand() % 9;
        //  wyświetlanie tablicy
        cout << tablica[i] << " ";
    }
    
    // Szukanie wartości minimalnej i maksymalnej
    
    //  definiowanie zmiennych
    int minimalna = 0;
    int maksymalna = 0;
    
    //  petla przemieszczajaca po tablicy
    
    for(int i=0; i<rozmiar; i++)
    {
        //sprawdzanie wartosci wewnatrz tablicy
        if(tablica[i]<minimalna)
        {
            // przypisanie najmniejszej wartosci tablicy
            minimalna=tablica[i];
        }
        else if(tablica[i]>maksymalna)
        {
            //  przypisanie najwiekszej wartosci tablicy
            maksymalna=tablica[i];
        }
    }
    
    //  wyswietlanie najmniejszej i najwiekszej wartosci tablicy
    
    cout << endl; // estetyczna nowa linia
    
    cout << "Najmniejsza wczytana wartosc to: " << minimalna << endl;
    cout << "Najwieksza wczytana wartosc to: " << maksymalna << endl;

    return 0;
}
