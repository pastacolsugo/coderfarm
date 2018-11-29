#include <iostream>
#include <vector>

using namespace std;

int main() {
	
	vector <int> mattone; // dichiaro il vector

	for (int i=0; i<10; i++) { // leggo 10 numeri
		int n;
		cin >> n;

		mattone.push_back(n);
	}


	cout << "Il vector contiene: ";

	for (int i=0; i<mattone.size(); i++) { // stampo il contenuto del vector
		cout << mattone[i] << " ";
	}

	cout << endl;


	// calcolo della media

	double media = 0;

	for (int i=0; i<mattone.size(); i++) {
		media = media + mattone[i];
	}

	media = media / mattone.size();

	cout << "La media del vector e': " << media << endl;


	// restringo il vector
	mattone.resize(6);


	// stampo di nuovo 
	cout << "Il vector ora contiene: ";

	for (int i=0; i<mattone.size(); i++) {
		cout << mattone[i] << " ";
	}

	cout << endl;


	// cambio di nuovo la dimensione
	mattone.resize(15, 99);


	// stampo di nuovo
	cout << "Il vector ora contiene: ";

	for (int i=0; i<mattone.size(); i++) {
		cout << mattone[i] << " ";
	}

	cout << endl;


	// pop_back()
	mattone.pop_back();


	// stampo
	cout << "Il vector ora contiene: ";

	for (int i=0; i<mattone.size(); i++) {
		cout << mattone[i] << " ";
	}

	cout << endl;


	// empty() ?
	if (mattone.empty() == true) {
		cout << "Il vector e' vuoto" << endl;
	} else {
		cout << "Il vector non e' vuoto" << endl;
	}


	// svuoto
	mattone.clear();



	// controllo di nuovo
	if (mattone.empty() == true) {
		cout << "Il vector e' vuoto" << endl;
	} else {
		cout << "Il vector non e' vuoto" << endl;
	}

}