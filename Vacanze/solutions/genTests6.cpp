#include<iostream>
#include<time.h>
#include<stdlib.h>
#include<vector>
using namespace std;

int sumTilN(int n){
    return (n*(n+1))/2;
}

int main() 
{ 
    srand(time(NULL));
    int t = 15;
    while(t--){
        int n = rand() % 100 + t + 1;
        int k = rand() % 100 + t + 1;
        cout << n << ' ' << k << endl;
        cout << sumTilN(n + k - 1) - sumTilN(k-1) << endl;
        cout << endl << endl;
    }
}