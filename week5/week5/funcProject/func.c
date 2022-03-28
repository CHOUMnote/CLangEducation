/*
이름 : 김지호
학번 : 20195141
입력 값에 따른 수식 계산 프로그램
*/

#include <stdio.h>

int main(int argc, char* argv[]) {
	double input = 0;

	printf("계산값 x를 입력하시오: ");
	scanf_s("%lf", &input);

	if (input <= 0)
		printf("입력값 x가 %.2f일때 함수  x^3 - 9x + 2의 값은 %.2f입니다.", input, ((input * input * input) - 9 * input + 2));
	else 
		printf("입력값 x가 %.2f일때 함수  7x + 2의 값은 %.2f입니다.", input, 7*input+2);

	return 0;
}