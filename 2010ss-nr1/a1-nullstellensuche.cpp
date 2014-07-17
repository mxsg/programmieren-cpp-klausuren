/*
 * Programmieren fuer Physiker: C++
 * Sommersemester 2010, Klausur 1
 *
 * Aufgabe 1
 * Nullstellensuche
 */

#include <iostream>
#include <cmath>

using namespace std;

double f(double x) {
    return exp(x) - x - 2;
}

int main() {

    double left = 0, right = 3, test;

    do {
        test = (left + right)/2;

        if(f(left)*f(test) > 0) left = test; // Nullstelle ist rechts von test
        else right = test; // NSt. ist links von test

    } while(abs(f(test)) >= 0.01 && right - left >= 0.001);

    cout << "Nullstelle gefunden bei: " << test << endl;

    return 0;
}
