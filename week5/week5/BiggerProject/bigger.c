/*
이름 : 김지호
학번 : 20195141
키보드로 부터 입력 받은 정수의 부호를 판단하는 프로그램
*/

#include <stdio.h>

int main(int argc, char* argv[]) {
	int a = 0; int b = 0;
	printf("첫 번째 정수를 입력하시오. : ");
	scanf_s("%d", &a);
	printf("두 번째 정수를 입력하시오. : ");
	scanf_s("%d", &b);

	if (a == b)
		printf("첫 번째 정수 %d이(가) 두 번째 정수 %d와 같다. ", a, b);
	else if (a > b)
		printf("첫 번째 정수 %d이(가) 두 번째 정수 %d보다 크다 ", a, b);
	else
		printf("첫 번째 정수 %d이(가) 두 번째 정수 %d보다 작다. ", a, b);

	return 0;
}