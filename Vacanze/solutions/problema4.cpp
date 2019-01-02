#include<iostream>
#include<time.h>
#include<stdlib.h>
#include<vector>
using namespace std;

int main() 
{ 
    int n, k;
    cin >> n;
    cin >> k;
    vector<int> meteo(n);

    for(int i = 0; i < n; i++){
        cin >> meteo[i];
    }
  
    int currSum = 0, maxSum, bestStart;
    for(int i = 0; i < k; i++){
        currSum += meteo[i];
    }
    maxSum = currSum;
    bestStart = 0;
    for(int i = 0; i < meteo.size()-k; i++){
        currSum -= meteo[i];
        currSum += meteo[i+k];
        if(currSum > maxSum){
            bestStart = i+1;
            maxSum = currSum;
        }
    }

    cout << bestStart+1;
}