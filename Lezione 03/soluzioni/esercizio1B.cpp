#include <iostream>

using namespace std;

int main() {
	float capienza, km;
	cout << "Inserisci la capienza del serbatoio in litri: ";
	cin >> capienza;

	cout << "Inserisci i km percorsi con un pieno: ";
	cin >> km;

	float consumo = km / capienza;


	cout << consumo << "km/l" << endl;
}


