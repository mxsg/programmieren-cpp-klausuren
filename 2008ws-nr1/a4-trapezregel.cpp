/*
 * Programmieren fuer Physiker: C++
 * Wintersemester 2008/2009, Klausur 1
 *
 * Aufgabe 4
 * Trapezregel
 */

double trapezIntegral(double (*f)(double x), double a, double b) {

    return (b - a)/2 * (f(a) + f(b));
}
