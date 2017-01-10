//
//  main.cpp
//  10.01.2017_Zadanie_3
//
//  Created by Paweł Kalicki on 10/01/2017.
//  Copyright © 2017 Paweł Kalicki. All rights reserved.
//
//  Zadanie 3
//
//  Porównaj 2 liczby i wyświetl większą z nich
//

#include <iostream>

using namespace std;

double sprawdzanie(double a, double b)
{
    double wynik;
    // sprawdzanie, która liczba jest większa
    if(a>b)
    {
        wynik = a;
    }
    else if(b>a)
    {
        wynik = b;
    }
    return wynik; // zwrócenie wyniku
}

int main(int argc, const char * argv[])
{
    double a,b;
    
    cout << "Podaj liczbe a: ";
    cin >> a;
    cout << "Podaj liczbe b: ";
    cin >> b;
    
    cout << "Większa jest: " << sprawdzanie(a,b) << endl;
    
    return 0;
}
