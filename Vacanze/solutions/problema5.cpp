#include<iostream>
#include<vector>
using namespace std;

int sumTilN(int n){
    return (n*(n+1))/2;
}

int main() 
{
    int n;
    cin >> n;
    cout << sumTilN(n);
}