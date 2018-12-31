#include<iostream>
#include<time.h>
#include<stdlib.h>
#include<vector>
using namespace std;

int main() 
{ 
    srand(time(NULL));
    int t = 15;
    while(t--){
        int n, k;
        vector<int> meteo;
        n = (rand()%25) + 1;
        k = (rand()%(n)) + 1;
 
        cout << n << ' ' << k << endl;
        for(int i = 0; i < n; i++){
            meteo.push_back(rand() % 40 );
            cout << meteo.back() << ' ';
        }
      
        cout << endl;

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

        cout << bestStart+1 << endl;
        cout << endl << endl;
    }
}