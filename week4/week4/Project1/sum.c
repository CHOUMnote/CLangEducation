/*
작성자 : 김지호
학번 : 20195141
두 수의 합을 계산 후 출력하는 프로그램
*/
#include <stdio.h>
int SumTwo(int a, int b);

int main(int argc, char* argv[]) {
	int x = 10, y = 5;
	int value = 0;

	value = SumTwo(x, y);
	printf("x=%d, y=%d 두 수의 합은 : %d", x, y, value);

	return 0;
}

int SumTwo(int a, int b){
	int result;
	result = a + b;
	return result;
}