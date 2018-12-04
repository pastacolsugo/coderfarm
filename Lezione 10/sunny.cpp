// Example program
#include <iostream>
#include <utility>
#include <vector>

using namespace std;

int n, c, h, s;
vector <vector<pair<int,int> > > grafo;
 
int dfs (int nodo) {
    if (nodo == s) {
        return 0;
    }
    
    int prossimoNodo = -1;
    int prossimaLuminosita = 100000;
    
    for (int i=0; i<grafo[nodo].size(); i++) {
        if (grafo[nodo][i].second < prossimaLuminosita) {
            prossimoNodo = grafo[nodo][i].first;
            prossimaLuminosita = grafo[nodo][i].second;
        }
    }
    
    return dfs (prossimoNodo) + 1;  
}

int main() {
    cin >> n >> c >> h >> s;
    grafo.resize(n);
    
    for (int i=0; i<c; i++) {
        int partenza, arrivo, luce;
        
        cin >> partenza;
        cin >> arrivo;
        cin >> luce;
        
        grafo[partenza].push_back(make_pair(arrivo,luce));
        grafo[arrivo].push_back(make_pair(partenza,luce));
}