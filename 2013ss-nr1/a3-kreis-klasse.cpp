/*
 * Programmieren fuer Physiker: C++
 * Sommersemester 2013, Klausur 1
 *
 * Aufgabe 3
 * Kreis-Klasse
 */

#include <iostream>
#include <cmath>

using namespace std;

/* Im Folgenden war die Klasse Kreis zu ergänzen. */

class kreis {

    private:
        double x, y, r;

    public:
        kreis(double newr);

        void move(double deltax, double deltay);
        kreis operator*=(double c);

    friend bool enthaelt_ursprung(kreis k);
};

kreis::kreis(double newr) {
    // Radius setzen und Kreis um Ursprung zentrieren
    r = newr;
    x = 0;
    y = 0;
}

void kreis::move(double deltax, double deltay) {
    x += deltax;
    y += deltay;
}

bool enthaelt_ursprung(kreis k) {
    return (k.x*k.x + k.y*k.y) <= k.r*k.r;
} 

/* Das folgende Hauptprogramm war in der Aufgabe gegeben. */

int main() {

    kreis k1(4.0);      // Kreis: mit Radius 4, Mittelpunkt ist (0,0)
    k1.move(2.0, 3.0);  // Mittelpunkt um (2,3) verschieben
    k1 *= 3.0;          // Radius mit Faktor multiplizieren

    if(enthaelt_ursprung(k1))
        cout << "Kreis k1 enthaelt den Ursprung" << endl;
}
