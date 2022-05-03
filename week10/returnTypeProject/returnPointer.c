/*
작성자 : 김지호
학번 : 20195141
포인터를 리턴하는 프로그램(함수의 지역변수의 주소를 리턴시 경고 발생)
실습 2번 문제
*/

#include <stdio.h>

double* mul(double* ap, double* bp);
int main(int argc, char* argv[]) {
	double a, b;
	double* res = NULL;	//포인터를 리턴 받기 위해 포인터 변수
	printf("두 개의 숫자를 입력하세요 : ");
	scanf_s("%lf%lf", &a, &b);
	res = mul(&a, &b);	//mul()함수의 지역변수를 포인팅 하고있기 때문에 경고 발생
	printf("두 수의 곱은 : %.2lf\n", *res);// rp의 값을 출력
	return 0;
}
double* mul(double* ap, double* bp){	//인자로 주소를 넘겨주기 때문에 포인터 변수로 받는다.
	double rp;
	rp = *ap * *bp;	//a * b
	return &rp;	//함수의 지역변수를 리턴
}