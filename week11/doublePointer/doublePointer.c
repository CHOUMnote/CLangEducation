/*
작성자 : 김지호
학번 : 20195141
이중포인터는 포인터 주소의 변경을 위해 포인터변수의 주소가 전달되는 경우 -> 이중포인터로 받는다.(주소의 주소)
*/

#include <stdio.h>

void swap(int* p, int* q, int** r) {
	printf("%d\n", *p);
	printf("%d\n", *q);
	printf("%d\n", **r);
	*r = q;	//value2의 주소 
}
int main(int argc, char* argv[]) {
	int value1 = 10;
	int value2 = 20;
	int* p = &value1;	//정수 변수의 주소를 정수 포인터 변수에 저장 
	int** q = &p;		//포인터 변수의 주소를 저장하는 포인터 변수
	int*** r = &q;		//2중 포인터 변수의 주소를 저장하는 포인터 변수
					
	printf("before swap : %p \n", p);
	swap(&value1, &value2, &p);
	printf("before swap : %p \n", p);	//주소가 바뀜



	return 0;
}