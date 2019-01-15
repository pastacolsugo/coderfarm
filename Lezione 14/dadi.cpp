#include <iostream>
#include <stdio.h>

int n, X=3, Y=2, Z=1, temp;
char c;

void x (){
	temp = Y;
	Y = Z;
	Z = 7-temp;
}

void y (){
	temp = Z;
	Z = X;
	X = 7-temp;
}

void z (){
	temp = X;
	X = Y;
	Y = 7-temp;
}

void T (){
	cout << Z;
}

void F (){
	cout << Y;
}

void R (){
	cout << X;
}

int main (){
	// freopen ("input.txt", "r", stdin);
	// freopen ("output.txt", "w", stdout);

	cin >> n; // leggo il numero dei comandi

	for (int i = 0; i < N; i++){ // per ogni comando
		cin >> c; // leggo la singola lettera del comando

		switch (c){ // controllo la lettera
			case 'X': x(); break;
			case 'Y': y(); break;
			case 'Z': z(); break;
			case 'T': T(); break;
			case 'F': F(); break;
			case 'R': R(); break;
		}

		// lo switch e' uguale a fare

		/*

		if (c == 'X') {
			x();
		} else if (c == 'Y') {
			y();
		}...
		
		*/
	}
}