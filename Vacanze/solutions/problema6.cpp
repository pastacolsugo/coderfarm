#include<iostream>
#include<vector>
using namespace std;

int sumTilN(int n){
    return (n*(n+1))/2;
}

int main() 
{ 
    int n;
    int k;
    cin >> n >> k;
    cout << sumTilN(n + k - 1) - sumTilN(k-1);
}