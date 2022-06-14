/*
이름 : 김지호
학변 : 20195141
코드 작성일 : 220426
버블 정렬 프로그램
*/

#include <stdio.h>

void bubbleSort(int arr[]);
void printArray(int arr[]);
int main(int argc, char* argv[]) {
	int oneDim[10] = { 1 , 9 , 2 , 8 , 3 , 7 , 4 , 6 , 5 , 0 };	//정렬 되지 않은 배열 선언 및 초기화

	printf("정렬 전 : ");	//정렬전 배열 출력
	printArray(oneDim);

	bubbleSort(oneDim);		//배열을 버블 정렬

	printf("정렬 후 : ");	//배열 정렬 후 출력
	printArray(oneDim);

	return 0;
}
void printArray(int arr[]) {	//배열 출력 함수
	int i = 0;
	for (i = 0; i < 10; i++)
		printf("%d ", arr[i]);
	printf("\n");
}
void bubbleSort(int arr[]) {	//버블 정렬 함수
	int i = 0;
	int j = 0;
	int temp = 0;
	for (i = 0; i < 9; i++) {	//정렬 완료된 원소 (n,n+1)비교 이기 때문에 len(arr)-1까지
		for (j = 0; j < 9-i; j++) {	//정렬 되지 않은 원소
			if (arr[j] > arr[j + 1]) {			//뒤 숫자가 더 크면 swap
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}