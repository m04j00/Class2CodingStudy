#include <iostream>
using namespace std;



int main() {
	int a, b, c;
	int array[10] = { 0, };

	cin >> a >> b >> c;

	int mult = a * b * c;
	int rMult = mult;

	while (rMult != 0) {
		int k = rMult % 10;
		rMult /= 10;
		array[k]++;
	}
	for (int i = 0; i < 10; i++) {
		cout << array[i] << endl;
	}

	return 0;

}