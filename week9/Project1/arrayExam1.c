/*
이름 : 김지호
학변 : 20195141
코드 작성일 : 220426
배열을 선언과 동시에 초기화 하고, 각원소를 출력하고, 배열의 합 구하기
*/
#include <stdio.h>

void printArray(int arr[]);
int sumArray(int arr[]);
int main(int argc, char * argv[]) {
	int arr[10] = { 4,2,3,1,4,5,6,7,4,3 }; //배열 선언과 초기화

	printArray(arr);	//배열의 원소 출력
	printf("배열 합 : %d", sumArray(arr));	//배열의 합 출력

	return 0;
}
void printArray(int arr[]) {	//배열을 받아서 각 배열의 원소를 출력
	int i = 0;
	for (i = 0; i < 10; i++)
		printf("배열[%d] = %d\n", i, arr[i]);
}
int sumArray(int arr[]) {	//배열을 받아 배열의 합을 리턴
	int i = 0;
	int sum = 0;
	for (i = 0; i < 10; i++) 
		sum += arr[i];
	return sum;
}