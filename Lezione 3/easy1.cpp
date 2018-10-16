#include <iostream> 

using namespace std;

int main () {
	int N;
	int massimo;
	cin >> N;

	int lista[N];

	for (int i=0; i<N; i++) {
		cin >> lista[i];	
	}

	if (lista[0] > lista[1]) {
		massimo = lista[0];
	} else {
		massimo = lista[1];
	}

	for (int i=2; i<N; i++) {
		if (massimo < lista[i]){
			massimo = lista[i];
		}
	}

	cout << "Il maggiore e': " << massimo << endl;
}















