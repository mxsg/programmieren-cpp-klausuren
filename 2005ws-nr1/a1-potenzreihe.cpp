/*
 * Programmieren fuer Physiker: C++
 * Wintersemester 2005/2006, Klausur 1
 *
 * Aufgabe 1
 * Potenzreihe
 */

#include <iostream>
#include <cmath>

using namespace std;

int main() {

    // Zahlen einlesen
    int n;
    cout << "Bitte obere Grenze n eingeben: ";
    cin >> n;
    double x;
    cout << "Bitte Stelle x eingeben: ";
    cin >> x;

    // Summe berechnen
    double result = 0;
    for(int k=1; k <= n; k++) {
        result += exp(-k*x)/(k*k);
    }

    cout << "Wert der Summe: f_" 
        << n << "(" << x << ") = " << result << endl;

    return 0;
}
