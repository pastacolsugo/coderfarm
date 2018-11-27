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

int main () {
	int operazioneScelta = -1;
	float a, b;

	cout << "Quale operazione vuoi eseguire?" << endl;
 	cout << "1. Addizione" << endl;
 	cout << "2. Sottrazione" << endl;
 	cout << "3. Moltiplicazione" << endl;
 	cout << "4. Divisione" << endl;
 	cout << "0. Esci" << endl;

 	cin >> operazioneScelta;

 	cout << "Inserisci i due operandi:";
 	cin >> a >> b;

 	switch (operazioneScelta) {
 		case 1: 
 			// addizione
 			cout << "Somma: " << somma(a, b) << endl;
 			break;
 		case 2:
 			// sottrazione
 			cout << "Differenza: " << sottrazione(a, b) << endl;
 			break;
 		case 3:
 			// moltiplicazione
 			cout << "Prodotto: " << moltiplicazione(a, b) << endl;
 			break;
 		case 4:
 			// divisione
 			cout << "Divisione: " << divisione(a, b) << endl;
 			break;
 		case 0:
 			// esci
 			cout << "ciao ciao" << endl;
 			break;
 		default:
 			// operazione non valida
 			cout << "operazione non valida" << endl;
 			break;
 	}
}










