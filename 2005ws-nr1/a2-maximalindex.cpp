/*
 * Programmieren fuer Physiker: C++
 * Wintersemester 2005/2006, Klausur 1
 *
 * Aufgabe 2
 * Array-Maximalindex bestimmen
 */

#include <cmath>

using namespace std;

int getMaxIndex(double array[], int a, int b) {

    int maxIndex = a;
    // durch vorgegebenen Bereich iterieren
    for(int i = a; i <= b; i++) {
        // Betraege vergleichen
        if(abs(array[i]) > abs(array[maxIndex])) {
            maxIndex = i;
        }
    }

    return maxIndex;
}
