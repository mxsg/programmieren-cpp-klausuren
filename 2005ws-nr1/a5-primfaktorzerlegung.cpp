/*
 * Programmieren fuer Physiker: C++
 * Wintersemester 2005/2006, Klausur 1
 *
 * Aufgabe 5
 * Primfaktorzerlegung
 */

#include <iostream>

using namespace std;

void primzerlegung(int a) {

    // Rekursion abbrechen, falls Zahl vollständig faktorisiert
    if(a <= 1) return;

    // mit kleinstem moeglichen Primfaktor beginnen
    // und inkrementieren, bis Primfaktor gefunden
    int i = 2;
    while(a % i != 0) i++;

    // gefundenen Primfaktor ausgeben,
    // Funktion rekursiv aufrufen
    cout << i << " ";
    primzerlegung(a/i);
}

int main() {

    // Zahl einlesen
    int z;
    cout << "Bitte eine Zahl eingeben: ";
    cin >> z;
    
    // Zahl und Primfaktorzerlegung ausgeben
    cout << z << ": ";
    primzerlegung(z);

    cout << endl;
    return 0;
}
