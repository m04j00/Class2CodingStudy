#include <iostream>
using namespace std;

int main() {
	int c;
	cin >> c;
	int nArray[1000];

	for (int i = 0; i < c; i++) {
		int n, sum = 0;
		double avg = 1;

		cin >> n;
		for (int j = 0; j < n; j++) {
			cin >> nArray[j];
			sum += nArray[j];
		}

		avg = sum / n;
		int cnt = 0;

		for (int j = 0; j < n; j++) {
			if (nArray[j] > avg) cnt++;
		}
		avg = (double)cnt / n * 100;
		printf("%0.3f%%\n", avg);
	}
	return 0;
}