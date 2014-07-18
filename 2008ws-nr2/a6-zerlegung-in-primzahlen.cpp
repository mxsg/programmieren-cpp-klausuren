/*
 * Programmieren fuer Physiker: C++
 * Wintersemester 2008/2009, Klausur 2
 *
 * Aufgabe 6
 * Zerlegung in zwei Primzahlen
 */

#include <iostream>

using namespace std;

bool istPrim(int z) {

    // ueberpruefe alle Zahlen zwischen 2 und z/2 darauf,
    // ob z durch sie teilbar ist
    for(int i=2; i<=(z/2); i++) {
        // nicht-trivialer Faktor gefunden, z ist nicht prim
        if(z % i == 0) return false;
    }
    
    // es ex. kein nicht-trivialer Faktor, z ist prim
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
