/*
작성자 : 김지호
학번 : 20195141
정수, 실수, 문자 변수를 각 선언하고 함수를 통해 변수들의 주소를 출력하는 프로그램
메인문과 함수에서 출력문이 같음을 확인 할 수 있다.
실습 3번 문제
*/

#include <stdio.h>

void print_address(int*, double*, char*);

int main(int argc, char* argv[]) {
	int iValue = 10;
	double dValue = 3.14;
	char cValue = 'A';
	
	printf("main() 각 변수들의 주소\n");
	printf("정수형 변수 : %p\n실수형 변수 : %p\n문자형 변수 : %p\n", &iValue, &dValue, &cValue);	//객 변수의 주소 출력

	print_address(&iValue, &dValue, &cValue);	//각 변수의 주소를 매개변수로 전달


	return 0;
}
void print_address(int *a, double *b, char *c) {	//주소를 인자로 함수를 호출하기 때문에 포인터변수를 통해 받는다.
	printf("print_address() 각 변수들의 주소\n");
	printf("정수형 변수 : %p\n실수형 변수 : %p\n문자형 변수 : %p\n", a, b, c);	//a,b,c는 포인터 변수이기 때문에 각 변수의 주소를 갖고 있다.
}