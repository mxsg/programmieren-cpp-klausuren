/*
 * Programmieren fuer Physiker: C++
 * Wintersemester 2006/2007, Klausur 2
 *
 * Aufgabe 2
 * Maximumnorm
 */

double MaximumNorm(double array[], int n) {

    double max = 0;
    double absElem;

    for(int i=0; i<n; i++) {
        absElem = abs(array[i]);
        if(absElem > max) max = absElem;
    }

    return max;
}
