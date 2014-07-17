/*
 * Programmieren fuer Physiker: C++
 * Sommersemester 2010, Klausur 1
 *
 * Aufgabe 5
 * Froehliche Zahlen
 */

#include <iostream>

using namespace std;

int zqs(int n) {
    int result = 0;
    int digit;

    while(n > 0) {
        digit = n % 10; // letzte Ziffer abspalten
        result += digit*digit; // zu Ziffernquadratsumme addieren
        n /= 10; // letzte Ziffer entfernen
    }

    return result;
}

bool istFroehlich(int n) {

    // Endlosschleife, bis einer der Faelle erreicht ist
    while(true) {
        n = zqs(n);

        if(n == 1) return true; // Folgenwert 1: froehlich
        else if(n == 4) return false; // Folgenwert 4: Zyklus
    }
}

int main() {

    // Zahl einlesen
    int n;
    cout << "Bitte eine Zahl eingeben: ";
    cin >> n;

    // Ergebnis berechnen und ausgeben
    cout << "Die Zahl ist ";
    if(!istFroehlich(n)) cout << "nicht ";
    cout << "froehlich!" << endl;

    return 0;
}
