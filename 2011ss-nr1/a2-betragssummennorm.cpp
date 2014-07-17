/*
 * Programmieren fuer Physiker: C++
 * Sommersemester 2011, Klausur 1
 *
 * Aufgabe 2
 * Betragssummennorm
 */

/* Loesung fuer 2(a) (iterativ) */

double bnorm(double vec[], int n) {

    double result = 0;
    for(int i=0; i<n; i++) {
        result += abs(vec[i]);
    }

    return result;
}


/* Loesung fuer 2(b) (rekursiv) */

double bnormrec(double vec[], int n) {

    if(n == 0) return 0.0;
    else return (abs(vec[n-1]) + bnormrec(vec, n-1));
}
