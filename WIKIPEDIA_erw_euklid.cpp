#include <iostream>
using namespace std;

int gcdExtendedRecursive(int a, int b, int* s, int* t)
{
    if (b == 0)
    {
        *s = 1;
        *t = 0;
        return a;
    }
    int s1, t1; // Deklaration der Variablen, die die Ergebnisse des rekursiven Aufrufs speichern
    int d = gcdExtendedRecursive(b, a % b, &s1, &t1); // Rekursiver Aufruf der Methode
    *s = t1;
    *t = s1 - (a / b) * t1;
    return d;
}

int gcdExtendedIterative(int a, int b, int* s, int* t)
{
    *s = 1; // Initialisierung der Zeiger
    *t = 0;
    int u = 0; // Deklaration der lokalen Variablen
    int v = 1;
    while (b != 0)
    {
        int q = a / b;
        int b1 = b; // Variable zum Zwischenspeichern
        b = a - q * b;
        a = b1;
        int u1 = u; // Variable zum Zwischenspeichern
        u = *s - q * u;
        *s = u1;
        int v1 = v; // Variable zum Zwischenspeichern
        v = *t - q * v;
        *t = v1;
    }
    return a;
}

// Hauptfunktion die das Programm ausführt
int main()
{
    int a, b, s, t; // Deklaration der lokalen Variablen
    cout << "Erste Zahl: "; // Ausgabe auf der Konsole
    cin >> a; // Eingabe über die Konsole
    cout << "Zweite Zahl: "; // Ausgabe auf der Konsole
    cin >> b; // Eingabe über die Konsole
    int d = gcdExtendedRecursive(a, b, &s, &t); // Aufruf der rekursiven Funktion
    cout << "Groesster gemeinsamer Teiler: " << s << " * " << a << " + " << t << " * " << b << " = " << d << endl; // Ausgabe auf der Konsole
    d = gcdExtendedIterative(a, b, &s, &t); // Aufruf der iterativen Funktion
    cout << "Groesster gemeinsamer Teiler: " << s << " * " << a << " + " << t << " * " << b << " = " << d << endl; // Ausgabe auf der Konsole
}
