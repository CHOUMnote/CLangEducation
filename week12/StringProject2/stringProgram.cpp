/*
�̸� : ����ȣ
�й� : 20195141
gets()�޼ҵ�� ���ڿ��� �Է¹ް�, �����Ͽ� ��ҹ��� ��ȯ, ���� ��, ���ڿ��� �Ųٷ� �����ϴ� ���α׷�
�ǽ� 3��
*/

#include <stdio.h>
#include<ctype.h>	//isupper(), islower()
#include <string.h> //���ڿ� ���� ���

void reversePrint(char* str);
int spaceCount(char* str);
void toUpperLower(char str[]);
int main(int argc, char* argv[]) {
	char inputString[20];

	printf("���ڿ� �Է� : ");
	gets_s(inputString);	//���� ���� ������ ���� �Է¹���
	printf("�Է� ���ڿ� : %s\n", inputString);

	toUpperLower(inputString);	//�빮��->�ҹ���, �ҹ���->�빮��
	printf("��ҹ��� ��ȯ �� : %s\n",inputString);

	printf("���ڿ��� ���� ���� %d �Դϴ�.\n", spaceCount(inputString));	//�Է��� ���ڿ��� ���� �� ����	isspace() �޼ҵ� ����

	printf("���ڿ� �Ųٷ� ��� : ");
	reversePrint(inputString);
	return 0;
}
void toUpperLower(char str[]) {
	int i;
	for (i = 0; str[i] != '\0'; i++) {	//\n�� ���ö� ���� �ݺ� 
		if (islower(str[i]))	//�ҹ����̸� �빮�ڷ�
			str[i] -= 32;	//�ҹ��ڴ� �빮�ں��� 32��ŭ ŭ
		else if (isupper(str[i]))	//�빮���̸� �ҹ��ڷ�
			str[i] += 32;
	}
}
int spaceCount(char* str) {	//�迭�� �����ͷ� ����
	int len = 0;
	while (*str != '\0') {	//������ ���ڰ� \0�� �ƴϸ� => ���ڿ� ������ ����(gets�̱� ������ ���鵵 ������)
		if (*str == ' ')	//�����̸�...
			len++;
		str++;
	}
	return len;
}
void reversePrint(char* str) {	//�迭 �����ͷ� ����
	int len = strlen(str);
	int i;

	for (i = len - 1; i >= 0; i--)	//���ڿ� ������ �ε���(\0 ����) ~ ���ڿ� 0�� ����
		printf("%c", str[i]);
}