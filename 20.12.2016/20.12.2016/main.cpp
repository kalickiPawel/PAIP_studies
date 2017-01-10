//
//  main.cpp
//  20.12.2016
//
//  Created by Paweł Kalicki on 10/01/2017.
//  Copyright © 2017 Paweł Kalicki. All rights reserved.
//
//  Zadania:
//
//  1. Wyszukać największą i najmniejszą wartość z losowo wypełnionej tablicy.
//  2. Dynamiczna alokacja pamięci
//  3. Tablice znakowe -> czytanie i wyświetlenie danych. Przykład: char dane[100];
//     (wykorzystac: cin.getline(nazwa_tablicy,bufor) i cin.get( );
//  4. Tablice wielowymiarowe (2-wymiarowe) -> utworzyć tablicę -> wypełnić (za pomocą pętli wczytać z klawiatury) -> wyświetlić -> transpozycja

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std; //definiowanie przestrzeni nazw aby nie pisać std::polecenie

int main(int argc, const char * argv[]) {
// Zadanie 1.
    
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
        //wypełnienie wartościami losowymi
        tablica[i] = rand() % 9;
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
    cout << "Najmniejsza wczytana wartosc to: " << minimalna << endl;
    cout << "Najwieksza wczytana wartosc to: " << maksymalna << endl;
    
    // Zadanie 2.
    // Zadanie 3.
    // Zadanie 4.
    return 0;
}
