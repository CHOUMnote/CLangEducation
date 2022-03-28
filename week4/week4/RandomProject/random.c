/*
작성자 : 김지호
학번 : 20195141
랜덤함수를 이용하여 난수를 생성 이때 타임 함수로 시드를 변경해 난수 생성하는 프로그램
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int getRandom(int r);

int main(int argc, char* argv) {
	int endValue = 0;
	int randomValue = 0;
	srand(time(NULL));
	printf("정수 범위를 입력하세요 : 1 ~ ");
	scanf_s("%d", &endValue);

	randomValue = getRandom(endValue);
	printf("입력된 범위 중 결정된 랜덤값은 %d 입니다.", randomValue);

	return 0;
}
int getRandom(int r) {
	return rand() % r + 1;
}