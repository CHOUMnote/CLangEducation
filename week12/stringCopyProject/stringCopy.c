/*
�̸� : ����ȣ
�й� : 20195141
���ڿ��� �����ϴ� ���α׷�
�ǽ� 5��
*/

#include <stdio.h>

int main(int argc, char* argv[]) {
	char* str = "copy string";
	char* start = str;	//ó�� ������ ��ġ ���
	char dest[50];
	int i = 0;

	while (*str != '\0') {	//�迭 0������ str�� ����Ű�°� �ϳ��� ����
		dest[i++] = *str;
		str++;
	}
	dest[i] = '\0';	//���ڿ��� ���� �迭�� ����ִ� \0�� �Ǵ�, ���� ���ٸ� �׳� ����

	str = start;	//�� �ݺ������� ������ ��ġ�� �ٲ�� ������ str�� �ʱ� ������ ��ġ�� �̵�
	printf("���� ���ڿ� : %s\n", str);
	printf("���� ���ڿ� : %s", dest);



	return 0;
}