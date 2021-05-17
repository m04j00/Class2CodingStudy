#include <iostream>
using namespace std;

int main() {
	int n;
	double sum = 0, avg = 1;
	double a[1000];
	cin >> n;
	
	for (int i = 0; i < n; i++) cin >> a[i];

	int max = a[0];

	for (int i = 1; i < n; i++) {
		if (a[i] > max) max = a[i];
	}
	//cout << "max : " << max << endl;
	for (int i = 0; i < n; i++) {
		sum += (double)(a[i] / max) * 100;
		//cout << sum << endl;
	}

	avg = (double)sum / n;

	cout << avg;


}