/*
�̸� : ����ȣ
�к� : 20195141
�ڵ� �ۼ��� : 220426
���� ���� ���α׷�
*/

#include <stdio.h>

void bubbleSort(int arr[]);
void printArray(int arr[]);
int main(int argc, char* argv[]) {
	int oneDim[10] = { 1 , 9 , 2 , 8 , 3 , 7 , 4 , 6 , 5 , 0 };	//���� ���� ���� �迭 ���� �� �ʱ�ȭ

	printf("���� �� : ");	//������ �迭 ���
	printArray(oneDim);

	bubbleSort(oneDim);		//�迭�� ���� ����

	printf("���� �� : ");	//�迭 ���� �� ���
	printArray(oneDim);

	return 0;
}
void printArray(int arr[]) {	//�迭 ��� �Լ�
	int i = 0;
	for (i = 0; i < 10; i++)
		printf("%d ", arr[i]);
	printf("\n");
}
void bubbleSort(int arr[]) {	//���� ���� �Լ�
	int i = 0;
	int j = 0;
	int temp = 0;
	for (i = 0; i < 9; i++) {	//���� �Ϸ�� ���� (n,n+1)�� �̱� ������ len(arr)-1����
		for (j = 0; j < 9-i; j++) {	//���� ���� ���� ����
			if (arr[j] > arr[j + 1]) {			//�� ���ڰ� �� ũ�� swap
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}