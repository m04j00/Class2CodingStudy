#include <iostream>
using namespace std;

int main() {
	int num1, num2;
	int sum = 0;

	cin >> num1 >> num2;

	for (int i = 1; num2 / i != 0; i *= 10) {
		int rNum2 = (num2 / i) % 10;
		cout << num1 * rNum2 << endl;
		sum += (num1 * rNum2) * i;
	}

	/*int rNum2 = num2 % 10;
	cout << num1 * rNum2 << endl;
	sum += num1 * rNum2;
	
	rNum2 = (num2 / 10) % 10;
	cout << num1 * rNum2 << endl;
	sum += (num1 * rNum2 * 10);

	rNum2 = (num2 / 100) % 10;
	cout << num1 * rNum2 << endl;
	sum += num1 * rNum2 * 100;*/

	cout << sum << endl;
	return 0;
}