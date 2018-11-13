#include <iostream>

using namespace std;

int main () {
	int voti[1000];
	int numeroVoti = 0;
	float media;
	int scelta = -1;

	while (true) {
		cout << "1 - Stampa i voti\n2 - Aggiungi voto\n3 - Calcola la media\n4 - Esci\n";
		cout << ">> ";

		cin >> scelta;

		if (scelta == 1) {
			if (numeroVoti == 0) {
				cout << "Non ci sono voti\n";
			} else {
				for (int i=0; i<numeroVoti; i++) {
					cout << i << ") " << voti[i] << '\n';
				}
			}
		} else if (scelta == 2) {
			if (numeroVoti >= 1000) {
				cout << "Spazio esaurito\n";
			}
			cin >> voti[numeroVoti];
			numeroVoti++;
		} else if (scelta == 3) {
			media = 0;

			for (int i=0; i<numeroVoti; i++) {
				media += voti[i];
			}

			media /= numeroVoti;

			cout << "La media dei voti e': " << media << endl;
		} else if (scelta == 4) {
			cout << "Ciao\n";
			return 0;
		} else {
			cout << "Opzione non valida\n";
		}
	}
}