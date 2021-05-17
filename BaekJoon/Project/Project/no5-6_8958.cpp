#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int n;
	char cArray[80];

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> cArray;
		char* o = cArray;
		int cnt = 0, sum = 0;
		for (int j = 0; j < strlen(cArray); j++) {
			//cout << o[j] << endl;
			if (o[j] == 'O') {
				cnt++;
				sum += cnt;
			}
			else cnt = 0;
		}
		cout << sum << endl;
	}

	return 0;
}