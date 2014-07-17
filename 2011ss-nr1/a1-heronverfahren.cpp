/*
 * Programmieren fuer Physiker: C++
 * Sommersemester 2011, Klausur 1
 *
 * Aufgabe 1
 * Heronverfahren
 */

#include <iostream>
#include <cmath>

using namespace std;

int main() {

    // Zahl einlesen
    double a;
    cout << "Bitte eine positive Zahl eingeben: ";
    cin >> a;

    // Abbruchgrenze definieren
    double epsilon = 0.001;

    // iteratives Verfahren durchfuehren
    double xn = 1;
    do {
        xn = (xn + a/xn)/2.0;
    } while(abs(xn*xn - a) > epsilon);

    // Ergebnis ausgeben
    cout << "Berechnete Wurzel: " << xn << endl;
    return 0;
}
