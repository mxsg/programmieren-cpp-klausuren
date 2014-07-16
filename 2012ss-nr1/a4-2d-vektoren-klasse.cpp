/*
 * Programmieren fuer Physiker: C++
 * Sommersemester 2012, Klausur 1
 *
 * Aufgabe 4
 * 2D-Vektoren-Klasse
 */

#include <iostream>
#include <cmath>

using namespace std;

/* Die folgende Klasse war zu ergaenzen. */

class vec2d {

    private:
        double x, y;

    public:
        vec2d();
        vec2d(double px, double py);

        vec2d operator+(vec2d vec);
        void norm();

    friend double skp(vec2d vec1, vec2d vec2);
};

vec2d::vec2d() {
    x = 0.0; y = 0.0;
}

vec2d::vec2d(double px, double py) {
    x = px; y = py;
}

vec2d vec2d::operator+(vec2d vec) {
    return vec2d(this->x + vec.x, this->y + vec.y);
}

void vec2d::norm() {
    double length = sqrt(x*x + y*y);

    x /= length;
    y /= length;
}

double skp(vec2d vec1, vec2d vec2) {
    return (vec1.x*vec2.x + vec1.y*vec2.y);
}

/* Das folgende Hauptprogramm war in der Aufgabe gegeben. */

int main() {

    vec2d v1(1.0, 2.0);
    vec2d v2(3.0, -4.0);
    vec2d sum = v1 + v2;    // Summe zweier Vektoren berechnen
    sum.norm();             // Vektor auf Laenge 1 normieren
    cout << "Das Skalarprodukt von v1 und v2 ist: " << skp(v1, v2) << endl;
}
