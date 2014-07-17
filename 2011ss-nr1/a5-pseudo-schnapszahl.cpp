/*
 * Programmieren fuer Physiker: C++
 * Sommersemester 2011, Klausur 1
 *
 * Aufgabe 5
 * Pseudo-Schnapszahl
 */

#include <iostream>

using namespace std;

bool istPseudoSchnapszahl(int n) {

    bool ziffern[10];
    for(int i=0; i<10; i++) ziffern[i] = false;

    while(n > 0) {
        ziffern[n % 10] = true;
        n /= 10;
    }

    // Anzahl unterschiedliche Ziffern zaehlen
    int ziffernCount = 0;
    for(int i=0; i<10; i++) {
        if(ziffern[i]) ziffernCount++;
    }
    return ziffernCount <= 2;
}

int main() {

    // Zahl einlesen
    int n;
    cout << "Bitte eine Zahl eingeben: ";
    cin >> n;

    cout << "Die Zahl ist ";
    if(istPseudoSchnapszahl(n)) cout << "eine";
    else cout << "keine";
    cout << " Pseudo-Schnapszahl." << endl;

    return 0;
}
