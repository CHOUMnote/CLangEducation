//#define _CRT_SECURE_NO_WARNININGS
/* �ǽ� 7 : scanfExample.c
   �ۼ��� :
   �ۼ��� : �����̸�
   ���α׷� ���� : �ڷ����� ���� scanf ���������� ���
*/
#include <stdio.h>

int main() {
	short s;
	long l;
	unsigned u;

	printf("Enter a short number : ");
	scanf_s("%hd", &s);
	printf("Enter a long number : ");
	scanf_s("%ld", &l);
	printf("Enter an unsigned number : ");
	scanf_s("%u", &u);

	printf("%hd %ld %u \n",s,l,u);
	return 0;
}