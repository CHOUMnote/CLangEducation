//������ ���Ǹ� ����ϱ�
//�ۼ��� : ����ȣ
//�й� : 20195141

#include <stdio.h>

int main() {
	int h = 0;
	int r = 0;
	double pi = 3.14;
	double v = 0.0;

	printf("������ ����(����)�� �Է��ϼ��� : ");
	scanf_s("%d", &h);
	printf("������ ������(����)�� �Է��ϼ��� : ");
	scanf_s("%d", &r);
	v = 1.0 / 3.0 * pi * (r * r) * h;

	printf("���̰� %d, �������� %d�� ������ ���Ǵ� %.2f", h, r, v);

	return 0;
}