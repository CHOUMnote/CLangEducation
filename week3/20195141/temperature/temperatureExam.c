//������ ȭ���� �ٲٴ� ���α׷�
//�ۼ��� : ����ȣ
//�й� : 20195141

#include <stdio.h>

int main() {
	double c = 0.0; //����
	double f = 0.0; //ȭ��
	printf("������ �Է��ϼ��� : ");
	scanf_s("%lf", &c);
	f = 32 + c * 180.0 / 100.0;

	printf("���� %.1lfC�� ȭ���� %.1lfF", c, f);
	return 0;
}