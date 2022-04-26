/*
�̸� : ����ȣ
�й� : 20195141
�ݺ����� �̿��Ͽ� �������� ����� �� ���
*/
#include <stdio.h>

void printRect(int height, int width);
void printRightAngledTriangle(int height);
void printIsoscelesTriangle(int height);
void printInvertedTriangle(int height);
int main(int argc, char* argv[]) {
	int height = 0;
	int width = 0;

	printf("������ ���� : ");
	scanf_s("%d", &height);
	printf("\n������ �ʺ� : ");
	scanf_s("%d", &width);
	
	printf("�簢��\n");
	printRect(height, width);
	printf("�����ﰢ��\n");
	printRightAngledTriangle(height);
	printf("�̵�ﰢ��\n");
	printIsoscelesTriangle(height);
	printf("���ﰢ��\n");
	printInvertedTriangle(height);
	return 0;
} 
void printRect(int height, int width) {//�簢�� 
	int i, j;
	for (i = 0; i < height; i++) { //height x width
		for (j = 0; j < width; j++)
			printf("*");
		printf("\n");
	}
}
void  printRightAngledTriangle(int height) {//�����ﰢ��
	int i, j;
	for (i = 0; i < height; i++) { 
		for (j = 0; j <= i; j++)	//1�� 2�� 3��...i�� ����
			printf("*");
		printf("\n");
	}
}
void printIsoscelesTriangle(int height) {//�̵�ﰢ��
	int i, j;
	for (i = 0; i < height; i++) {
		for (j = 0; j < height-i-1 ; j++)//" "���
			printf(" ");
		for (j = 1; j < i*2+2 ; j++)//1,3,5,7...i*2+1�� ���
			printf("%d",j);
		printf("\n");
	}
}
void printInvertedTriangle(int height) { //���ﰢ��
	int i, j;
	for (i = 0; i < height; i++) {
		for (j = 0; j < i; j++)//" " 0�� 1�� 2�� ... i�� ���
			printf(" ");
		for (j = height; j > i*2 - 3; j--)//...,7,5,3,1�� ��� 
			printf("*");
		printf("\n");
	}
}