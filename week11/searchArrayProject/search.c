/*
�ۼ��� : ����ȣ
�й� : 20195141
1���� �迭 ������ �� ���ҵ��� ���¸� �ľ��ϰ� ���� ���ϴ� ���α׷�
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

	printf("�迭 : ");
	for (i = 0; i < size; i++)
		printf("%d ", *arr++);
	printf("\n");
	printf("sum = %d\n", sum);
	if (a == 0)
		printf("sum�� 0�Դϴ�.");
	if (a == 1)
		printf("sum�� ����Դϴ�.");
	if (a == -1)
		printf("sum�� �����Դϴ�.");

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