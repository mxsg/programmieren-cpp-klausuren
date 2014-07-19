/*
 * Programmieren fuer Physiker: C++
 * Wintersemester 2006/2007, Klausur 1
 *
 * Aufgabe 4
 * Was wird ausgegeben?
 */

#include <iostream>

using namespace std;

int f(int z) {
    z += 1;
    cout << "UP1: " << z << endl;
    return z*2;
}

int f(int *q) {
    (*q) += 2;
    cout << "UP2: " << *q << endl;
    return 13 + (*q)/1000;
}

int f(int r, int s) {
    if (s == 0) return 0;
    else return r + f(r-1, s-1);
}

int main() {
    int i = 0; // hier die letzte Ziffer der Matrikelnummer einsetzen
    
    int j = f(i);
    cout << "HP1: " << i << " " << j << endl;
    
    int *p = &i;
    cout << "HP2: " << *p << endl;
    
    j = f(p);
    cout << "HP3: " << i << " " << j << endl;
    
    cout << "HP4: " << f(6, 3) << endl;
}
