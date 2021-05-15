#include <iostream>
using namespace std;

int main() {

	int array[10] = { 0, };
	int ret = 0;

	//array 배열에 숫자 입력
	for (int i = 0; i < 10; i++) {
		cin >> array[i];
	}
	
	//array 배열 요소를 42로 나눈 나머지 값 저장 
	for (int i = 0; i < 10; i++) {
		array[i] %= 42;
	}

	for (int i = 0; i < 10; i++) {
		int cnt = 0; // for문 돌 때마다 초기화
		for (int j = i + 1; j < 10; j++) { // array[i]와 i+1 부터 비교
			if (array[i] == array[j]) cnt++; //i와 j가 같으면 cnt++
		}
		if (cnt == 0) ret++; //cnt가 0인 것은 42로 나눈 나머지가 같지 않단 소리. 
	}

	cout << ret;
}