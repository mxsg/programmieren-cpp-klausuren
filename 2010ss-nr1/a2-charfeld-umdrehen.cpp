/*
 * Programmieren fuer Physiker: C++
 * Sommersemester 2010, Klausur 1
 *
 * Aufgabe 2
 * Charfeld umdrehen
 */

// mit Referenzparametern char-Werte tauschen
void swap(char &x, char &y) {
    char tmp = x;
    x = y;
    y = tmp;
}

void reverse(char array[], int n) {

    for(int i=0; i < n/2; i++)
        swap(array[i], array[n-1-i]);
}
