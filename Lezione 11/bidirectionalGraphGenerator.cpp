#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <utility>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main () {
    srand(time(NULL));


    int nodi, archi;

    // cout << "Inserisci il numero dei nodi: ";
    cin >> nodi;

    // cout << "Inserisci il numero degli archi: ";
    cin >> archi;

    if (nodi <= 1 || archi <= 0) {
        cout << "Dati errati\n";
        return 0;
    }

    cout << nodi << ' ' << archi << '\n';

    vector<vector <int> > grafo(nodi);

    for (int i=0; i<nodi; i++) {
        for (int j=0; j<nodi; j++) {
            if (i == j) continue;
            grafo[i].push_back(j);
        }
    }

    for (int i=0; i<nodi; i++) {
        for (int j=0; j<nodi; j++) {
            int randomPosition = rand()%grafo[i].size();
            swap(grafo[i][j], grafo[i][randomPosition]);
        }
    }

    int printedEdges = 0;

    for (int i=0; i<nodi; i++, printedEdges++) {
        cout << i << ' ' << grafo[i][grafo[i].size()-1] << '\n';
        grafo[i].pop_back();
    }

    int rep = 0;

    while (printedEdges < archi && rep < 20) {
        int randomNode = rand() % nodi;

        if (grafo[randomNode].empty()) {
            rep++;
            continue;
        }

        cout << randomNode << ' ' << grafo[randomNode][grafo[randomNode].size()-1] << '\n';
        grafo[randomNode].pop_back();
        printedEdges++;
        rep = 0;
    }

    return 0;
}
