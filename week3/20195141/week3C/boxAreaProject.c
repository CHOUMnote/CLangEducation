//�ΰ��� ������ �Է¹޾� �簢���� ���Ǹ� ���ϱ�
//�ۼ��� : ����ȣ
//�й� : 20195141

#include <stdio.h>

int main() {
	int width, height;

	printf("�غ��� ���̸� �Է��ϼ��� : ");
	scanf_s("%d", &width);
	printf("������ ���̸� �Է��ϼ��� : ");
	scanf_s("%d", &height);

	printf("�غ��� ���� %d, ������ ���� %d �簢���� ���Ǵ� %d�Դϴ�.",width, height,  width * height);
	return 0;
}