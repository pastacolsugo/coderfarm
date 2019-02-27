#include <iostream>

using namespace std;

int main() {
	int N=0;
	cin >> N;

	for (int i=0; i<N; i++) {
		for (int j=0; j<=i; j++) { // ripetiamo N volte
			cout << "#";
		}
		cout << endl;
	}
	cout << endl;
}







