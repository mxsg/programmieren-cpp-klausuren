/*
 * Programmieren fuer Physiker: C++
 * Wintersemester 2006/2007, Klausur 2
 *
 * Aufgabe 1
 * Temperaturumrechnung
 */

#include <iostream>

using namespace std;

int main() {

    // Temperatur einlesen
    double celsius;
    cout << "Bitte eine Temperatur in Grad Celsius eingeben: ";
    cin >> celsius;

    // Temp. in Fahrenheit berechnen
    double fahrenheit = 1.8 * celsius + 32;

    // Ergebnis ausgeben
    cout << "Temperatur in Grad Fahrenheit: " << fahrenheit << endl;

    return 0;
}
