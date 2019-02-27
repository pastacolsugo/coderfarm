// Scrivere un programma che chieda all'utente di inserire due
// numeri interi e verifichi se
// il primo è divisibile per il secondo.
#include <iostream>

using namespace std;

int main() {
	int A, B;
	cin >> A >> B;

	if (A%B == 0) {
		cout << "E' divisibile" << endl;
	} else {
		cout << "Non e' divisibile" << endl;
	}
}
