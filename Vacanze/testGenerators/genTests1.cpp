#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

int main() 
{ 
    srand(time(NULL));
    int t = 15;
    while(t--){
        int n, k, sol = 1,temp;
        n = rand()%20;
        k = rand()%2000;
        cout << n << ' ' << k << endl;
        while(n--){
            temp = rand()%1750;
            cout << temp << ' ';
            if(temp > k){sol = 0;}
        }
        cout << endl << (sol ? "Si" : "No" )<< endl;
        cout << endl << endl;
    }
}