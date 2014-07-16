/*
 * Programmieren fuer Physiker: C++
 * Sommersemester 2013, Klausur 1
 *
 * Aufgabe 4
 * Was wird ausgegeben?
 */

#include <iostream>

using namespace std;

int f(double a) {
    a += 2;
    double *p = &a;
    (*p) -= 1.0;
    return 2*a;
}

int f(int &z) {
    z += 5;
    return 3*z;
}

int main() {
    int v1 = 0; // hier letzte Ziffer der Matrikelnummer einsetzen
    double v2 = v1 + 0.1;

    int j = f(v1);
    cout << "Alpha: " << v1 << " " << j << endl;

    j = f(v2);
    cout << "Beta: " << v2 << " " << j << endl;
}
