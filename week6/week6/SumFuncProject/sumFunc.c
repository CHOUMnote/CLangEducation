/*
�̸� : ����ȣ
�й� : 20195141
1~n���� ������ �� ���ϱ�
*/
#include <stdio.h>

int calc(int number);
int main(int argc, char* argv[]) {
	int n = 0;

	printf("�ݺ� ������ Ƚ���� �Է��ϼ��� : ");
	scanf_s("%d", &n);
	
	printf("�Լ� �� ����� : %d", calc(n));

	return 0;
}
int calc(int number) { //��� ����
	int result = 0;
	for (int i = 1; i <= number; i++)
		result += (i * i + 1);
	return result;
}