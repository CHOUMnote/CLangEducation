//���ǿ� ���� ������ �����ϱ�
//�ۼ��� : ����ȣ
//�й� : 20195141

#include <stdio.h>

int main(int argc, char* argv[]) {

	int age = 19;
	char gender = 'm';
	int com = 100, eng = 60, math = 90;
	int sum= 210, avg = 70;
	int value = 100, count = 5;
	int year = 2022;
	int input = 12;

	printf("���̰� 19�� �̻��̰� �����ΰ� ? %d\n", age >= 19 && gender == 'm'); //1
	printf("��ǻ�Ϳ� ���� �׸��� ���� ��ΰ� 90�� �̻��ΰ� ? %d\n", com >= 90 && eng >= 90 && math >= 90); //0
	printf("������ 200�� �̻��̰ų� ����� 60�� �̻��ΰ� ? %d\n", sum >= 200 || avg >= 60); //1
	printf("������ 60�� �̸��̰ų� �ἮȽ���� 4�� �̻��ΰ� ? %d\n", value < 60 || count >= 4); //1
	printf("������ �⵵�� �����ΰ� ? %d\n", year % 4 == 0 && year % 100 !=0 || year % 400 == 0); //0
	printf("�Էµ� ���ڰ� ¦���ΰ� ? %d\n", input % 2 == 0); //1
	printf("�Էµ� ���ڰ� 3�� 5�� ������ΰ� %d\n", input % 3 == 0 && input % 5 == 0); //0
}