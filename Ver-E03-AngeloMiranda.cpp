#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

// Headers
string toString (double);
int toInt (string);
double toDouble (string);

int main() {
    int n, numero, somma, contatore, media;

    cout << "Inserisci il numero dei valori da sommare" << endl;
    cin >> n;
    somma = 0;
    contatore = 0;
    while (contatore <= n) {
        cout << "Inserisci il numero" << contatore << ":" << endl;
        cin >> numero;
        somma = somma + numero;
        contatore = contatore + 1;
        media = (double) somma / n;
    }
    cout << "La somma di tutti i numeri sono " << somma << endl;
    cout << "La media " << media << endl;
    cout << "I passi sono " << contatore << endl;
    return 0;
}

// The following implements type conversion functions.
string toString (double value) { //int also
    stringstream temp;
    temp << value;
    return temp.str();
}

int toInt (string text) {
    return atoi(text.c_str());
}

double toDouble (string text) {
    return atof(text.c_str());
}
