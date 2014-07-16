/*
 * Programmieren fuer Physiker: C++
 * Sommersemester 2012, Klausur 1
 *
 * Aufgabe 1
 * Pellgleichung
 */

#include <iostream>

using namespace std;

int main() {

    cout << "Bitte eine Zahl eingeben: ";

    int d = 0;
    cin >> d;

    int lsgCount = 0;

    for(int x = 0; x <= 100; x++) {
        for(int y = 0; y <= 100; y++) {
            
            if(x*x - d*y*y == 1) {
                cout << "Loesung gefunden: x=" << x << ", y=" << y << endl;
                lsgCount++;
            }
        }
    }

    cout << "Anzahl der gefundenen Loesungen: " << lsgCount << endl;

    return 0;
}
