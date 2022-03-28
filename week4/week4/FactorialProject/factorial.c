/*
작성자 : 김지호
학번 : 20195141
재귀호출을 통해 팩토리얼을 구하는 프로그램
*/
#include <stdio.h>
long long factorial(int num);

int main(int argc, char* argv) {
	int num = 0;
	long long fact = 0;

	printf("계산할 팩토리얼 크기를 입력하세요 : ");
	scanf_s("%d", &num);

	fact = factorial(num);
	printf("%d 팩토리얼 값은 %lld 입니다.", num, fact);

	return 0;
}
long long factorial(int num) {
	if (num == 1)
		return 1;
	else
		return num * factorial(num - 1);
}