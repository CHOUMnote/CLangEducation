/*
�̸� : ����ȣ
�к� : 20195141
�ڵ� �ۼ��� : 220426
2���� �迭�� ��� ���� �հ� ���ϴ� ���α׷�
*/

#include <stdio.h>

void sumArray(int arr[][5], int rowSum[], int intcolSum[]);
int main(int argc, char* argv[]) {
	int arr[5][5] = {	{1,2,3,4,5},	// 5x5 2���� �迭 ���� �� �ֱ�ȭ
						{1,2,3,4,5},
						{1,2,3,4,5},
						{1,2,3,4,5},
						{1,2,3,4,5} };
	int rowSum[5] = { 0 };	//�� ���� �迭
	int colSum[5] = { 0 };	//�� ���� �迭
	int i;

	sumArray(arr, rowSum, colSum);

	printf("\n\n�迭�� ���� ��\n");
	for (i = 0; i < 5; i++)
		printf("%3d", rowSum[i]);
	printf("\n�迭�� ���� ��\n");
	for (i = 0; i < 5; i++)
		printf("%3d", colSum[i]);
	return 0;
}
void sumArray(int arr[][5], int rowSum[], int colSum[]) {	//���� ��, ���� �� �迭 �ʱ�ȭ
	int i, j;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf("%3d ", arr[i][j]);
			rowSum[i] += arr[i][j];	//i��°�� j��° ���� ���ҵ��� ����		=>	���� ��
			colSum[j] += arr[i][j];	//j��°���� j���� ���� ���ҵ��� ����	=>	���� ��
		}							//
		printf("%3d\n", rowSum[i]);
	}
	for (i = 0; i < 5; i++) {
		printf("%3d ", colSum[i]);
	}

}