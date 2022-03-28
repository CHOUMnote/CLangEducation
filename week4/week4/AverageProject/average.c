/*
작성자 : 김지호
학번 : 20195141
두 수의 합을 계산 후 평균을 구하는 프로그램
*/
#include <stdio.h>
double getAverage(double num1, double num2);
void printResult(double a, double b, double c);

int main(int argc, int *argv[]) {
	double num1 = 0.0;
	double num2 = 0.0;
	double result = 0.0;

	printf("두 실수값을 입력하세요 : ");
	scanf_s("%lf %lf", &num1, &num2);
	result = getAverage(num1, num2);
	printResult(num1, num2, result);
	return 0;
}

double getAverage(double num1, double num2) {
	return (num1 + num2) / 2.0;
}

void printResult(double a, double b, double c) {
	printf("%.2f 와 %.2f 두 수의 평균값 : %.2f", a, b, c);
}