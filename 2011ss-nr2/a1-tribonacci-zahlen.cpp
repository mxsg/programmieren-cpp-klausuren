/*
 * Programmieren fuer Physiker: C++
 * Sommersemester 2011, Klausur 2
 *
 * Aufgabe 1
 * Tribonacci-Zahlen
 */

/* Loesung zu 1(a) (rekursive Bestimmung der Tribonacci-Zahlen) */

int tribo(int n) {

    if(n <= 2) return 1;
    else return (tribo(n-1) + tribo(n-2) + tribo(n-3));
}


/* Loesung zu 1(b):
 *
 * "Warum wird in diesem Falle die einfache rekursive Lösung langsamer sein
 * als eine geeignet programmierte iterative Lösung? Geben Sie bitte eine
 * kurze Begründung in Worten (ein oder zwei Sätze genuegen)."
 *
 * Für die Tribonacci-Zahlen werden viele Glieder der Folge durch die
 * rekursive Berechnung wie oben doppelt berechnet, was bei iterativer 
 * Berechnung nicht notwendig ist.
 */
