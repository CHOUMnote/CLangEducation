/*
�̸� : ����ȣ
�к� : 20195141
�ڵ� �ۼ��� : 220426
2���� �迭�� ����� ���
*/

#include <stdio.h>
void printArray(int arr[][8]);	//2���迭�϶� �Ű������� 1���� ���� �� ���� �Ұ�
int main(int argc, char* argv[]) {
	int twoDim[2][8] = { {1,3,5,7,9,11,13,15},{2,4,6,8,10,12,14,16} };	//2�� �迭 ����� �ʱ�ȭ

	printArray(twoDim);	//2�� �迭 ���

	return 0;
}
void printArray(int arr[][8]) {
	int i = 0;
	int j = 0;

	for (i = 0; i < 2; i++) {	//������
		for (j = 0; j < 8; j++)	//������
			printf("[%d][%d] = %d  ",i,j,arr[i][j]);
		printf("\n");
	}
}