//3���� ���� �Է¹޾� 2���������� ���� ���ϴ� ���α׷�
//�ۼ��� : ����ȣ
//�й� : 20195141

#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]) {
	int a, b, c;
	double x1 = 0.0, x2 = 0.0;
	a = b = c = 0;

	printf("������ 3���� �Է��ϼ���(a b c) : ");
	scanf_s("%d %d %d", &a, &b, &c);

	x1 = (-b + (sqrt(b * b - 4 * a * c))) / (2 * a);
	x2 = (-b - (sqrt(b * b - 4 * a * c))) / (2 * a);
	printf("ù��° �� : %lf, �ι��� �� : %lf", x1, x2);
	return 0;
}