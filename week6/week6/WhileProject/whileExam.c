/*
�̸� : ����ȣ
�й� : 20195141
do~while ����Ͽ� �Է��� �հ� ��� ���ϱ�
*/
#include <stdio.h>

double average(int total, int count);
int main(int argc, char * argv[]) {
	int inputN = 0;
	int total = 0;
	double avg = 0.0;
	int count = 0;
	do {
		printf("�����Է� : ");
		scanf_s("%d", &inputN);

		if (inputN == 0) {
			printf("-> ����");
			break;
		}
		total += inputN;
		avg = average(total, ++count);
		printf("-> �� : %d, ��� %.2f\n", total, avg);
	} while (1);

	return 0;
}
double average(int total, int count) {
	return (double)total / count;
}