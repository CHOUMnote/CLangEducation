/*
�ۼ��� : ����ȣ
�й� : 20195141
�����͸� �̿��ؼ� �� ���� ���ϱ�
�����͸� �̿��ϴ� ����2 - c��� �Լ��� ���ϰ��� ������ 1���̴�.
*/

#include <stdio.h>

int sum(int v1, int v2, double *p) {	//�ϳ��� ���� �ٸ� �ϳ��� ���� ������ ���� ���
	*p = (v1 + v2) / 2;
	return v1 + v2;
}
int main(int argc, char* argv[]) {

	int value1 = 100;
	int value2 = 120;
	int sumvalue;
	double avg;
	sumvalue = sum(value1, value2, &avg);	//avg�� �ּҷ� �ѱ�

	printf("�հ� : %d    ��� : %.2f", sumvalue, avg);
	return 0;
}