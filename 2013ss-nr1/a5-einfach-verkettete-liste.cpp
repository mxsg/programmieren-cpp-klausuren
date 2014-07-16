/*
 * Programmieren fuer Physiker: C++
 * Sommersemester 2013, Klausur 1
 *
 * Aufgabe 5
 * Einfach verkettete Liste
 */

/* Die folgende Struktur war gegeben. */

struct listelem {
    double zahl;
    listelem *next;
}

/* Die folgenden Funktionen sollten implementiert werden. */

double getvalue(listelem *elem) {
    return elem->zahl;
}

void append(listelem *elem, double newVal) {
    // Liste bis zum letzten Element durchgehen
    while(elem->next != 0)
        elem = elem->next;

    // neues Element erstellen und befüllen
    listelem *newElem = new listelem;
    newElem->zahl = newVal;
    // Nullpointer für neues letzte Element setzen
    newElem->next = 0;

    // neues Element an Liste anhängen
    elem->next = newElem;
}
