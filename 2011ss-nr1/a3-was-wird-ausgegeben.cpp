/*
 * Programmieren fuer Physiker: C++
 * Sommersemester 2011, Klausur 1
 *
 * Aufgabe 3
 * Was wird ausgegeben?
 */

#include <iostream>

using namespace std;

char f(char &c) {
    c = 'R';
    return *((&c)-2);
}

char f(char *p) {
    p[2] = 'L';
    p++;
    return *p;
}

int main() {
    // hier die letzten drei Ziffern der Matrikelnummer einsetzen
    char s1[3] = {'0', '0', '0'};

    char s3 = f(s1);
    cout << "Main1: " << s1[2] << ", " << s3 << endl;
    s3 = f(s1[2]);
    cout << "Main2: " << s1[2] << ", " << s3 << endl;
}
