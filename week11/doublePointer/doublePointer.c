/*
�ۼ��� : ����ȣ
�й� : 20195141
���������ʹ� ������ �ּ��� ������ ���� �����ͺ����� �ּҰ� ���޵Ǵ� ��� -> ���������ͷ� �޴´�.(�ּ��� �ּ�)
*/

#include <stdio.h>

void swap(int* p, int* q, int** r) {
	printf("%d\n", *p);
	printf("%d\n", *q);
	printf("%d\n", **r);
	*r = q;	//value2�� �ּ� 
}
int main(int argc, char* argv[]) {
	int value1 = 10;
	int value2 = 20;
	int* p = &value1;	//���� ������ �ּҸ� ���� ������ ������ ���� 
	int** q = &p;		//������ ������ �ּҸ� �����ϴ� ������ ����
	int*** r = &q;		//2�� ������ ������ �ּҸ� �����ϴ� ������ ����
					
	printf("before swap : %p \n", p);
	swap(&value1, &value2, &p);
	printf("before swap : %p \n", p);	//�ּҰ� �ٲ�



	return 0;
}