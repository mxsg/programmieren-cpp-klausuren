/*
 * Programmieren fuer Physiker: C++
 * Sommersemester 2011, Klausur 2
 *
 * Aufgabe 4
 * Klasse für Polarkoordinaten
 */

#include <iostream>
#include <cmath>

using namespace std;

/* Hier war die Klasse polar2d zur ergaenzen. */

class polar2d {

    private:
        double r, phi;

    public:
        polar2d(double radius, double winkel);

        void operator*=(double c);
        void rotate(double winkel);

    friend double get_x(polar2d vec);
};

polar2d::polar2d(double radius, double winkel) {
    r = radius;
    phi = winkel;
}

void polar2d::operator*=(double c) {
    r *= c;
}

void polar2d::rotate(double winkel) {
    phi += winkel;
}

double get_x(polar2d vec) {
    return (vec.r * cos(vec.phi));
}

/* Das folgende Hauptprogramm war in der Aufgabe gegeben. */

int main() {
    const double pi = 3.141592654;

    polar2d p1(1.0, pi/2);  // vereinbare einen Punkt durch Radius und Winkel
    p1 *= 2.0;              // aendere Radius von p1 um angegebenen Faktor
    p1.rotate(-pi/6);       // rotiere p1 um das Winkelargument
    cout << "Kartesische x-Koordinate: " << get_x(p1) << endl;
}
