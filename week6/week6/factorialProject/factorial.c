/*
�̸� : ����ȣ
�й� : 20195141
�ݺ����� �̿��Ͽ� n! ���ϱ�
*/
#include <stdio.h>

int main(int argc, char * argv[]) {
	int n = 0; 
	long long factorialvalue = 1L;//���丮�� �� ��
	
	printf("���丮�� n���� �Է��Ͻÿ� : ");
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++) {
		factorialvalue *= i;	
	}

	printf("%d! = %lld", n, factorialvalue);
	return 0;
}