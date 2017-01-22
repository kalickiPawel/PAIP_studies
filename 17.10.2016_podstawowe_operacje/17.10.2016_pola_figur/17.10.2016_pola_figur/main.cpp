//
//  main.cpp
//  17.10.2016_pola_figur
//
//  Created by Paweł Kalicki on 17/10/2016.
//  Copyright © 2017 Paweł Kalicki. All rights reserved.
//
//  Stwórz program obliczający pole trójkąta
//

#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, const char * argv[]) {
    
    int a,h,p;
    
    cout << "Podaj dlugosc podstawy: " << endl;
    cin >> a;
    
    cout << "Podaj wysokosc: " << endl;
    cin >> h;
    
    p=a*h/2;
    
    cout << "Pole trojkata = "<< p << endl;

    return 0;
}
