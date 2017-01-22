//
//  main.cpp
//  20.12.2016_Zadanie_2
//
//  Created by Paweł Kalicki on 10/01/2017.
//  Copyright © 2017 Paweł Kalicki. All rights reserved.
//
//  Zadanie 2
//
//  Dynamiczna alokacja pamięci tablicy dwuwymiarowej
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int x;
    char powrot;
    
    cout << "Tablica jednowymiarowa wybierz: 0" << endl;
    cout << "Tablica dwuwymiarowa wybierz: 1" << endl;
    cin >> x;
    
    do{
        switch(x)
        {
            
        case 0:
            
            int rozmiar = 0;
            int wartosc = 0;
    
            cout << "Podaj rozmiar tablicy: ";
            cin >> rozmiar;
    
            int *p = new int[rozmiar]; //   alokuję pamięć na tablicę w sposób dynamiczny
    
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
                cout << p[i] << " ";
            }
    
            cout << endl;
    
            delete[] p; //  usuwanie pamięci tablicy
            
            break;
            
        case 1:
                cout << "Sektor 1" << endl;;
                break;
        default:
            cout << "Nie wybrałeś tablicy wpisz \"x\" aby powrocic" << endl;
            cin >> powrot;
            break;
        }
    }while(powrot!=x);
    return 0;
}
