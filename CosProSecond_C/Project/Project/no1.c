#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(char* shirt_size[], int shirt_size_len) {
	int* size = (int*)malloc(sizeof(int) * 6);

	for (int i = 0; i < shirt_size_len; i++) {
		size[i] = NULL;

		if (shirt_size[i] == "XS") {
			size[0]++;
		}
		else if (shirt_size[i] == "S") {
			size[1]++;
		}
		else if (shirt_size[i] == "M") {
			size[2]++;
		}
		else if (shirt_size[i] == "L") {
			size[3]++;
		}
		else if (shirt_size[i] == "XL") {
			size[4]++;
		}
		else if (shirt_size[i] == "XXL") {
			size[5]++;
		}
	}

	return size;
}

int main() {
	char* shirt_size[] = { "XS", "S", "L", "L", "XL", "S" };
	int shirt_size_len = 6;
	int* ret = solution(shirt_size, shirt_size_len);

	printf("solution 함수의 반환 값은 {");
	for (int i = 0; i < 6; i++) {
		if (i != 0) printf(", ");
		printf("%d", ret[i]);
	}
	printf("} 입니다.\n");
}