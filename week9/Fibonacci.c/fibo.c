/*
�̸� : ����ȣ
�к� : 20195141
�ڵ� �ۼ��� : 220426
�迭�� �����ϰ� �Ǻ���ġ ������ �ʱ�ȭ �ϴ� ���α׷�
*/

#include <stdio.h>
void printArray(int arr[]);
void setFibonacci(int arr[]);
int main(int argc, char* arcv[]) {
	int fiboArr[10] = { 0,1 }; // [0,1,0...0] �ʱ�ȭ

	setFibonacci(fiboArr);	//�ش� �迭 �Ǻ���ġ ������ �ʱ�ȭ
	printArray(fiboArr);	//�迭 �� ���� ���
	
	return 0;
}
void printArray(int arr[]) {	//�迭�� �޾Ƽ� �� �迭�� ���Ҹ� ���
	int i = 0;
	printf("[");
	for (i = 0; i < 10; i++)
		if(i < 9)	//��� ����
			printf(" %d ", arr[i]);
		else
			printf(" %d ", arr[i]);
	printf("]");
}
void setFibonacci(int arr[]){	//�迭 �ʱ�ȭ
	int i = 0;
	
	for (i = 2; i < 10; i++) 
		arr[i] = arr[i - 2] + arr[i - 1];
}