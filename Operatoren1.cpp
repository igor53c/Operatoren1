// Operatoren1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void main()
{
    int ganzzahlig = 17;
    double gleitkomma = 0.16;

    cout << "Ganzzahlwert: " << ganzzahlig << endl;
    cout << "Gleitkommawert: " << gleitkomma << endl;
    cout << "Multiplikation: " << gleitkomma * ganzzahlig << endl;

    int wert = 27, teiler = 5;
    int restwert, quotient;

    quotient = wert / teiler;

    cout << "Quotient: " << quotient << endl;  // 5

    restwert = wert % teiler;

    cout << "Restwert: " << restwert << endl;

    double betrag = 3 * 6.60 + 2 * 1.90 + 3.10;

    cout << "Rechnungsbetrag: " << betrag << endl;      // 26.7

    setlocale(LC_ALL, "German");

    printf("Rechnungsbetrag: %1.2f\n", betrag);

    double verbrauch = 345 / 100 * 7.5;

    printf("Verbrauch: %1.2f\n", verbrauch);  // 345 / 100 = 3 * 7.5 = 22.5  falsch

    verbrauch = 345.0 / 100 * 7.5;

    printf("Verbrauch: %1.2f\n", verbrauch);

    int km = 345;

    verbrauch = static_cast<double>(km) / 100 * 7.5;

    printf("Verbrauch: %1.2f\n", verbrauch);

    int a = 0, b = 0;

    cout << "a: " << a << ", b: " << b << endl;

    // Postfix
    a++;

    // Präfix
    --b;

    cout << "a: " << a << ", b: " << b << endl;

    b = a++; // 1

    cout << "a: " << a << ", b: " << b << endl; // a = 2

    b = (a++);  // 2

    cout << "a: " << a << ", b: " << b << endl;  // a = 3

    b = --a;  // 2

    cout << "a: " << a << ", b: " << b << endl;  // a = 2

    cout << "a: " << a++ << ", b: " << --b << endl;

    cout << "a: " << a << ", b: " << b << endl;

    b += 2;

    cout << "a: " << a << ", b: " << b << endl;

    double c = 1.5;

    cout << "a: " << a << ", b: " << b << ", c: " << ++c << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
