/*
�̸� : ����ȣ
�й� : 20195141
�ݺ����� �̿��Ͽ� �Ǻ���ġ ������ ������ �� ���ϱ�
*/
#include <stdio.h>

int main(int argc, char* argv[]) {
	int first = 0;
	int second = 1;
	int next = 0;
	int i = 0;
	int last = 0;
	int sum = 1;
	printf("�Ǻ���ġ ������ ������ ���� �Է��ϼ��� : ");
	scanf_s("%d", &last);

	if (last == 0) {
		printf("�Ǻ���ġ ���� %d", 0);
		printf("\n���� �հ� : %d", 0);
	}
	else if (last == 1){
		printf("�Ǻ���ġ ���� %d", 1);
		printf("\n���� �հ� : %d", 1);
	}
	else {
		printf("�Ǻ���ġ ���� %d, %d, ", 0, 1);
		for (i = 2; i < last; i++) {
			next = first + second;
			sum += next;
			if (i == last - 1) 
				printf("%d", next);
			else 
				printf("%d, ", next);
			first = second;
			second = next;
		}
		printf("\n���� �հ� : %d", sum);
	}
	return 0;
}