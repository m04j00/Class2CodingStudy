#include <iostream>
using namespace std;

int main() {
	int h, m;
	int mi = 45;

	cin >> h >> m;

	if (m >= mi) {
		m -= mi;
	}
	else {
		if (h == 0) {
			h = 24;
		}
		h -= 1;
		m = 60 - (mi-m);
	}

	cout << h << " : " << m;

	return 0;
}