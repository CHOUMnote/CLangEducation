/*
�ۼ��� : ����ȣ
�й� : 20195141
���ι����� �Լ��� �� ������ �ּҸ� �����ؼ� �κ����� �ٲٴ� ���α׷�
�ǽ� 4�� ����
*/

#include <stdio.h>

void swap(int*, int*);
int main(int argc, char* argv[]) {
	int a = 10;
	int b = 20;
	printf("swap ��\n");
	printf("a�� �� : %d   b�� �� : %d\n", a, b);
	swap(&a, &b);	//�� ������ �ּ� ����
	printf("swap ��\n");
	printf("a�� �� : %d   b�� �� : %d", a, b);

	return 0;
}
void swap(int* v1, int* v2) {	//������ �ּ� ����
	int temp = *v1;	//temp = a
	*v1 = *v2;	//a = b
	*v2 = temp;	//b = temp
}