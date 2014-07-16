/*
 * Programmieren fuer Physiker: C++
 * Sommersemester 2011, Klausur 2
 *
 * Aufgabe 2
 * Numerisches Zeichenfeld?
 */

bool is_numeric(char array[], int n) {

    for(int i=0; i<n; i++) {
        // liegt aktueller Wert ausserhalb der
        // Grenzen numerischer Zeichen?
        if(array[i] < '0' || array[i] > '9')
            return false;
    }

    // alle Zeichen im Array wurden ueberprueft, sind numerisch
    return true;
}
