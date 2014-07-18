/*
 * Programmieren fuer Physiker: C++
 * Wintersemester 2008/2009, Klausur 2
 *
 * Aufgabe 4
 * Was wird ausgegeben?
 */

#include <iostream>

using namespace std;

void f(int p, int q) {
    q += 2;
    cout << "Fkt1: " << q << endl;
    if(p > 0) {
        f(p-1, q);
    }
    return;
}

void f(int p, double &q) {
    q+= p;
    cout << "Fkt2: " << q << endl;
    return;
}

int main() {
    int a1 = 0; // hier letzte Ziffer der Matrikelnummer einsetzen
    double a2 = a1 + 0.2;

    f(1, a2);
    cout << "Main1: " << a2 << endl;
    f(1, a1);
    cout << "Main2: " << a1 << endl;
}
