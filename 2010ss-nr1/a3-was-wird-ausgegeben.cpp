/*
 * Programmieren fuer Physiker: C++
 * Sommersemester 2010, Klausur 1
 *
 * Aufgabe 3
 * Was wird ausgegeben?
 */

#include <iostream>

using namespace std;

int f(int &p) {
    p -= 1;
    if(p==0) return 1;
    int q = p;
    return f(p)*q;
}

int f(int *p) {
    int q = *p;
    q += 2;
    *p += 3;
    return q + 5;
}

int main() {
    int a1 = 0; // hier letzte Ziffer der Matrikelnummer einsetzen
    int a2 = 4 + (a1 % 10)/100;

    int a3 = f(&a1);
    cout << "Main1: " << a1 << ", " << a3 << endl;
    a3 = f(a2);
    cout << "Main2: " << a2 << ", " << a3 << endl;
}
