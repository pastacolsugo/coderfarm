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

    cout << "Di che nodo vuoi visualizzare i collegamenti? ";
    cin >> nodo;

    for (int i=0; i<grafo[nodo].size(); i++) {
        cout << grafo[nodo][i] << endl;
    }

    return 0;
}
