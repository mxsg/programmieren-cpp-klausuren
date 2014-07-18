/*
 * Programmieren fuer Physiker: C++
 * Wintersemester 2006/2007, Klausur 2
 *
 * Aufgabe 3
 * 3d-Vektoren-Klasse
 */

#include <iostream>
#include <cmath>

using namespace std;

/* Hier sollte die Klasse vec3d eingefuegt werden. */

class vec3d {

    private:
        double x, y, z;

    public:
        vec3d(double px, double py, double pz);
        vec3d();

        void norm();
        double operator*(vec3d vec);

    friend vec3d kp(vec3d a, vec3d b);
};

vec3d::vec3d(double px, double py, double pz) {
    x = px; y = py; z = pz;
}

vec3d::vec3d() {
    x = 0; y = 0; z = 0;
}

void vec3d::norm() {
    double length = sqrt(x*x + y*y + z*z);

    x /= length;
    y /= length;
    z /= length;
}

double vec3d::operator*(vec3d vec) {
    return (x*vec.x + y*vec.y + z*vec.z);
}

vec3d kp(vec3d a, vec3d b) {

    double kpx = a.y*b.z - b.y*a.z;
    double kpy = a.z*b.x - a.x*b.z;
    double kpz = a.x*b.y - a.y*b.x;

    return vec3d(kpx, kpy, kpz);
}

/* Das folgende Hauptprogramm war in der Aufgabe gegeben. */

int main() {
    vec3d v1(1.0, 2.0, 2.0);
    vec3d v2(0.0, 1.0, 0.0);
    vec3d v3;
    v3 = kp(v1, v2); // Kreuzprodukt
    cout << "Laenge v3 vorher: " << sqrt(v3*v3) << endl;
    v3.norm(); // v3 auf Laenge 1 normieren
    cout << "Laenge v3 nachher: " << sqrt(v3*v3) << endl;
    cout << "Ist v3 senkrecht auf (v1, v2)? " << v3*v1 << " " << v3*v2 << endl;
}
