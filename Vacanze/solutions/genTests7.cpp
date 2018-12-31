#include<iostream>
#include<time.h>
#include<stdlib.h>
#include<vector>
using namespace std;


int main() 
{ 
    srand(time(NULL));
    int t = 10;
    while(t--){
    	vector<float> sol;
    	float temp;
        int n = rand() % 10 + t + 1;
        float k = (float)(rand() % 10000 )/10000.0f + 1;
        cout << n << ' ' << k << endl;
        for(int i = 0; i < n; i++){
        	temp = (float)(rand() % 10000000 + t + 1)/1000000.0f;
	        cout << temp  << endl;
	        sol.push_back(temp*k);
        }
        cout << endl;
        for(float x : sol){
        	cout << x<<endl;
        }
        cout << endl << endl;
    }
}