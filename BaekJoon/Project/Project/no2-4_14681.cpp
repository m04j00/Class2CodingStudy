#include <iostream>
using namespace std;

int main() {
	int x, y;
	int re;

	cin >> x >> y;

	if (x > 0) {
		if (y > 0) re = 1;
		else re = 4;
	}
	else {
		if (y > 0) re = 2;
		else re = 3;
	}

	cout << re;

}