// Example program
#include <iostream>
#include <utility>
#include <vector>

using namespace std;

int n, c, h, s;
vector <vector<pair<int,int> > > grafo;

vector <bool> visitato;
 
/*
    la funzione 'percorri' risponde alla domanda:
        "Quanto mi costa arrivare da Spike, se parto da nodo?"

    Per rispondere a questa domanda, SEMPLIFICA il problema.

    Io so che, partendo da 'nodo', ho una strada OBBLIGATORIA.

    Percorrere la strada obbligatoria costa sempre 1.
    La strada obbligatoria mi porta in un nuovo nodo.

    Qualunque sia il nuovo nodo, posso dire che il costo per arrivare da spike sara':
        1 per arrivare al nuovo nodo
    +   X per arrivare dal nuovo nodo a Spike

    Come calcolo il costo X?

    Usando di nuovo percorri! Questa volta con il nuovo nodo

    Per questo la funzione restituisce percorri(prossimoNodo) + 1; 
*/
int percorri(int nodo) {
    if (visitato[nodo]) {
        return -1;
    }

    if (nodo == s) {
        return 0;
    }

    visitato[nodo] = true;
    
    int prossimoNodo = grafo[nodo][0].first;
    int prossimaLuminosita = grafo[nodo][0].second;
    
    for (int i=1; i<grafo[nodo].size(); i++) {
        if (grafo[nodo][i].second < prossimaLuminosita) {
            prossimoNodo = grafo[nodo][i].first;
            prossimaLuminosita = grafo[nodo][i].second;
        }
    }
    
    int costoDalProssimoNodo = percorri(prossimoNodo);

    if (costoDalProssimoNodo == -1) {
        return -1;
    }

    return costoDalProssimoNodo + 1;  
}

int main() {
    /* leggo:
            n : numero dei nodi
            c : numero dei collegamenti
            h : partenza di Harmony
            s : casa di Spike
    */
    cin >> n >> c >> h >> s;

    // ho n nodi, devo avere n vector
    // ogni vector contiene i nodi collegati a quel nodo
    grafo.resize(n+3);

    // per ogni nodo, mi segno se ci sono gia' stato o meno
    visitato.resize(n+3, false);
    
    for (int i=0; i<c; i++) {
        // leggo tutti i collegamenti
        int partenza, arrivo, luce;
        
        cin >> partenza;
        cin >> arrivo;
        cin >> luce;
        
        // aggiungo i collegamenti alla lista di adiacenza
        // siccome i collegamenti sono bidirezionali, li aggiungo in entrambi i versi
        grafo[partenza].push_back(make_pair(arrivo,luce));
        grafo[arrivo].push_back(make_pair(partenza,luce));
    }

    cout << percorri(h) << endl;
}