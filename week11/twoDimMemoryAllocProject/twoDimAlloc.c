/*
�ۼ��� : ����ȣ
�й� : 20195141
2���� �迭�� ���� �޸� �Ҵ��̿��� �ʱ�ȭ �ϴ� ���α׷�
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
	int size;
	int* p;
	int** q;		//2���� �迭 �Ҵ�
	int* r[5];		//������ �ּҸ� ���� ���̰� 5�� �迭
	//int(* r)[5];	//r�̶�� ������ 5��¥�� ���� �迭�� ����Ű�� �ּ�
	q = &r; // r�� ������ �迭 -> r�� �ּ� ������ 2�� �迭�� ����
			//*(q+n) �� �� r[n] ����

	q = (int**)malloc(20);	//r�� ���̴� 5 ���� 5*4 = 20
	for (int i = 0; i < 5; i++) {	//���̰� 50�� �迭�� �� 5�� ����
		q[i] = (int*)malloc(200);
	}

	for (int i = 0; i < 5; i++) {	//�ʱ�ȭ
		for (int j = 0; j < 50; j++) {
			q[i][j] = i;
		}
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 50; j++) {
			printf("%d ", *(* (q + i) + j));	//��� q[i][j]
		}
		printf("\n");
	}
	
	return 0;
}