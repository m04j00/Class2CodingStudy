#include <iostream>
using namespace std;

int main() {

	int array[10] = { 0, };
	int ret = 0;

	//array �迭�� ���� �Է�
	for (int i = 0; i < 10; i++) {
		cin >> array[i];
	}
	
	//array �迭 ��Ҹ� 42�� ���� ������ �� ���� 
	for (int i = 0; i < 10; i++) {
		array[i] %= 42;
	}

	for (int i = 0; i < 10; i++) {
		int cnt = 0; // for�� �� ������ �ʱ�ȭ
		for (int j = i + 1; j < 10; j++) { // array[i]�� i+1 ���� ��
			if (array[i] == array[j]) cnt++; //i�� j�� ������ cnt++
		}
		if (cnt == 0) ret++; //cnt�� 0�� ���� 42�� ���� �������� ���� �ʴ� �Ҹ�. 
	}

	cout << ret;
}