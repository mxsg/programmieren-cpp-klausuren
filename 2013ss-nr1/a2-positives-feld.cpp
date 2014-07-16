/*
 * Programmieren fuer Physiker: C++
 * Sommersemester 2013, Klausur 1
 *
 * Aufgabe 2
 * Positives Feld?
 */

bool ist_positiv(double array[], int n) {

    for(int i=0; i<n; i++) {
        // bei nicht-positiver Zahl Suche sofort abbrechen,
        // false zurückgeben
        if(array[i] <= 0) return false;
    }
    
    // ganzes Feld wurde ueberprueft, alle Zahlen sind positiv
    return true;
