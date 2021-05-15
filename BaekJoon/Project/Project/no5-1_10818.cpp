#include <iostream>
using namespace std;
int a[1000000];
int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		a[i] = num;
	}

	int max = a[0];
	int min = a[0];

	for (int i = 0; i < n; i++) {
		if (a[i] > max) max = a[i];
		if (a[i] < min) min = a[i];
	}

	cout << min << " " << max;

	return 0;
}