/*
�ۼ��� : ����ȣ
�й� : 20195141
�����͸� �����ϴ� ���α׷�(�Լ��� ���������� �ּҸ� ���Ͻ� ��� �߻�)
�ǽ� 2�� ����
*/

#include <stdio.h>

double* mul(double* ap, double* bp);
int main(int argc, char* argv[]) {
	double a, b;
	double* res = NULL;	//�����͸� ���� �ޱ� ���� ������ ����
	printf("�� ���� ���ڸ� �Է��ϼ��� : ");
	scanf_s("%lf%lf", &a, &b);
	res = mul(&a, &b);	//mul()�Լ��� ���������� ������ �ϰ��ֱ� ������ ��� �߻�
	printf("�� ���� ���� : %.2lf\n", *res);// rp�� ���� ���
	return 0;
}
double* mul(double* ap, double* bp){	//���ڷ� �ּҸ� �Ѱ��ֱ� ������ ������ ������ �޴´�.
	double rp;
	rp = *ap * *bp;	//a * b
	return &rp;	//�Լ��� ���������� ����
}