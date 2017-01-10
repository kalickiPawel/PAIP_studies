//
//  main.cpp
//  10.01.2017_Teoria_do_zadan
//
//  Created by Paweł Kalicki on 10/01/2017.
//  Copyright © 2017 Paweł Kalicki. All rights reserved.
//
//  Funkcje treść laboratorium (teoria do zadań)
//

#include <iostream>

using namespace std;

/*
 Prototyp:
 
 int dodawanie(int a, int b);
 int mnozenie(int a, int b);
 
 wtedy treść funkcji znajdują się wewnątrz funkcji głównej i deklarowane są tak samo
 to jest tak jakby odnośnik aby łatwiej sprawdzić czy funkcja jest wewnątrz programu
 
 */

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

//  funkcja odejmowania
int mnozenie(int c, int d)
{
    return c*d; // zwrócenie wyniku
}

//  funkcja główna
int main(int argc, const char * argv[])
{
    //  1. sposób wyświetlania wartości zwróconych przez funkcję (poprzez ręczne podanie danych)
    cout << dodawanie(5,7);
    
    //  2. sposób wyświetlania wartości zwróconych przez funkcję (poprzez wprowadzenie danych przez użytkownika
    int a, b;
    cin >> a >> b;
    cout << dodawanie(a,b);
    
    //  3. sposób wyświetlania wartości zwróconych przez funkcję (poprzez przypisanie wartości zwróconych do zmiennej)
    int suma;
    suma = dodawanie(a,b);
    cout << suma;
    
    //mnozenie
    
    int c,d;
    cin >> c >> d;
    cout << endl << mnozenie(c,d);
    
    return 0;
}
