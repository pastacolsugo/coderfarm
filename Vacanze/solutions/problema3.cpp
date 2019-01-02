#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

int main() 
{ 
    int n, temp, sum = 0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> temp;
        sum += temp;
    }
    cout << ((float) sum / (float) n);
}