#include <iostream>
#include <vector>

using namespace std;

int main () {
	vector <int> voti;

	int scelta = -1;

	do {
		cout << "Cosa vuoi fare?:\n1 - Stampa i voti\n2 - Aggiungi Voto\n3 - Calcola la media\n4 - Esci\n>> ";

		cin >> scelta;

		if (scelta < 1 || scelta > 4) {
			cout << "Operazione non valida.\n";
			continue;
		}

		if (scelta == 1) {
			if (voti.size() == 0) {
				cout << "Non ci sono voti.\n";
			} else {
				cout << "I voti sono:\n";

				for (int i=0; i<voti.size(); i++) {
					cout << i << ") " << voti[i] << '\n';
				}
			}
		} else if (scelta == 2) {
			cout << "Inserisci un nuovo voto: ";
			int nuovoVoto;

			cin >> nuovoVoto;

			if (nuovoVoto < 0 || nuovoVoto > 10) {
				cout << "Voto inserito non valido!\n";
				continue;
			}

			voti.push_back (nuovoVoto);
		} else if (scelta == 3) {
			cout << "La media e': ";

			float media = 0;

			for (int i=0; i<voti.size(); i++) {
				media += voti[i];
			}

			media /= (float)voti.size();

			cout << media << '\n';
		} else {
			cout << "Ciao!\n";
		}

	} while (scelta != 4);
}