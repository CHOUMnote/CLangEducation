/*
이름 : 김지호
학변 : 20195141
코드 작성일 : 220426
2차원 배열의 행과 열의 합계 구하는 프로그램
*/

#include <stdio.h>

void sumArray(int arr[][5], int rowSum[], int intcolSum[]);
int main(int argc, char* argv[]) {
	int arr[5][5] = {	{1,2,3,4,5},	// 5x5 2차원 배열 선언 및 최기화
						{1,2,3,4,5},
						{1,2,3,4,5},
						{1,2,3,4,5},
						{1,2,3,4,5} };
	int rowSum[5] = { 0 };	//행 합할 배열
	int colSum[5] = { 0 };	//열 합할 배열
	int i;

	sumArray(arr, rowSum, colSum);

	printf("\n\n배열의 행의 합\n");
	for (i = 0; i < 5; i++)
		printf("%3d", rowSum[i]);
	printf("\n배열의 열의 합\n");
	for (i = 0; i < 5; i++)
		printf("%3d", colSum[i]);
	return 0;
}
void sumArray(int arr[][5], int rowSum[], int colSum[]) {	//열의 합, 행의 합 배열 초기화
	int i, j;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf("%3d ", arr[i][j]);
			rowSum[i] += arr[i][j];	//i번째에 j번째 행의 원소들을 더함		=>	행의 합
			colSum[j] += arr[i][j];	//j번째마다 j번재 행의 원소들을 더함	=>	열의 합
		}							//
		printf("%3d\n", rowSum[i]);
	}
	for (i = 0; i < 5; i++) {
		printf("%3d ", colSum[i]);
	}

}