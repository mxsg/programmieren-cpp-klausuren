/*
 * Programmieren fuer Physiker: C++
 * Wintersemester 2008/2009, Klausur 2
 *
 * Aufgabe 1
 * Fakultaeten
 */

/* Loesung zu 1(a) (iterativ) */

fakultaetIt(int n) {
    
    int result = 1;
    for(int i = 1; i <= n; i++)
        result *= i;

    return result;
}

/* Loesung zu 1(b) (rekursiv) */

fakultaetRek(int n) {

    if(n <= 1) return 1;
    else return (n * fakultaetRek(n-1));
}
