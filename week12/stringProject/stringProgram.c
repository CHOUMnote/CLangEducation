/*
�̸� : ����ȣ
�й� : 20195141
���ڿ��� �����Ͽ� ���ڿ��� ��ȯ�ϰ�, ���̸� ���ϴ� ���α׷�
�ǽ� 2��
*/

#include <stdio.h>
#include <string.h>

void toUpperCase2(char* str);	//������ ���� ���
void toUpperCase(char str[]);	//�ε��� ���� ���
int length(char str[]);			//���� ���ϱ� �޼ҵ�
int main(int argc, char* argv[]) {
	char inputString[20]; //���� ���� \0���� 19���� �迭
	//char* inputString => ���� ���, ����X
	printf("���ڿ��� �Է��ϼ��� : ");
	scanf_s("%s", inputString, 20);	//�迭�� �̸��� �迭 ù��°�� �ּ� ����̱� ������ &������ X 
									//&inputString[0]�� ��� ����

	printf("%s\n", inputString);//" "�̰ų� \0���� ����

	toUpperCase2(inputString);
	printf("�빮�� ��ȯ\n");
	printf("%s\n", inputString);

	printf("���ڿ��� ���� : %d", length(inputString));//strlen(inputString) �����Լ��� �̿��Ͽ� �ٷ� ���� �� �ִ�.

	return 0;
}
void toUpperCase(char str[]) {
	int i = 0;
	for (i = 0; str[i] != '\0'; i++) {	//\n�� ���ö� ���� �ݺ� 
		if (str[i] >= 'a' && str[i] <= 'z')	//a~z�ϰ��... (isupper(), islower()���� �Լ� ������
			str[i] -= 32;	//�ҹ��ڴ� �빮�ں��� 32��ŭ ŭ
	}
}
void toUpperCase2(char* str) {	//�����͸� ���� ���ٹ��
	while (*str != '\0') {
		if (islower(*str))	//\0�� ���ö� ���� �ݺ�
			*str -= 32;
		str++;
	}
}
int length(char str[]) {
	int len = 0;
	for (int i = 0; str[i] != '\0'; i++)
		len++;
	return len;
}