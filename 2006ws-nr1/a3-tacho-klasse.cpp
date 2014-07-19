/*
 * Programmieren fuer Physiker: C++
 * Wintersemester 2006/2007, Klausur 1
 *
 * Aufgabe 3
 * Tachometer-Klasse
 */

#include <iostream>

using namespace std;

/* Hier sollte die Klasse tacho ergaenzt werden. */

class tacho {

    private:
        double strecke, zeit;

    public:
        tacho(double s, double t);

        void operator+=(tacho t);
        double get_dist();

    friend double avg_speed(tacho t);
};

tacho::tacho(double s, double t) {
    strecke = s; zeit = t;
}

void tacho::operator+=(tacho t) {
    strecke += t.strecke;
    zeit += t.zeit;
}

double tacho::get_dist() {
    return strecke;
}

double avg_speed(tacho t) {
    return t.strecke/t.zeit;
}

/* Das folgende Hauptprogramm war in der Aufgabe aufgefuehrt. */

int main() {
    
    tacho trip(0, 0);
    trip += tacho(2000, 413.5);     // Tram Uni -> Zoo, 2 km, 413.5 sec
    trip += tacho(547.5, 800.3);    // zu Fuss im Zoo, 547.5 m, 800.3 sec
    trip += tacho(2000, 415);       // Tram zur Uni, 2 km, 415 sec

    cout << "Gesamtstrecke: " << trip.get_dist() << endl;
    cout << "Durchschnitts-Geschwindigkeit: " << avg_speed(trip) << endl;
}
