/*
�̸� : ����ȣ
�й� : 20195141
Ű����� ���� �Է� ���� ������ ��ȣ�� �Ǵ��ϴ� ���α׷�
*/

#include <stdio.h>

int main(int argc, char* argv[]) {
	int num = 0;
	printf("���� ���� �Է� �ϼ��� : ");
	scanf_s("%d", &num);

	if (num > 0)
		printf("�Է��� �� %d�� ����Դϴ�.", num);
	else if (num < 0)
		printf("�Է��� �� %d�� �����Դϴ�.", num);
	else
		printf("0�Դϴ�.");
	return 0;
}