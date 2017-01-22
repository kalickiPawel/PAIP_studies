//
//  main.cpp
//  24.10.2016_wymiana_walut
//
//  Created by Paweł Kalicki on 24/10/2016.
//  Copyright © 2017 Paweł Kalicki. All rights reserved.
//
//  Wymiana walut
//
//  round() -> zaokrąglenie naturalne
//  floor() -> zaokrąglenie w dół
//  ceil()  -> zaokrąglenie w górę
//
//  zaokrąglenia wymagają dodania biblioteki "cmath" !!!
//
//  zaokrąglenie do określonej liczby miejsc można wykonać za pomocą funkcji:
//  setprecision(ilosc_miejsc_po_przecinku)
//
//  to zaokrąglenie wymaga dodania biblioteki "iomanip"
//

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(int argc, const char * argv[]) {
    
    int wybor;
    float wartosc;
    const float mnoznik = 0.228888993; // stała określająca przelicznik waluty
    
    cout << "Jeśli chcesz przeliczać z PLN na EUR wybierz 1: " << endl;
    cout << "Jeśli chcesz przeliczać z EUR na PLN wybierz 2: " << endl;
    cin >> wybor;
    
    if(wybor == 1)
    {
        cout << "Wprowadz ilosc pieniedzy w PLN" << endl;
        cin >> wartosc;
        cout << wartosc <<" zl to "<< fixed << setprecision(2) << wartosc*mnoznik << " euro. " << endl;
    }
    else if(wybor == 2)
    {
        cout << "Wprowadz ilosc pieniedzy w EUR" << endl;
        cin >> wartosc;
        cout << wartosc <<" euro to "<< fixed << setprecision(2) << wartosc*mnoznik << " zl. " << endl;
    }
    else
        cout << "Zle wybrales! ^^" << endl;
    
    return 0;
}
