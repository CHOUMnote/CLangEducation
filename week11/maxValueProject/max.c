/*
작성자 : 김지호
학번 : 20195141
1차원 배열 내에서 가장 큰 값과 메모리주소를 반환하는 프로그램
실습 1번
*/

#include <stdio.h>

int* find_max(int arr[]);
int main(int argc, char* argv[]) {
	int arr[] = { 12,22,4,54,17,1,19,44,29,37 };
	int* p = find_max(arr);
	printf("최대값 : %d, 주소 : %p", *p, p);

	return 0;
}
int* find_max(int arr[]) {
	int index = 0;
	int i;
	for (i = 0; i < 10; i++) {
		if (arr[index] < arr[i])
			index = i;
	}
	return &arr[index];
}