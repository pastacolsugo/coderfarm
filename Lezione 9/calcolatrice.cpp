#include <iostream>
using namespace std;

float somma (float a, float b) {
	return a+b;
}

float sottrazione (float a, float b) {
	return a-b;
}

float moltiplicazione (float a, float b) {
	return a*b;
}

float divisione (float a, float b) {
	return a/b;
}

float quadrato (float a) {
	// return a*a;
	return moltiplicazione(a, a);
}

int main () {
	int operazioneScelta = -1;
	float a, b;

	while (true) {
		cout << "Quale operazione vuoi eseguire?" << endl;
	 	cout << "1. Addizione" << endl;
	 	cout << "2. Sottrazione" << endl;
	 	cout << "3. Moltiplicazione" << endl;
	 	cout << "4. Divisione" << endl;
	 	cout << "5. Quadrato" << endl;
	 	cout << "0. Esci" << endl;

	 	cin >> operazioneScelta;

	 	if (operazioneScelta == 0) {
		 	cout << "ciao ciao" << endl;
 			return 0;
 		}

 		if (operazioneScelta < 1 || operazioneScelta > 5) {
 			// operazione non valida
 			cout << "operazione non valida" << endl;
 			continue;
 		}

	 	switch (operazioneScelta) {
	 		case 1: 
	 			// addizione
			 	cout << "Inserisci i due operandi:";
			 	cin >> a >> b;
	 			cout << "Somma: " << somma(a, b) << endl;
	 			break;
	 		case 2:
	 			// sottrazione
			 	cout << "Inserisci i due operandi:";
			 	cin >> a >> b;
	 			cout << "Differenza: " << sottrazione(a, b) << endl;
	 			break;
	 		case 3:
	 			// moltiplicazione	 			
			 	cout << "Inserisci i due operandi:";
			 	cin >> a >> b;
	 			cout << "Prodotto: " << moltiplicazione(a, b) << endl;
	 			break;
	 		case 4:
	 			// divisione
			 	cout << "Inserisci i due operandi:";
			 	cin >> a >> b;
	 			cout << "Divisione: " << divisione(a, b) << endl;
	 			break;
	 		case 5:
	 			// quadrato
	 			cout << "Inserisci la base: ";
	 			cin >> a;
	 			cout << "Quadrato: " << quadrato (a) << endl;
	 	}
	}
}










