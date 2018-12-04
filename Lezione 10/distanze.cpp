#include <iostream>
#include <vector>
#include <utility>
#include <math.h>

using namespace std;

int main () {
	vector <pair <int, int>> punti;
	vector <double> distanze;

	int n;

	cin >> n;

	punti.resize(n);

	for (int i=0; i<n; i++) {
		cin >> punti[i].first >> punti[i].second;
	}	

	for (int i=0; i<punti.size(); i++) {
		double d = (punti[i].first * punti[i].first) + (punti[i].second * punti[i].second);

		distanze.push_back(sqrt(d));
	}
	
	for (int i=0; i<distanze.size(); i++) {
		cout << distanze[i] << endl;
	}
}