/*
�̸� : ����ȣ
�й� : 20195141
�Է� ���� ���� ���� ��� ���α׷�
*/

#include <stdio.h>

int main(int argc, char* argv[]) {
	double input = 0;

	printf("��갪 x�� �Է��Ͻÿ�: ");
	scanf_s("%lf", &input);

	if (input <= 0)
		printf("�Է°� x�� %.2f�϶� �Լ�  x^3 - 9x + 2�� ���� %.2f�Դϴ�.", input, ((input * input * input) - 9 * input + 2));
	else 
		printf("�Է°� x�� %.2f�϶� �Լ�  7x + 2�� ���� %.2f�Դϴ�.", input, 7*input+2);

	return 0;
}