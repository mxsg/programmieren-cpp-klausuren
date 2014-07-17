/*
 * Programmieren fuer Physiker: C++
 * Sommersemester 2010, Klausur 1
 *
 * Aufgabe 4
 * Rechteck-Klasse
 */

#include <iostream>

using namespace std;

/* Im Folgenden war die Klasse rechteck zu ergaenzen. */

class rechteck {

    private:
        double width, height;

    public:
        rechteck(double w, double h);

        void operator*=(double c);
        bool bedeckt(rechteck r);

    friend double flaeche(rechteck r);
};

rechteck::rechteck(double w, double h) {
    width = w; height = h;
}

void rechteck::operator*=(double c) {
    width *= c;
    height *= c;
}

bool rechteck::bedeckt(rechteck r) {
    return (width >= r.width && height >= r.height);
}

double flaeche(rechteck r) {
    return (r.width * r.height);
}

/* Das folgende Hauptprogramm war in der Aufgabe gegeben. */

int main() {
    
    rechteck r1(1.7, 2);    // Rechteck mit Breite, Hoehe vereinbaren
    rechteck r2(3, 3.5);    // ... und noch eines
    r1 *= 2;                // beide Laengen des Rechteck-Arguments skalieren
                            // dabei wird r1 selbst veraendert
    if(r1.bedeckt(r2))
        cout << "Rechteck 1 kann Rechteck 2 vollst. ueberdecken." << endl;

    cout << "Die Flaeche von Rechteck 1 ist " << flaeche(r1) << endl;
}
