/*
�̸� : ����ȣ
�й� : 20195141
�� ���� �Է¿� ���� �޴� ó�� ���α׷�
*/

#include <stdio.h>
void min(int a, int b);
void max(int a, int b);
void sum(int a, int b);
void avg(int a, int b);

int main(int argc, char* argv[]) {
	int a = 0; int b = 0;
	int menu = 0;

	printf("�� ���� �Է��ϼ��� : ");
	scanf_s("%d %d", &a, &b);

	printf("�޴�\n");
	printf("1. ������\n");
	printf("2. ū��\n");
	printf("3. �հ�\n");
	printf("4. ���\n");
	printf("5. ����\n");
	printf("�޴��� �����ϼ��� : ");
	scanf_s("%d", &menu);

	switch (menu) {
	case 1:
		min(a, b);
		break;
	case 2:
		max(a, b);
		break;
	case 3:
		sum(a, b);
		break;
	case 4:
		avg(a, b);
		break;
	case 5:
		break;
	}

	return 0;
}
void min(int a, int b) {
	printf("��� : %d", a < b ? a : b);
}
void max(int a, int b) {
	printf("��� : %d", a < b ? b : a);
}
void sum(int a, int b) {
	printf("��� : %d", a + b);
}
void avg(int a, int b) {
	printf("��� : %f", (a + b) / 2.0);
}