//
//  main.cpp
//  20.12.2016_Zadanie_2
//
//  Created by Paweł Kalicki on 10/01/2017.
//  Copyright © 2017 Paweł Kalicki. All rights reserved.
//
//  Zadanie 2
//
//  Dynamiczna alokacja pamięci tablicy jednowymiarowe i dwuwymiarowej
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    int zmienna;
    
    cout << "Tablica jednowymiarowa wybierz: 0" << endl;
    cout << "Tablica dwuwymiarowa wybierz: 1" << endl;
    cin >> zmienna;
    
    if(zmienna == 0) // tablica jednowymiarowa
    {
        int rozmiar = 0;
        int wartosc = 0;

        cout << "Podaj rozmiar tablicy: ";
        cin >> rozmiar;

        int *p = new int[rozmiar]; // alokuję pamięć na tablicę w sposób dynamiczny
    
        cout << "Stworzono tablice o " << rozmiar << " elementach" << endl;
    
        for(int i=0; i<rozmiar; i++)
        {
            cout << "Podaj wartosc " << i << " elementu: ";
            cin >> wartosc;
            p[i] = wartosc;
        }
    
        cout << "Elementy w tablicy to:" << endl;

        for(int i=0; i<rozmiar; i++)
        {
            cout << p[i] << '\t';
        }
    
        cout << endl;
    
        // usuwanie pamięci tablicy
        
        delete[] p; // uwolnienie pamieci adresu
        p = NULL;   // uwolnienie pamieci zmiennej
        
        return 0;
    }
        
    else if (zmienna == 1) // tablica dwuwymiarowa
    {
        int wiersz = 0;
        int kolumna = 0;
        int wartosc = 0;
        
        cout << "Podaj ilosc wierszy: ";
        cin >> wiersz;
        
        cout << "Podaj ilosc kolumn: ";
        cin >> kolumna;
        
        int **p2 = new int *[wiersz]; // alokacja pamieci
        
        for ( int i = 0; i < wiersz; i++ )
        {
            p2[i] = new int [kolumna]; //alokacja pamieci
            
            //wpisanie wartosci do tablicy
            
            for ( int j = 0; j < kolumna; j++)
            {
                cout << "Wprowadz wartosc [" << i << "][" << j << "] adresu tablicy" << endl;
                cin >> wartosc;
                p2[i][j]=wartosc;
            }
        }
        
        // wypisanie tablicy
        
        for ( int i = 0; i < wiersz; i++, cout<<endl )
            for ( int j = 0; j < kolumna; j++)
                cout<<p2[i][j]<<'\t';
        
        // zwalnianie pamieci
        
        for ( int i(0); i < wiersz; ++i )
            delete [] p2[i]; // uwolnienie pamieci kolumn
        
        delete [] p2; //uwolnienie pamieci wierszy
        
        p2 = NULL; // uwolnienie pamieci zmiennej
        
        return 0;
    }
    
    else
        cout << "Zle wybrales! ^^" << endl;
    
    return 0;
}
