/*
�ۼ��� : ����ȣ
�й� : 20195141
���� �޸� �Ҵ��� �ϴ� ���α׷�
�ǽ� 5��
*/

#include <stdio.h>
#include <stdlib.h>
void fillArray(int*, int);
void printArray(int*, int);
int main(int argc, char* argv[]) {

	int size;
	int* p;
	printf("����� �迭�� ũ�� �Է� : ");
	scanf_s("%d", &size);
	p = (int*)malloc(size*sizeof(int)); //�����Ҵ� ���ϰ� = void -> ����ȯ		 �Ű����� = ����Ʈ ��

	fillArray(p,size);
	printArray(p, size);

	free(p);	//�޸� �Ҵ� ����

	return 0;
}
void printArray(int*p, int size) {	//�迭 ���
	int i;
	for (i = 0; i < size; i++) {
		printf("[%d] : %d  \n",i ,*(p + i));	//p[i]
	}
}
void fillArray(int* p, int size) {	//�迭 �ʱ�ȭ
	int i;
	int r;
	printf("1���� ����� ���� ����??? : ");
	scanf_s("%d", &r);
	for (i = 0; i < size; i++) {
		p[i] = rand()%r+1;	//*(p+i)
	}
}
