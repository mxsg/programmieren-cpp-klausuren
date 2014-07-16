/*
 * Programmieren fuer Physiker: C++
 * Sommersemester 2012, Klausur 1
 *
 * Aufgabe 3
 * Was wird ausgegeben?
 */

#include <iostream>

using namespace std;

int f(int *p) {
    (*p) += 3;
    return 7/2;
}

int f(int &z) {
    z += 5;
    return z*2;
}

int main() {
    int i1 = 0; // letzte Ziffer der Matrikelnummer einsetzen

    int i2 = i1;

    int j = f(i1);
    cout << "Alpha: " << i1 << " " << j << endl;

    j = f(&i2);
    cout << "Beta: " << i2 << " " << j << endl;
}
