/*
 * Programmieren fuer Physiker: C++
 * Wintersemester 2006/2007, Klausur 2
 *
 * Aufgabe 4
 * Was wird ausgegeben?
 */

#include <iostream>

using namespace std;

int f(int &z) {
    z += 1;
    cout << "UP1: " << z << endl;
    return z*3;
}

int f(double z) {
    z += 1;
    cout << "UP2: " << z << endl;
    return int(z*2);
}

int f(int r, int s) {
    if(s == 0) return 0;
    else return r + f(r+1, s-1);
}

int main() {
    int i = 0; // hier letzte Ziffer der Matrikelnummer einsetzen
    double p = i*1.1;

    int j = f(i);
    cout << "HP1: " << i << " " << j << endl;

    j = f(p);
    cout << "HP2: " << p << " " << j << endl;

    cout << "HP3: " << f(6, 3) << endl;
}
