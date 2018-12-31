#include<iostream>
using namespace std;

int main() 
{ 
    int n, k, temp;
    cin >> n >> k;
    while(n--){ // controlla se n e' diverso da 0: in tal caso lo decrementa e inizia il ciclo
        cin >> temp;
        if(temp > k){   // se un numero e' maggiore di k stampo "No" e termino il programma
            cout << "No";
            return 0;
        }
    }
    cout << "Si";   // se nessun numero e' maggiore di k stampo "Si"
    return 0;
}