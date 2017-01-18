//
//  main.cpp
//  10.01.2017_Zadanie_1
//
//  Created by Paweł Kalicki on 10/01/2017.
//  Copyright © 2017 Paweł Kalicki. All rights reserved.
//
//  Zadanie 1
//
//  Utworzenie funkcji zawierających pole kwadratu, prostokąta i trójkąta
//

#include <iostream>
#include <cmath>

using namespace std;

//  funkcja obliczająca pole kwadratu
double pole_kwadratu(double a)
{
    return a*a;
}

//  funkcja obliczająca pole prostokąta
double pole_prostokata(double b, double c)
{
    return b*c;
}

//  funkcja obliczająca pole trójkąta
double pole_trojkata(double d, double e, double f)
{
    double p, wynik;
    p = (d+e+f)/2;
    wynik = sqrt(p*(p-d)*(p-e)*(p-f));
    return wynik;
}

//  funkcja główna
int main(int argc, const char * argv[])
{
    //  deklaracja zmiennych
    double a,b,c,d,e,f;
    
    //  wprowadzanie danych
    cout << "Podaj dlugosc boku a do kwadratu: " << endl;
    cin >> a;
    cout << "Podaj dlugosc boku a do prostokata: " << endl;
    cin >> b;
    cout << "Podaj dlugosc boku b do prostokata: " << endl;
    cin >> c;
    cout << "Podaj dlugosc boku a do trojkata: " << endl;
    cin >> d;
    cout << "Podaj dlugosc boku b do trojkata: " << endl;
    cin >> e;
    cout << "Podaj dlugosc boku c do trojkata: " << endl;
    cin >> f;
    
    //  wywołanie funkcji
    cout << pole_kwadratu(a) << endl;
    cout << pole_prostokata(b,c) << endl;
    cout << pole_trojkata(d,e,f) << endl;
    
    return 0;
}
