/*
 * Programmieren fuer Physiker: C++
 * Sommersemester 2012, Klausur 1
 *
 * Aufgabe 2
 * Nullfeld?
 */

/* Loesung zu 2(a) (iterativ) */
bool is_zero(double array[], int n) {

    for(int i=0; i<n; i++) {
        if(array[i] != 0.0) return false;
    }

    return true;
}

/* Loesung zu 2(b) (rekursiv) */
bool is_zero_rec(double array[], int n) {

    if(array[0] != 0.0) return false;
    else return is_zero_rec(&array[1], n-1);
}
