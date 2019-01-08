#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> v;

	int n;

	cin >> n;

	v.resize(n);

	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	bool hoFattoScambi = false;

	do {
		hoFattoScambi = false;
		for (int i = 1; i < v.size(); i++) {
			if (v[i - 1] > v[i]) {
				int temp = v[i];
				v[i] = v[i - 1];
				v[i - 1] = temp;
				hoFattoScambi = true;
			}
		}
	} while (hoFattoScambi);

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << ", ";
	}
	cout << endl;
}