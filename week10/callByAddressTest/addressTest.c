/*
작성자 : 김지호
학번 : 20195141
call by address 테스트를 해보는 프로그램
리턴 값이 없이 결과값을 저장하는 방법
실습 1번 문제
*/

#include <stdio.h>
void mul(double*, double*, double*);
int main(int argc, char* argv[]) {
	double res, a, b;
	printf("두 개의 숫자를 입력하세요 : ");
	scanf_s("%lf%lf", &a, &b);
	mul(&res, &a, &b);	//주소를 매개변수로 사용
	printf("두 수의 곱은 : %.2lf\n", res);

	return 0;
}
void mul(double* rp, double* ap, double* bp){	//주소를 받기위해 포인터 변수 사용
	*rp = *ap * *bp;	//리턴 없이 바로 res를 간접참조하는 rp에 결과값 저장
}