/*
 * Programmieren fuer Physiker: C++
 * Wintersemester 2006/2007, Klausur 2
 *
 * Aufgabe 5
 * Rueckwaerts-Summen-Schoenheit
 */

#include <iostream>

using namespace std;

long flip(long z) {
    long result = z % 10;

    // wiederholen, solange n noch mehr als eine Stelle hat
    // letzte Stelle abtrennen
    while((z /= 10) != 0) {
        // letzte Stelle von n hinten an result anhaengen
        result = 10*result + (z % 10);
    }

    return result;
}

// ueberprueft, ob Zahl nur aus identischen Ziffern besteht
bool schnapszahl(long z) {

    // letzte Ziffer merken
    long digit = z % 10;

    while((z /= 10) > 0) {
        if(z % 10 != digit) return false;
    }

    return true;
}

int main() {

    // Zahl einlesen
    long n;
    cout << "Bitte eine positive Zahl eingeben: ";
    cin >> n;

    // Zahl umdrehen und ausgeben
    long reverse = flip(n);
    cout << "Zahl rueckwaerts gelesen: " << reverse << endl;

    // Ergebnis berechnen und ausgeben
    cout << "Die Zahl ist ";
    if(!schnapszahl(n + reverse)) cout << "nicht ";
    cout << "rueckwaerts-summen-schoen." << endl;
    
    return 0;
}
