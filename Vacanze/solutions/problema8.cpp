#include<iostream>
#include<time.h>
#include<stdlib.h>
#include<vector>
using namespace std;


int main() 
{
	int n;
    cin >> n;
    int mat[n][n];
    for(int i = 0; i < n; i++){
    	for(int j = 0; j<n; j++){
            cin >> mat[i][j];
        }
    }
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
    cout << pista + 1;
}