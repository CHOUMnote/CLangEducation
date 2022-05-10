/*
작성자 : 김지호
학번 : 20195141
1차원 배열 내에서 각 원소들의 상태를 파악하고 합을 구하는 프로그램
*/

#include <stdio.h>

int sumArray(int* arr, int* sum);
void printArray(const int* arr, int size);
int main(int argc, char* argv[]) {
	int array[10] = { 1,-1,-1,1,-1,1,-1,0,-1,1 };

	printArray(array, 10);

	return 0;
}
void printArray(const int* arr, int size) {
	int i;
	int sum = 0;
	int a = sumArray(arr, &sum);

	printf("배열 : ");
	for (i = 0; i < size; i++)
		printf("%d ", *arr++);
	printf("\n");
	printf("sum = %d\n", sum);
	if (a == 0)
		printf("sum은 0입니다.");
	if (a == 1)
		printf("sum은 양수입니다.");
	if (a == -1)
		printf("sum은 음수입니다.");

}
int sumArray(int* arr, int* sum) {
	int i;
	int bool = 0;

	for (i = 0; i < 10; i++)
		*sum += *(arr + i);
	if (*sum > 0)
		bool = 1;
	if (*sum < 0)
		bool = -1;

	return bool;
}