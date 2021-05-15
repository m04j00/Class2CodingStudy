#include <iostream>
using namespace std;

int main() {
	int n, rN = 0, cnt = 0;

	int a, b, c, d = -1;

	cin >> n;
	int nN = n;

	while (d != nN) {
		a = n / 10;
		b = n % 10;
		c = (a + b) % 10;
		d = (b * 10) + c;
		n = d;
		cnt++;
	}
	cout << cnt;
}