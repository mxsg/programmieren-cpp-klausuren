/*
 * Programmieren fuer Physiker: C++
 * Sommersemester 2011, Klausur 1
 *
 * Aufgabe 4
 * Intervall-Klasse
 */

#include <iostream>

using namespace std;

/* Im Folgenden war die Klasse intervall zu ergaenzen. */

class intervall {

    private:
        double left, right;

    public:
        intervall(double a, double b);

        void operator+=(double delta);
        bool is_contained_in(intervall i);

    friend double size(intervall i);
};

intervall::intervall(double a, double b) {
    left = a; right = b;
}

void intervall::operator+=(double delta) {
    left += delta;
    right += delta;
}

bool intervall::is_contained_in(intervall i) {
    return (left >= i.left && right <= i.right);
}

double size(intervall i) {
    return (i.right - i.left);
}


/* Das folgende Hauptprogramm war in der Aufgabe gegeben. */

int main() {
    intervall i1(1.5, 3);   // ein Intervall mit gegeben Grenzen
    intervall i2(2, 5);     // ... und noch eines

    i1 += 1;                // Intervall wird verschoben (beide Grenzen),
                            // dabei wird i1 selbst veraendert

    cout << "Intervall i2 hat die Groesse " << size(i2) << endl;

    if(i1.is_contained_in(i2))
        cout << "i1 ist mit dem gesamten Wertebereich innerhalb i2" << endl;
}
