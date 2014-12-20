/*
 * Programmieren fuer Physiker: C++
 * Wintersemester 2005/2006, Klausur 1
 *
 * Aufgabe 4
 * Was wird ausgegeben?
 */

#include <iostream>

using namespace std;

int f(int &x) {
    x += 1;
    cout << "UP1: " << x << endl;
    return x*2;
}

int f(double x) {
    x += 2.0;
    cout << "UP2: " << x << endl;
    return x*2;
}

int f(int r, int s) {
    if(s == 0) return 0;
    else return r + f(r+1, s-1);
}

int main() {
    int i = 0; // hier letzte Ziffer der Matrikelnummer einsetzen
    double a = i*2.2;

    int b = f(a);
    cout << "HP: " << a << " " << b << endl;

    int j = f(i);
    cout << "HP: " << i << " " << j << endl;

    int *p;
    p = &i;
    cout << "HP: " << *p << endl;
    f(i);
    cout << "HP: " << *p << endl;

    cout << "HP: " << f(4, 3) << endl;
}
