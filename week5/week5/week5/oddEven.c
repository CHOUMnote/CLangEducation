/*
�̸� : ����ȣ
�й� : 20195141
Ű����� ���� �Է� ���� ������ �������� Ȧ������ �Ǵ��ϴ� ���α׷�
*/

#include <stdio.h>

int main(int argc, char* argv[]) {
	int num = 0;
	printf("���� ���� �Է� �ϼ��� : ");
	scanf_s("%d", &num);
	
	if (num % 2 == 0)
		printf("�Է��� �� %d�� ¦���Դϴ�.", num);
	else
		printf("�Է��� �� %d�� Ȧ���Դϴ�.", num);

	return 0;
}