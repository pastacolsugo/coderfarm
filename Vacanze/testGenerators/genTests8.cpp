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
    	int n = rand() % 10 + t + 1;
        int mat[n][n];
        cout << n << endl;
        for(int i = 0; i < n; i++){
        	for(int j = 0; j<n; j++){
                mat[i][j] = rand()%2;
                cout << mat[i][j]<<' ';
            }
            cout << endl;
        }
        cout << endl;
        int sol = 0, pista = 0;
        for(int i = 0; i < n; i++){
            int tempSol = 0;
            for(int j = 0; j<n; j++){
                if(mat[i][j] == 1)
                    tempSol++;
            }
            if(tempSol > sol){
                pista = i;
                sol = tempSol;
            }
        }
        cout << pista + 1 << endl << endl;
    }
}