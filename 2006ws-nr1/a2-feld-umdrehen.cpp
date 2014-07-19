/*
 * Programmieren fuer Physiker: C++
 * Wintersemester 2006/2007, Klausur 1
 *
 * Aufgabe 2
 * Feld umdrehen
 */

// mit Referenzparametern double-Werte tauschen
void swap(double &x, double &y) {
    double tmp = x;
    x = y;
    y = tmp;
}

void reverse(double array[], int n) {

    for(int i=0; i < n/2; i++)
        swap(array[i], array[n-1-i]);
}
