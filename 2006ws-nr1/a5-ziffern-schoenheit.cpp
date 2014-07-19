/*
 * Programmieren fuer Physiker: C++
 * Wintersemester 2006/2007, Klausur 1
 *
 * Aufgabe 5
 * Ziffern-Schoenheit
 */

#include <iostream>

using namespace std;

int main() {

    // Zahl einlesen
    long zahl;
    cout << "Bitte eine positive Zahl einlesen: ";
    cin >> zahl;
    
    int digitCount[10];
    int n = 1;
    for(int i=0; i<10; i++) digitCount[i] = 0;

    digitCount[zahl % 10]++; // letzte Ziffer zaehlen

    // so lange n noch aus mehr als einer Ziffer besteht,
    // letzte Stelle abtrennen
    while((zahl /= 10) > 0) {
        // letzte Ziffer zaehlen
        digitCount[zahl % 10]++;
        n++;
    }

    // merken, ob Zahl ziffern-schoen ist
    bool ziffernschoen = true;

    for(int i=0; i<10; i++) {
        // alle Ziffern ausgeben, aber nur Ziffern
        // zwischen 1 und n auf fuer Ziffernschoenheit
        // ueberpruefen
        if(i >= 1 && i <= n && digitCount[i] != 1)
            ziffernschoen = false;
        cout << "Ziffer " << i << ": " << digitCount[i] << " mal" << endl;
    }

    // Ergebnis ausgeben
    cout << "Die Zahl ist ";
    if(!ziffernschoen) cout << "nicht ";
    cout << "ziffern-schoen." << endl;

    return 0;
}
