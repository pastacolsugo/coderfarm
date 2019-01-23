#include <iostream>

using namespace std;
// Filippo Selvatici

int n, p, v[250050], tot = 0;

int main() {
    // input e output su file
    // DECOMMENTARE per testare la soluzione su training.olinfo.it
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    
    cin >> n >> p;
    for(int i=0; i<n; i++)
        cin >> v[i];

    bool crescente = true; // direzione dell'ascensore
    for(int i=0; i<n-1; i++)
    {
        if(crescente) // ascensore va verso l'alto
        {
            if(v[i] > v[i+1]) // tra i e i+1 c'è una discesa 
            {
                tot++; // aumento di 1 la soluzione
                crescente = !crescente; // ascensore cambia direzione
            }
        }
        else // ascensore va verso il basse
        {
            if(v[i] < v[i+1]) // tra i e i+1 c'è una salita 
            {
                tot++; // aumento di 1 la soluzione
                crescente = !crescente; // ascensore cambia direzione
            }
        }
    }
    tot++; // l'ultimo conviene sempre prenderlo
    cout << tot;
    return 0;
}
