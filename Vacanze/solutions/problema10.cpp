#include<iostream>
#include<time.h>
#include<stdlib.h>
#include<vector>
using namespace std;


int main() 
{
	int n;
    cin >> n;
    int k;
    cin >> k;
    int found = 0;
    vector<int> rotolo(n);
    for(int i=0; i<n; i++){
        cin >> rotolo[i];
    }
    for(int i = 0; i< n; i++){
        if(rotolo[i] == k){
            cout << "Si"; found = 1; break;
        }
    }
    if(!found) cout << "No";        
}