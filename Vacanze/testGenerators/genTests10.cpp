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
    	int n = rand() % 100 + t + 1;
        int k = rand() % 1000;
        int found = 0;
        cout << n << ' ' << k << endl;
        vector<int> erat(n,0);
        int nToChange = rand() % n;
        for(int i = 0; i<nToChange; i++){
            erat[rand() % n] = rand() % 1000;
        }

        int sol = (rand()%10 + 1) >= 8 ? 1 : 0;
        if(sol){
            erat[rand()%n] = k;
        }

        for(int x : erat) cout << x << ' ';
        cout << endl<< endl;
        for(int i = 0; i<= n; i++){
            if(erat[i] == k){
                cout << "Si"; found = 1; break;
            }
        }
        if(!found) cout << "No";        
        cout << endl << endl<<endl;
    }
}