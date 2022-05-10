/*
작성자 : 김지호
학번 : 20195141
포인터를 이용하여 1차원 배열에서 특정 조건까지 출력하는 프로그램
실습 3번
*/

#include <stdio.h>

void printArray(int* p);
int main(int argc, char* argv[]) {

	int arr[10] = { 1,2,3,4,5,-1,7,8,9,10 };
	int i;
	int* p = arr;	//arr[0]의 주소
	//char name[50] = "kim"; [ k i m \0 ]이 실제 배열   문자배열에 \0있으면 String 없으면 문자 배열
	/*
	for (i = 0; arr[i] != -1; i++) {
		printf("%d\n",arr[i]);
	}
	*/

	/*	문자열과 포인터 관계
	i = 0;
	p = name;
	while (*p) {	//p가 가르키는 값이 문자열의 마지막값(\n) 아니면...
		printf("%c\n", *p++);
	}
	*/

	printArray(p);

	return 0;
}
void printArray(int* p) {
	while (*p != -1) {			//p가 가르키는 값이 -1이 아니면...
		printf("%d\n", *p++);	//p+i => i만큼 주소 증가X i번재 원소 접근O
	}
}