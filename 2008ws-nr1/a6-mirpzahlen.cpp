/*
 * Programmieren fuer Physiker: C++
 * Wintersemester 2008/2009, Klausur 1
 *
 * Aufgabe 6
 * Mirpzahlen
 */

#include <iostream>

using namespace std;

bool istPrim(long z) {
    
    // ueberpruefe alle Zahlen zwischen 2 und sqrt(z) darauf,
    // ob z durch sie teilbar ist
    for(long i=2; i*i <= z; i++) {
        // nicht-trivialer Faktor gefunden, z ist nicht prim
        if(z % i == 0) return false;
    }
    
    // es ex. kein nicht-trivialer Faktor, z ist prim
    return true;
}

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

int main() {

    // Zahl einlesen
    long n;
    cout << "Bitte eine positive Zahl eingeben: ";
    cin >> n;

    // Ergebnis berechnen ausgeben
    cout << "Die Zahl ist ";
    if(istPrim(n) && istPrim(flip(n))) cout << "eine";
    else cout << "keine";
    cout << " Mirpzahl." << endl;

    return 0;
}
