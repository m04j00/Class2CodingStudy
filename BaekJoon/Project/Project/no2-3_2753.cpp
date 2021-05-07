#include <iostream>
using namespace std;
int main() {
	int year, re;

	cin >> year;

	if (year % 4 == 0 && year % 100 != 0) re = 1;
	else if (year % 400 == 0 && year % 100 == 0) re = 1;
	else re = 0;

	cout << re;
}