/*
 * Programmieren fuer Physiker: C++
 * Wintersemester 2008/2009, Klausur 2
 *
 * Aufgabe 3
 * Minuten und Sekunden
 */

#include <iostream>

using namespace std;

/* Hier war die Klasse minsek zu ergaenzen. */

class minsek {

    private:
        int min, sek;

    public:
        minsek(int m, int s);

        void operator+=(minsek ms);

    friend int get_min(minsek ms);
    friend int get_sek(minsek ms);
};

minsek::minsek(int m, int s) {
    min = m; sek = s;
}

void minsek::operator+=(minsek ms) {
    // bei Sekunden Übertrag ignorieren
    sek = (sek + ms.sek) % 60;
    // bei Minuten zusaetzlich Sekunden-Uebertrag addieren
    min += ms.min + (sek + ms.sek) / 60;
}

int get_min(minsek ms) {
    return ms.min;
}

int get_sek(minsek ms) {
    return ms.sek;
}

/* Das Hauptprogramm war in der Aufgabe gegeben. */

int main() {

    minsek triathlon(0, 0);         // ein Nano-Triathlon
    triathlon += minsek(2, 41);     // Schwimmen, 2:41
    triathlon += minsek(1, 33);     // Radfahren, 1:33
    triathlon += minsek(3, 27);     // Laufen, 3:27

    cout << "Gesamtzeit: " << get_min(triathlon) << " Minuten"
        << " und " << get_sek(triathlon) << " Sekunden" << endl;
}
