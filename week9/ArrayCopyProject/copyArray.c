/*
�̸� : ����ȣ
�к� : 20195141
�ڵ� �ۼ��� : 220426
2���� �迭�� 1���� �迭�� �����ϴ� ���α׷�
*/

#include <stdio.h>

void printArray(int arr[]);	//�迭 ���
void copyArray(int arr1[], int arr2[][8]);	//2�� �迭�� 1�� �迭�� ��ȯ
void selectionSort(int arr[]);	//���� ����
int binarySearch(int arr[], int key);	//Ư�� Ű�� ���̳ʸ� ��ġ
int main(int argc, char* argv[]) {
	int twoDimArr[2][8] = { {1,3,5,7,9,11,13,15},{2,4,6,8,10,12,14,16} };	//2���� �迭 ���� �� �ʱ�ȭ
	int oneDimArr[16] = { 0 };
	int key = 0;
	int index = -1;

	copyArray(oneDimArr, twoDimArr);	//2���迭 -> 1�� �迭
	printArray(oneDimArr);	//�迭 ���
	selectionSort(oneDimArr);	//��������
	printArray(oneDimArr);	//�迭 ���
	
	printf("ã�����ϴ� ���� �Է��ϼ��� : ");
	scanf_s("%d", &key);
	index = binarySearch(oneDimArr, key);	//key�� ���̳ʸ� ��ġ
	if (index == -1)
		printf("%d ���� �迭���� ã���� �����ϴ�.",key);
	else
		printf("%d���� �迭�� %d �� �ε����� �ֽ��ϴ�.",key,index);

	return 0;
}
void printArray(int arr[]) {	//�迭 ���
	int i = 0;
	for (i = 0; i < 16; i++)
		printf("%d  ", arr[i]);
	printf("\n");
}
void copyArray(int arr1[], int arr2[][8]) {	//2���迭 -> 1�� �迭
	int i, j;
	for (i = 0; i < 16; i++)
		arr1[i] = arr2[i / 8][i % 8];
}
void selectionSort(int arr[]) {		//��������
	int i, j;
	int min;
	int temp;
	for (i = 0; i < 15; i++) {	//n-1����? -> �̳� �ݺ����� n+1���� Ž���ϱ� ����
		min = i;	//�ּҰ� �ε��� ����
		for (j = i+1; j < 16; j++) {	//i+1 ~ ������
			if (arr[min] > arr[j])	//�ּҰ�  �ε��� ����
				min = j;
		}
		temp = arr[min];		//swap
		arr[min] = arr[i];
		arr[i] = temp;
	}
}
int binarySearch(int arr[], int key) {	//���̳ʸ� ��ġ
	int start = 0;
	int end = 15;
	int mid = (start + end) / 2;

	while (start <= end) {
		if (arr[mid] == key)	//ã���� ����
			return mid;
		else if (arr[mid] < key)	//Ű���� ũ�� �̵� ���� ������ Ž��
			start = mid + 1;
		else						//Ű���� ������ �̵� ���� ���� Ž��
			end = mid - 1;
		mid = (start + end) / 2;	//�̵� �缳��
	}
	return -1;
}