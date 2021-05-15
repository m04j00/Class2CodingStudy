#include <iostream>
using namespace std;
int n[9];
int main() {

	for (int i = 0; i < 9; i++) {
		cin >> n[i];
	}

	int max = n[0];
	int num = 0;
	for (int i = 0; i < 9; i++) {
		if (n[i] > max) {
			max = n[i];
			num = i;
		}
	}

	cout << max << endl;
	cout << num + 1;

	return 0;
}