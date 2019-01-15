#include <iostream>
#include <stdio.h>

int N, X=3, Y=2, Z=1, t;
char comandi[100007];

void x (void){
	t = Y;
	Y = Z;
	Z = 7-t;
}

void y (void){
	t = Z;
	Z = X;
	X = 7-t;
}

void z (void){
	t = X;
	X = Y;
	Y = 7-t;
}

void T (void){
	printf ("%d ", Z);
}

void F (void){
	printf ("%d ", Y);
}

void R (void){
	printf ("%d ", X);
}

int main (void){
	freopen ("input.txt", "r", stdin);
	freopen ("output.txt", "w", stdout);

	scanf ("%d %s", &N, comandi);
	for (int i=0; i<N; i++){
		switch (comandi[i]){
			case 'X': x(); break;
			case 'Y': y(); break;
			case 'Z': z(); break;
			case 'T': T(); break;
			case 'F': F(); break;
			case 'R': R(); break;
		}
	}
}