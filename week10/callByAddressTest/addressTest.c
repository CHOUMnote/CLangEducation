/*
�ۼ��� : ����ȣ
�й� : 20195141
call by address �׽�Ʈ�� �غ��� ���α׷�
���� ���� ���� ������� �����ϴ� ���
�ǽ� 1�� ����
*/

#include <stdio.h>
void mul(double*, double*, double*);
int main(int argc, char* argv[]) {
	double res, a, b;
	printf("�� ���� ���ڸ� �Է��ϼ��� : ");
	scanf_s("%lf%lf", &a, &b);
	mul(&res, &a, &b);	//�ּҸ� �Ű������� ���
	printf("�� ���� ���� : %.2lf\n", res);

	return 0;
}
void mul(double* rp, double* ap, double* bp){	//�ּҸ� �ޱ����� ������ ���� ���
	*rp = *ap * *bp;	//���� ���� �ٷ� res�� ���������ϴ� rp�� ����� ����
}