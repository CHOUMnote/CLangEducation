/*
�ۼ��� : ����ȣ
�й� : 20195141
���ȣ���� ���� ���丮���� ���ϴ� ���α׷�
*/
#include <stdio.h>
long long factorial(int num);

int main(int argc, char* argv) {
	int num = 0;
	long long fact = 0;

	printf("����� ���丮�� ũ�⸦ �Է��ϼ��� : ");
	scanf_s("%d", &num);

	fact = factorial(num);
	printf("%d ���丮�� ���� %lld �Դϴ�.", num, fact);

	return 0;
}
long long factorial(int num) {
	if (num == 1)
		return 1;
	else
		return num * factorial(num - 1);
}