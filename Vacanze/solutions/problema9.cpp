#include<iostream>
#include<time.h>
#include<stdlib.h>
#include<vector>
using namespace std;


int main() 
{
	int n;
    cin >> n;
    vector<int> erat(n+1,1);
    erat[0] = 0;
    erat[1] = 0;
    for(int i = 2; i <= n; i++){
        if(erat[i] == 1){
            int tempInd = i;
            while(tempInd + i <= n){
                tempInd += i;
                erat[tempInd] = 0;
            }
        }
    }
    for(int i = 2; i<= n; i++){
        if(erat[i]==1){
            cout << i << ' ';
        }
    }
}