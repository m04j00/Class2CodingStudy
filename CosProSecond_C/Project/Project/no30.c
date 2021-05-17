#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int arr[], int arr_len) {
    int answer = 0;
    for (int i = 0; i < arr_len; i++)
        for (int j = 0; j < arr_len - 1; j++)
            if (arr[i] % 2 == 0 && arr[i] / 2 == arr[j]) {
                printf("arr[i] : %d\t", arr[i]);
                printf("arr[i]/2 : %d\t", arr[i]/2);
                printf("arr[j] : %d\n", arr[j]);
                
                answer++;
                continue;
            }
    return answer;
}

int main() {
    //int arr[] = { 3, 4, 3, 8, 6 };
    int arr[] = { 4, 8, 3, 6, 3 };
    int arr_len = 5;
    int ret = solution(arr, arr_len);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}