/*
�ۼ��� : ����ȣ
�й� : 20195141
�����Լ��� �̿��Ͽ� ������ ���� �̶� Ÿ�� �Լ��� �õ带 ������ ���� �����ϴ� ���α׷�
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int getRandom(int r);

int main(int argc, char* argv) {
	int endValue = 0;
	int randomValue = 0;
	srand(time(NULL));
	printf("���� ������ �Է��ϼ��� : 1 ~ ");
	scanf_s("%d", &endValue);

	randomValue = getRandom(endValue);
	printf("�Էµ� ���� �� ������ �������� %d �Դϴ�.", randomValue);

	return 0;
}
int getRandom(int r) {
	return rand() % r + 1;
}