/*
�̸� : ����ȣ
�й� : 20195141
Ű����� ���� �Է� ���� ������ ��ȣ�� �Ǵ��ϴ� ���α׷�
*/

#include <stdio.h>

int main(int argc, char* argv[]) {
	int a = 0; int b = 0;
	printf("ù ��° ������ �Է��Ͻÿ�. : ");
	scanf_s("%d", &a);
	printf("�� ��° ������ �Է��Ͻÿ�. : ");
	scanf_s("%d", &b);

	if (a == b)
		printf("ù ��° ���� %d��(��) �� ��° ���� %d�� ����. ", a, b);
	else if (a > b)
		printf("ù ��° ���� %d��(��) �� ��° ���� %d���� ũ�� ", a, b);
	else
		printf("ù ��° ���� %d��(��) �� ��° ���� %d���� �۴�. ", a, b);

	return 0;
}