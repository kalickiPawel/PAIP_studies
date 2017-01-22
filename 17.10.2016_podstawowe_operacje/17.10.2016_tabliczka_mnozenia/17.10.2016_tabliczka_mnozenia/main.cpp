//
//  main.cpp
//  17.10.2016_tabliczka_mnozenia
//
//  Created by Paweł Kalicki on 17/10/2016.
//  Copyright © 2017 Paweł Kalicki. All rights reserved.
//
//  Stwórz program wyświetlający tabliczkę mnożenia
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    int x;
    int y;
    
    for (x=1; x<=10; x++)
    {
        for (y=1; y<=10; y++)
        {
            cout << x << " * " << y << " = " << x*y << endl;
        }
        cout << endl;
    }
    return 0;
}
