#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

int main() 
{ 
    srand(time(NULL));
    int t = 10;
    while(t--){
        int n, temp, max = 0, sec = 0;
        n = rand()%10 + 2;
        cout << n << endl;
        while(n--){
            temp = rand()%1000;
            cout << temp << ' ';
            if(temp > max){
                sec = max;
                max = temp;
            } else if(temp>sec){
                sec = temp;
            }
        }
        cout << endl << max << ' ' << sec << endl;
        cout << endl << endl;
    }
}