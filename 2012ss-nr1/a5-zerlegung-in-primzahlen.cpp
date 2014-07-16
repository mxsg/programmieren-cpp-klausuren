/*
 * Programmieren fuer Physiker: C++
 * Sommersemester 2012, Klausur 1
 *
 * Aufgabe 5
 * Zerlegung in zwei Primzahlen
 */

#include <iostream>

using namespace std;

bool istPrim(int z) {

    // ueberpruefe alle Zahlen zwischen 2 und z/2,
    // ob z durch sie teilbar ist
    for(int i=2; i<=(z/2); i++) {
        // falls nicht-trivialer Faktor gefunden, ist z nicht prim
        if(z % i == 0) return false;
    }
    
    // falls kein nicht-trivialer Faktor existiert, ist z prim
    return true;
}

int main() {

    // Zahl einlesen
    int z;
    cout << "Bitte eine Zahl eingeben: ";
    cin >> z;

    // alle moeglichen Zerlegungen durchprobieren
    for(int i=2; i<=(z/2); i++) {
        
        if(istPrim(i) && istPrim(z-i)) {
            // beide Zahlen der Zerlegung sind prim
            cout << i << "+" << z-i << " ";
        }
    }

    cout << endl;
    return 0;
}
