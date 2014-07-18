/*
 * Programmieren fuer Physiker: C++
 * Wintersemester 2008/2009, Klausur 1
 *
 * Aufgabe 1
 * Teilersumme
 */

#include <iostream>

using namespace std;

int main() {

    // Zahl einlesen
    long n;
    cout << "Bitte eine positive Zahl eingeben: ";
    cin >> n;

    long summe = 0;
    for(int i=1; i <= n; i++) {
        // pruefen, ob i ein Teiler von n ist
        if(n % i == 0) summe += i;
    }

    cout << "Teilersumme: " << summe << endl;
}
