/*
�ۼ��� : ����ȣ
�й� : 20195141
�� ���� ���� ��� �� ����ϴ� ���α׷�
*/
#include <stdio.h>
int SumTwo(int a, int b);

int main(int argc, char* argv[]) {
	int x = 10, y = 5;
	int value = 0;

	value = SumTwo(x, y);
	printf("x=%d, y=%d �� ���� ���� : %d", x, y, value);

	return 0;
}

int SumTwo(int a, int b){
	int result;
	result = a + b;
	return result;
}