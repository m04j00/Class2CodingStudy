#include <iostream>
using namespace std;

int main() {
	int a, b;
	string str = "";

	cin >> a >> b;

	if (a > b) str = ">";
	else if (a < b) str = "<";
	else str = "==";

	cout << str;
}