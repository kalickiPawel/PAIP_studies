//
//  main.cpp
//  10.01.2017_Zadanie_2
//
//  Created by Paweł Kalicki on 10/01/2017.
//  Copyright © 2017 Paweł Kalicki. All rights reserved.
//
//  Zadanie 2
//
//  Program wyświetlający określoną przez użytkownika ilość znaku
//  określonego przez użytkownika
//

#include <iostream>

using namespace std;

// funkcja która nie przyjmuje argumentów i nie zwraca wartosci

void symbol(char znak){
    int ilosc;
    cin >> ilosc;
    for(int i=0; i<ilosc; i++)
    {
        cout << znak;
    }
}

int main(int argc, const char * argv[]) {
    char znak;
    cout << "Podaj znak: ";
    cin >> znak;
    symbol(znak);
    return 0;
}
