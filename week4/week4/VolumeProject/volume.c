/*
�ۼ��� : ����ȣ
�й� : 20195141
���̿� �������� �Է¹޾� ������ ���Ǹ� ���ϴ� ���α׷�
*/
#include <stdio.h>
#include <math.h>
double getVolume(int h, int r);
void printResult(int h, int r, double v);

void main() {
	int height = 0;
	int radius = 0;
	double volume = 0.0;

	printf("���Ǹ� ����� ������ ���̸� �Է��ϼ��� : ");
	scanf_s("%d", &height);
	printf("���Ǹ� ����� ������ �������� �Է��ϼ��� : ");
	scanf_s("%d", &radius);

	volume = getVolume(height, radius);
	printResult(height, radius, volume);
}

double getVolume(int h, int r) {
	double pi = 3.141592;
	return (1.0 / 3.0) * pi * pow(r, 2) * h;
}

void printResult(int h, int r, double v) {
	printf("���̰� %d �̰�, �������� %d �� ������ ���Ǵ� %.2f �Դϴ�", h, r, v);
}