/*
�ۼ��� : ����ȣ
�й� : 20195141
�� ���� ���� ��� �� ����� ���ϴ� ���α׷�
*/
#include <stdio.h>
double getAverage(double num1, double num2);
void printResult(double a, double b, double c);

int main(int argc, int *argv[]) {
	double num1 = 0.0;
	double num2 = 0.0;
	double result = 0.0;

	printf("�� �Ǽ����� �Է��ϼ��� : ");
	scanf_s("%lf %lf", &num1, &num2);
	result = getAverage(num1, num2);
	printResult(num1, num2, result);
	return 0;
}

double getAverage(double num1, double num2) {
	return (num1 + num2) / 2.0;
}

void printResult(double a, double b, double c) {
	printf("%.2f �� %.2f �� ���� ��հ� : %.2f", a, b, c);
}