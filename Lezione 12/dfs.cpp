// Example program
#include <iostream>
#include <vector>

vector <vector <int> > grafo;
vector <bool> visitato;

int dfs (int nodo) {
    if (visitato[nodo] == true) {
        return 0;
    }
    
    visitato[nodo] = true;
    
    for (int i=0; i<grafo[nodo].size(); i++) {
        dfs (grafo[nodo][i]);
    }
    
    return 0;
}

int main() {
    
}
