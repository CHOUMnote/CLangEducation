/*
작성자 : 김지호
학번 : 20195141
메인문에서 함수로 두 변수의 주소를 전달해서 두변수를 바꾸는 프로그램
실습 4번 문제
*/

#include <stdio.h>

void swap(int*, int*);
int main(int argc, char* argv[]) {
	int a = 10;
	int b = 20;
	printf("swap 전\n");
	printf("a의 값 : %d   b의 값 : %d\n", a, b);
	swap(&a, &b);	//각 변수의 주소 전달
	printf("swap 후\n");
	printf("a의 값 : %d   b의 값 : %d", a, b);

	return 0;
}
void swap(int* v1, int* v2) {	//변수의 주소 받음
	int temp = *v1;	//temp = a
	*v1 = *v2;	//a = b
	*v2 = temp;	//b = temp
}