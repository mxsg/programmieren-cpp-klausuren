/*
 * Programmieren fuer Physiker: C++
 * Wintersemester 2008/2009, Klausur 1
 *
 * Aufgabe 5
 * Was wird ausgegeben?
 */

#include <iostream>

using namespace std;

void f(int *q) {
    int i7 = *q;
    (*q) += 3;
    i7 += 2;
    cout << "Fkt1: " << i7 << endl;
}

void f(int &q) {
    q += 1;
    cout << "Fkt2: " << q << endl;
}

int f(int r, int s) {
    if(r <= s) return 0;
    return (r-s) + f(r-1, s+1);
}

int main() {
    int i1 = 0; // hier die letzte Ziffer der Matrikelnummer einsetzen
    int i2 = i1;
    f(i1);
    cout << "Main1: " << i1 << endl;
    f(&i2);
    cout << "Main2: " << i2 << endl;
    cout << "Main3: " << f(7, 3) << endl;
}
