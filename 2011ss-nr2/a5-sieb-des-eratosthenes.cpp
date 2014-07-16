/*
 * Programmieren fuer Physiker: C++
 * Sommersemester 2011, Klausur 2
 *
 * Aufgabe 5
 * Sieb des Eratosthenes
 */

#include <iostream>

using namespace std;

int main() {

    // obere Grenze einlesen
    int n;
    cout << "Bitte eine obere Grenze eingeben: ";
    cin >> n;

    // dynamisches bool-Feld allokieren
    bool *array = new bool[n+1];

    // Feld auffuellen; 0, 1 sind nicht prim
    array[0] = false; array[1] = false;
    for(int i=2; i <= n; i++) array[i] = true;

    int p = 2;
    
    while(p*p <= n) {
        // Vielfache von p streichen
        for(int j=2; j*p <= n; j++) {
            array[j*p] = false;
        }

        // naechsten Wert fuer p suchen
        do { p++; } while(!array[p]);
    }

    // Zahlen ausgeben
    cout << "Gefundene Primzahlen: " << endl;
    for(int i=0; i<n; i++) {
        if(array[i]) cout << i << " ";
    }
    cout << endl;

    // dynamisch allokiertes Feld loeschen
    delete[] array;

    return 0;
}
