#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

int main() 
{ 
    srand(time(NULL));
    int t = 15;
    while(t--){
        int n, temp, sum = 0, n2;
        n = rand()%20 + 1;
        n2 = n;
        cout << n << endl;
        while(n--){
            temp = rand() % 14 + 20;
            cout << temp << ' ';
            sum += temp;
        }
        cout << endl << ((float) sum / (float) n2) << endl;
        cout << endl << endl;
    }
}