/*
�̸� : ����ȣ
�й� : 20195141
�ݺ����� �̿��Ͽ� ���� ���ϴ� ���α׷�
*/
#include <stdio.h>

int sum(int end, int mode);

int main(int argc, char* argv[]) {
	int end = 0;
	int i;
	int total = 0;

	printf("���� ����� ������ ���� �Է� : ");
	scanf_s("%d", &end);

	printf("1���� %d������ ¦���� �� : %d\n", end, sum(end, 2));
	printf("1���� %d������ Ȧ���� �� : %d\n", end, sum(end, 1));
	printf("1���� %d������ �� �� : %d\n", end, sum(end, 0));

	return 0;
}

int sum(int end, int mode) {
	int total = 0;
	int i;
	if (mode == 2) {
		for (i = 1; i <= end; i++)
			if (i % 2 == 0)
				total += i;
	}
	else if (mode == 1) {
		for (i = 1; i <= end; i++)
			if (i % 2 != 0)
				total += i;
	}
	else {
		for (i = 1; i <= end; i++)
			total += i;
	}
	return total;
}