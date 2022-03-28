/*
작성자 : 김지호
학번 : 20195141
높이와 반지름을 입력받아 원뿔의 부피를 구하는 프로그램
*/
#include <stdio.h>
#include <math.h>
double getVolume(int h, int r);
void printResult(int h, int r, double v);

void main() {
	int height = 0;
	int radius = 0;
	double volume = 0.0;

	printf("부피를 계산할 원뿔의 높이를 입력하세요 : ");
	scanf_s("%d", &height);
	printf("부피를 계산할 원뿔의 반지름을 입력하세요 : ");
	scanf_s("%d", &radius);

	volume = getVolume(height, radius);
	printResult(height, radius, volume);
}

double getVolume(int h, int r) {
	double pi = 3.141592;
	return (1.0 / 3.0) * pi * pow(r, 2) * h;
}

void printResult(int h, int r, double v) {
	printf("높이가 %d 이고, 반지름이 %d 인 원뿔의 부피는 %.2f 입니다", h, r, v);
}