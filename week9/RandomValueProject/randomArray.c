/*
�̸� : ����ȣ
�к� : 20195141
�ڵ� �ۼ��� : 220426
1 ~ 45 6�� �ߺ� ���� ���� ���� �����ϱ�
*/

#include <stdio.h>	//ǥ�� �����
#include <stdlib.h>	//ǥ�� ���̺귯��
#include <time.h>	//�ð� �Լ�

int main(int argc, char* argv[]) {
	int lotto[6] = { 0 };	//�迭 ����
	int check[46] = { 0 };	//���� �迭
	int rv = 0;
	int i = 0;
	int j = 0;
	srand(time(NULL));	//���� �ð� ���� ���� �õ� ����

	for (i = 0; i < 6; i++) {
		rv = rand() % 45 + 1; //rand()�� ���� = rand() % (������ �� - ���۰� +1) + ���� �� => rand() % 45 +1
		lotto[i] = rv;
		if (check[rv] == 0)	//�ߺ��� ���� �ƴϸ� �ش�迭 �溹ó��
			check[rv] += 1;
		else				//�ߺ��� ���̸� i-- �� �ٽ� ����
			i--;
	}
	for (i = 0; i < 6; i++)	//�迭 ���
		printf("%d\n", lotto[i]);
}