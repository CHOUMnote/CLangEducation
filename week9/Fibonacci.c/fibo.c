/*
이름 : 김지호
학변 : 20195141
코드 작성일 : 220426
배열을 선언하고 피보나치 수열로 초기화 하는 프로그램
*/

#include <stdio.h>
void printArray(int arr[]);
void setFibonacci(int arr[]);
int main(int argc, char* arcv[]) {
	int fiboArr[10] = { 0,1 }; // [0,1,0...0] 초기화

	setFibonacci(fiboArr);	//해당 배열 피보나치 수열로 초기화
	printArray(fiboArr);	//배열 각 원소 출력
	
	return 0;
}
void printArray(int arr[]) {	//배열을 받아서 각 배열의 원소를 출력
	int i = 0;
	printf("[");
	for (i = 0; i < 10; i++)
		if(i < 9)	//출력 설정
			printf(" %d ", arr[i]);
		else
			printf(" %d ", arr[i]);
	printf("]");
}
void setFibonacci(int arr[]){	//배열 초기화
	int i = 0;
	
	for (i = 2; i < 10; i++) 
		arr[i] = arr[i - 2] + arr[i - 1];
}