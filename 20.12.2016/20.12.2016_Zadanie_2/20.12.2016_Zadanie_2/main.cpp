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
    int rozmiar = 0;
    int wartosc = 0;
    
    cout << "Podaj rozmiar tablicy: ";
    cin >> rozmiar;
    
    int *p = new int[rozmiar]; //   tworzę rozmiar tablicy w sposób dynamiczny
    
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
    
    return 0;
}
