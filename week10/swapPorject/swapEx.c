/*
�ۼ��� : ����ȣ
�й� : 20195141
�����͸� �̿��Ͽ� �� ���� �����ϴ� ���α׷�
�����͸� ����ؾ��ϴ� ����1 - �Լ��� ������ �����Ҽ� �ִ� ���
						    - ȣ��� �ּ� ���� -> ������ �����ͷ� ����
*/

#include <stdio.h>

void swap(int* a, int* b) {	//�Ű������� �ּҸ� �޾Ƽ� ������ ������ ����
	int temp = *a;			//a = &value1, b = &value2
	*a = *b;
	*b = temp;
}
int main(int argc, char* argv[]) {
	int value1 = 10;
	int value2 = 20;
	int temp;

	printf("before swap\n");
	printf("%d  %d\n", value1, value2);

	swap(&value1, &value2);	//�Ű������� ������ �����̱� ������ �ּҸ� �Ѱ���

	printf("after swap\n");
	printf("%d  %d\n", value1, value2);

	return 0;
}