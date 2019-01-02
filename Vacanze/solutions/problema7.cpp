#include<iostream>
#include<time.h>
#include<stdlib.h>
#include<vector>
using namespace std;


int main() 
{
	float temp;
    int n;
    cin >> n;
    float k;
    cin >> k;
    for(int i = 0; i < n; i++){
    	cin >> temp;
        cout << (temp*k);
    }
}