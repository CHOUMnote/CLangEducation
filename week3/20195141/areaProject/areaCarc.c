//�����͸� �Է¹޾� m�� ��ȯ�ϴ� ���α׷�
//�ۼ��� : ����ȣ
//�й� : 20195141

#include <stdio.h>

int main() {
	int area = 0;
	printf("����� �Է��ϼ��� : ");
	scanf_s("%d", &area);
	double v = 3.3*area;
	printf("%d���� ������ %.2lfm^2", area, v);
}