/*
�̸� : ����ȣ
�й� : 20195141
���ڿ��� �Է¹޾� ���ڿ��� ���� , ���ĺ� , ���� , Ư����ȣ�� ������ �����ϴ� ���α׷�
�ǽ� 4��
*/

#include <stdio.h>
#include <string.h> //���ڿ� ���� ���
#include <ctype.h>	//islower, isupper���� ���

void stringInfoPrint(char* str);
int main(int argc, char* argv[]) {
	char* str[100];
	printf("���ڿ��� �Է��ϼ��� : ");
	scanf_s("%s", str, 100);	//str�� �ּ� ����̱� ������ &��� X

	printf("�Է� ���ڿ� : %s\n", str);
	stringInfoPrint(str);


	return 0;
}
void stringInfoPrint(char* str) {
	int alpha_cnt = 0;
	int numerric_cnt = 0;
	int special_cnt = 0;
	printf("���ڿ��� ���� : %d\n", strlen(str));//�����Լ� ��� strlen() -> ���ڿ��� ���� ��ȯ
	while (*str != '\0') {
		if (islower(*str) || isupper(*str))		//�ҹ��� || �빮�� �̸� �ش� �����ʹ� ���ĺ�
			alpha_cnt++;
		else if (*str >= '0' && *str <= '9')	//0~9�̸� ����
			numerric_cnt++;
		else									//�̵����� �ƴ϶�� Ư������
			special_cnt++;
		str++;
	}

	printf("���ĺ��� ���� : %d\n", alpha_cnt);
	printf("������ ���� : %d\n", numerric_cnt);
	printf("Ư�������� ���� : %d\n", special_cnt);
}