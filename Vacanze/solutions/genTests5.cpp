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
        int n = rand() % 100+t + 1;
        cout<<n<<endl;
        cout << sumTilN(n) << endl;
        cout << endl << endl;
    }
}