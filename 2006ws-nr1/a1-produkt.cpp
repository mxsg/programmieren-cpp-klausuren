/*
 * Programmieren fuer Physiker: C++
 * Wintersemester 2006/2007, Klausur 1
 *
 * Aufgabe 1
 * Produkt
 */

#include <iostream>

using namespace std;

int main() {

    // Zahl einlesen
    int n;
    cout << "Bitte eine obere Grenze eingeben: ";
    cin >> n;

    // Summe berechnen
    double result = 1;
    for(int k=1; k <= n; k++) {
        result *= 1 + 1.0/(k*k);
    }

    cout << "Wert der Summe: " << result << endl;

    return 0;
}
