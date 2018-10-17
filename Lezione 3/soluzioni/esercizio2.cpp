#include <iostream>

using namespace std;

int main () {
	int N;
	cin >> N; // leggo il numero

	int resto = N%2; // calcolo il resto della divisione per 2

	if (resto == 0) {
		// se il resto e' zero, allora il numero e' pari
		cout << N << " e' pari." << endl;
	} else {
		// altrimenti il resto e' uno e il numero e' dispari
		cout << N << " e' dispari." << endl;
	}
}