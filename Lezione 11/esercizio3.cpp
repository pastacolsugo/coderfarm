#include <iostream>
#include <vector>

using namespace std;

int main () {
    vector<vector<int> > grafo;

    int n, c;

    cin >> n >> c;

    grafo.resize(n);

    for (int i=0; i<c; i++) {
        int p, a;
        cin >> p >> a;

        grafo[p].push_back(a);
        grafo[a].push_back(p);
    }

    int nodo;

    cout << "Di che nodo vuoi visualizzare i collegamenti di 2^ livello? ";
    cin >> nodo;

    for (int i=0; i<grafo[nodo].size(); i++) {
        int k = grafo[nodo][i];

        for (int j=0; j<grafo[k].size(); j++) {
            cout << grafo[k][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}
