//
//  main.cpp
//  24.10.2016_potegowanie_i_pierwiastkowanie
//
//  Created by Paweł Kalicki on 24/10/2016.
//  Copyright © 2017 Paweł Kalicki. All rights reserved.
//
//  Operacje: Potęgowanie i Pierwiastkowanie
//  Nowa biblioteka "cmath"
//

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(int argc, const char * argv[]) {

    float liczba, licznik_potegi, pierwiastek, potega;

    cout << "Podaj lizcbe: ";
    
    cin >> liczba;
    
    cout << "Podaj do jakiej potegi: ";
    cin >> potega;
    
    pierwiastek = sqrt(liczba) ;
    
    potega = pow(liczba, licznik_potegi) ;
    
    cout << "Pierwiastek z liczby: " << pierwiastek << endl;
    cout << "Liczba a do potegi : " << potega << endl;
    
    return 0;
}
