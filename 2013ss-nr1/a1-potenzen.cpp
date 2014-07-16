/*
 * Programmieren fuer Physiker: C++
 * Sommersemester 2013, Klausur 1
 *
 * Aufgabe 1
 * Potenzen
 */

/* Loesung zu 1(a) (iterativ) */
double potenzIt(double a, int n) {
    double result = 1.0;

    for(int i = 0; i < n; i++) {
        result *= a;
    }

    return result;
}


/* Loesung zu 1(b) (rekursiv) */
double potenzRek(double a, int n) {

    if(n <= 0) return 1.0;
    else return (a*potenzRek(a, n-1));
}
