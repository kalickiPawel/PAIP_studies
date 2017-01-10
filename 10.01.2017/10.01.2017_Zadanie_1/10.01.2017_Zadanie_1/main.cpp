//
//  main.cpp
//  10.01.2017_Zadanie_1
//
//  Created by Paweł Kalicki on 10/01/2017.
//  Copyright © 2017 Paweł Kalicki. All rights reserved.
//
//  Funkcje
//

#include <iostream>

using namespace std;

//  funkcja dodawanie
int dodawanie(int a, int b)
{
    int wynik; //   deklaracja zmiennej
    wynik=a+b; //   przypisanie wartosci do zmiennej
    return wynik; // zwrócenie wyniku
}

//  funkcja dodawanie inny sposób też poprawny:
int dodawanie_v2(int a, int b)
{
    return a+b; // zwrócenie wyniku
}

//  funkcja główna
int main(int argc, const char * argv[]) {
    //  1. sposób
    cout << dodawanie(5,7);
    //  2. sposób
    int a, b;
    cin >> a >> b;
    cout << dodawanie(a,b);
    //  3. sposób
    int suma;
    suma = dodawanie(a,b);
    cout << suma;
    return 0;
}
