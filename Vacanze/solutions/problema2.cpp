#include<iostream>
#include<stdlib.h>
using namespace std;

int main() 
{ 
    int n, temp, max = 0, sec = 0;
    cin >> n;
    for(int i = 0; i<n; i++){
        cin >> temp;
        if(temp > max){
            sec = max;
            max = temp;
        } else if(temp > sec){
            sec = temp;
        }
    }
    cout << max << ' ' << sec << endl;
}