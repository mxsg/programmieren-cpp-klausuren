/*
 * Programmieren fuer Physiker: C++
 * Sommersemester 2011, Klausur 2
 *
 * Aufgabe 3
 * Was wird ausgegeben?
 */

#include <iostream>

using namespace std;

int f(int *a) {
    *a += 2;
    cout << "Lima: " << *a << endl;
    return *a+3;
}

int f(int &a) {
    a -= 1;
    cout << "Paris: " << a << endl;
    if(a >= 0) return f(&a);
    else return 23;
}

int main() {
    int m7 = 0; // hier letzte Ziffer der Matrikelnummer einsetzen

    int m8 = 11;

    int q1 = f(&m7);
    cout << "Rom: " << m7 << endl;
    q1 = f(m8);
    cout << "Tokio: " << q1 << endl;
}
