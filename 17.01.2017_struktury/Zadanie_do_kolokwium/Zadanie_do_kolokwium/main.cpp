//
//  main.cpp
//  Zadanie_do_kolokwium
//
//  Created by Paweł Kalicki on 17/01/2017.
//  Copyright © 2017 Paweł Kalicki. All rights reserved.
//
//  Zadanie 1
//  Napisz program który wyświetli liczby od 100 do 10
//  Wykorzystaj pętlę while (musi być while)
//  Treści nie są wprowadzanie z klawiatury!
//
//  Zadanie 2
//  Wypisz za pomocą tablicy następujące elementy 20, 40, 60, 80, 100
//

#include <iostream>

using namespace std;

void zadanie_1()
{
    int a=100;
    while(a>=10)
    {
        cout << a << " ";
        a--;
    }
    cout << endl;
}

void zadanie_2()
{
    int tab[5],j=20;
    for(int i=0; i<5; i++)
    {
        tab[i]=j;
        cout << tab[i] << " ";
        j+=20;
    }
    cout << endl;
}

int main(int argc, const char * argv[]) {
    cout << "Zadanie 1:" << endl;
    zadanie_1();
    cout << "Zadanie 2:" << endl;
    zadanie_2();
    return 0;
}
