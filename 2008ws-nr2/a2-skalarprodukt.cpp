/*
 * Programmieren fuer Physiker: C++
 * Wintersemester 2008/2009, Klausur 2
 *
 * Aufgabe 2
 * Skalarprodukt
 */

skaprod(double a[], double b[], int n) {
    
    double result = 0.0;
    
    for(int i=0; i<n; i++) {
        result += a[i]*b[i];
    }
    return result;
}
