#include <iostream>
using namespace std;

int main() {
	int n, newN = -1, cnt = 0;
	int aN, bN, cN;
	
	cin >> n;
	// n = 26
	int nN = n;

	while (newN != n) {
		aN = nN / 10; // 2
		bN = nN % 10; // 6
		cN = (aN + bN) % 10; // 8
		newN = (bN * 10) + cN; //60 + 8
		nN = newN;
		cnt++;
	}
	cout << cnt;

	return 0;
}