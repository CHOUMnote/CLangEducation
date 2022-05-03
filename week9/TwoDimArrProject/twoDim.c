/*
이름 : 김지호
학변 : 20195141
코드 작성일 : 220426
2차원 배열의 선언과 출력
*/

#include <stdio.h>
void printArray(int arr[][8]);	//2차배열일때 매개변수는 1차원 원소 수 생략 불가
int main(int argc, char* argv[]) {
	int twoDim[2][8] = { {1,3,5,7,9,11,13,15},{2,4,6,8,10,12,14,16} };	//2차 배열 선언과 초기화

	printArray(twoDim);	//2차 배열 출력

	return 0;
}
void printArray(int arr[][8]) {
	int i = 0;
	int j = 0;

	for (i = 0; i < 2; i++) {	//행접근
		for (j = 0; j < 8; j++)	//열접근
			printf("[%d][%d] = %d  ",i,j,arr[i][j]);
		printf("\n");
	}
}