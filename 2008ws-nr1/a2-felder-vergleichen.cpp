/*
 * Programmieren fuer Physiker: C++
 * Wintersemester 2008/2009, Klausur 1
 *
 * Aufgabe 2
 * Felder vergleichen
 */

bool sindIdentisch(int a[], int b[], int n) {

    for(int i=0; i<n; i++) {
        // falls ungleiche Zahlen gefunden wurden,
        // sind Felder nicht identisch: Suche abbrechen
        if(a[i] != b[i]) return false;
    }

    // komplette Felder verglichen, alle Zahlen sind identisch
    return true;
}
