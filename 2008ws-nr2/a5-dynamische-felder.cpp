/*
 * Programmieren fuer Physiker: C++
 * Wintersemester 2008/2009, Klausur 2
 *
 * Aufgabe 5
 * Dynamische Felder
 */

int main() {
    int n = 1000;

    /* Loesung zu 5a):
     *
     * Allokierung eines dynamischen Felder von n double-Variablen.
     * Deklarieren Sie dabei auch die Feldvariable, den Namen des
     * Feldes koennen Sie selbst bestimmen.
     */
    double *array = new double[n];

    // alternativ auch in zwei Zeilen:
    // double *array;
    // array = new double[n];


    /* Loesung zu 5b):
     *
     * Freigabe des Feldspeichers (Feld aus Teil (a)).
     */
    delete[] array;
}
