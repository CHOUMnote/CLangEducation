/*
�̸� : ����ȣ
�к� : 20195141
�ڵ� �ۼ��� : 220426
�迭�� ����� ���ÿ� �ʱ�ȭ �ϰ�, �����Ҹ� ����ϰ�, �迭�� �� ���ϱ�
*/
#include <stdio.h>

void printArray(int arr[]);
int sumArray(int arr[]);
int main(int argc, char * argv[]) {
	int arr[10] = { 4,2,3,1,4,5,6,7,4,3 }; //�迭 ����� �ʱ�ȭ

	printArray(arr);	//�迭�� ���� ���
	printf("�迭 �� : %d", sumArray(arr));	//�迭�� �� ���

	return 0;
}
void printArray(int arr[]) {	//�迭�� �޾Ƽ� �� �迭�� ���Ҹ� ���
	int i = 0;
	for (i = 0; i < 10; i++)
		printf("�迭[%d] = %d\n", i, arr[i]);
}
int sumArray(int arr[]) {	//�迭�� �޾� �迭�� ���� ����
	int i = 0;
	int sum = 0;
	for (i = 0; i < 10; i++) 
		sum += arr[i];
	return sum;
}