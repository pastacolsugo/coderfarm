#include <iostream>
#include <vector>
using namespace std;

vector <float> risultati, operando1, operando2;
vector <char> segno;

float somma (float a, float b) {
	float ris = a+b;
	operando1.push_back(a);
	segno.push_back('+');
	operando2.push_back(b);
	risultati.push_back(ris);
	return ris;
}

float sottrazione (float a, float b) {
	float ris = a-b;
	operando1.push_back(a);
	segno.push_back('-');
	operando2.push_back(b);
	risultati.push_back(ris);
	return ris;
}

float moltiplicazione (float a, float b) {
	float ris = a*b;
	operando1.push_back(a);
	segno.push_back('*');
	operando2.push_back(b);
	risultati.push_back(ris);
	return ris;
}

float divisione (float a, float b) {
	float ris = a/b;
	operando1.push_back(a);
	segno.push_back('/');
	operando2.push_back(b);
	risultati.push_back(ris);
	return ris;
}

float quadrato (float a) {
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
	 	cout << "6. Stampa risultati" << endl;
	 	cout << "7. Cancella risultati" << endl;
	 	cout << "0. Esci" << endl;

	 	cin >> operazioneScelta;

	 	if (operazioneScelta == 0) {
		 	cout << "ciao ciao" << endl;
 			return 0;
 		}

 		if (operazioneScelta < 1 || operazioneScelta > 7) {
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
	 			break;
	 		case 6:
	 			// stampa risultati
	 			if (risultati.empty() == true) {
	 				cout << "Non hai ancora fatto operazioni" << endl;
	 			} else {
		 			cout << "Le operazioni sono:" << endl;
		 			for (int i=0; i<risultati.size(); i++) {
		 				cout << operando1[i] << segno[i] << operando2[i];
		 				cout << " = " << risultati[i] << endl;
		 			}
		 			cout << endl;
		 		}
	 			break;
	 		case 7:
	 			// cancella i risultati
	 			operando1.clear();
	 			operando2.clear();
	 			segno.clear();
	 			risultati.clear();
	 			cout << "Risultati cancellati" << endl;
	 			break;
	 	}	
	}
}










