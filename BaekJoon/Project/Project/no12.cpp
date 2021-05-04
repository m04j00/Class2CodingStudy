#include <iostream>
using namespace std;

int main() {
	int num1, num2;
	int sum = 0;

	cin >> num1 >> num2;

	int rNum2 = num2 % 10;
	cout << num1 * rNum2 << endl;
	sum += rNum2;

	rNum2 %= 10;
	cout << num1 * rNum2 << endl;
	sum += rNum2 * 10;

	rNum2 %= 10;
	cout << num1 * rNum2 << endl;
	sum += rNum2 * 100;

	cout << sum << endl;

	return 0;
}