/*
�ۼ��� : ����ȣ
�й� : 20195141
enum �������� ǥ�� ������ ����� �� ����� ���� �����̴�. �� ������ ���� ����̰� ǥ�ô� ��ȣ�� ǥ���Ѵ�. �̸� �����ϴ� ���α׷�
�ǽ� 2��
*/

#include <stdio.h>

int main(int argc, char* argv[]) {
	union {
		short num;
		char chAry[2];
	}data;
	//����ü�� �ʵ�� �ϳ��� ���� �����ϴ� - ���ÿ� ���� �Ұ���
	data.num = 16706;

	printf("short: %hd\n", data.num);

	data.chAry[0] = 'A';
	data.chAry[1] = 'B';
	// �� �̻� data.num�� �ش��ϴ� ���� ����� �� ����.
	printf("Ch[0] : %c\n", data.chAry[0]);
	printf("Ch[1] : %c\n", data.chAry[1]);
	// printf ("short: %hd\n" , data.num);  // ����� Ȯ���� ������.
	//�� �׽�Ʈ ������ ������ ���� ���´� -> ����ü �ʵ� chAry�� �޸𸮸� �Ҵ��Կ� ���� num�� ���� �� �̻� ���� �ʱ�ȭ�� ���� �Ҿ� ���ȱ� ����

	return 0;
}