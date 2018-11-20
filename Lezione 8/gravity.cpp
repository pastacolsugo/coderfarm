#include <iostream>
#include <vector> // per i vector
#include <stdio.h> // per i freopen

using namespace std;

int main () {
    // freopen("input.txt", "r", stdin); // lettura da file
    // freopen("output.txt", "w", stdout); // scrittura su file

    int n, premuti = 2; // quello iniziale e quello finale
    vector <int> altezze;

    cin >> n;

    if (n == 1) { // caso speciale, 1 solo pulsante
        cout << 1 << endl;
        return 0;
    }

    for (int i=0; i<n; i++) {
        // leggo tutte le altezze
        int h;
        cin >> h;
        altezze.push_back(h);
    }

    bool direzione;

    // controllo la direzione iniziale
    if (altezze[0] < altezze[1]) {
        direzione = true; // verso l'alto
    } else {
        direzione = false; // verso il basso
    }

    // ho la direzione di primi due elementi
    // partendo dal terzo, controllo se la direzione rispetto al pulsante precedente e' consistente
    for (int i=2; i<n; i++) {
        if (altezze[i-1] > altezze[i] && direzione == true) {
            // direzione verso l'alto
            // l'altezza 'i' e' piu' bassa della 'i-1'
            // = cambio direzione
            premuti = premuti + 1;
            direzione = false;
        } else if (altezze[i-1] < altezze[i] && direzione == false) {
            // direzione verso il basso
            // l'altezza di 'i' e' piu' alta del precedente
            // = cambio di direzione
            premuti = premuti + 1;
            direzione = true;
        }
    }

    cout << premuti << endl;
    return 0;
}
