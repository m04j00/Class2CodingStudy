#include <iostream>
#include <sstream>
using namespace std;

int main() {
	int num, sum = 0;
	char input[100];

	cin >> num;
	cin >> input;

	int output = atoi(input);
	int rN = output;
	int n;
	for (int i = 0; i < num; i++) {
		n = rN % 10;
		sum += n;
		rN /= 10;
	}
	cout << sum;
}