/*
�ۼ��� : ����ȣ
�й� : 20195141
����, �Ǽ�, ���� ������ �� �����ϰ� �Լ��� ���� �������� �ּҸ� ����ϴ� ���α׷�
���ι��� �Լ����� ��¹��� ������ Ȯ�� �� �� �ִ�.
�ǽ� 3�� ����
*/

#include <stdio.h>

void print_address(int*, double*, char*);

int main(int argc, char* argv[]) {
	int iValue = 10;
	double dValue = 3.14;
	char cValue = 'A';
	
	printf("main() �� �������� �ּ�\n");
	printf("������ ���� : %p\n�Ǽ��� ���� : %p\n������ ���� : %p\n", &iValue, &dValue, &cValue);	//�� ������ �ּ� ���

	print_address(&iValue, &dValue, &cValue);	//�� ������ �ּҸ� �Ű������� ����


	return 0;
}
void print_address(int *a, double *b, char *c) {	//�ּҸ� ���ڷ� �Լ��� ȣ���ϱ� ������ �����ͺ����� ���� �޴´�.
	printf("print_address() �� �������� �ּ�\n");
	printf("������ ���� : %p\n�Ǽ��� ���� : %p\n������ ���� : %p\n", a, b, c);	//a,b,c�� ������ �����̱� ������ �� ������ �ּҸ� ���� �ִ�.
}