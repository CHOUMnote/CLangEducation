//�޿��� �Է��Ͽ� ������ �����ϴ� ���α׷�
//�ۼ��� : ����ȣ
//�й� : 20195141

#include <stdio.h>

int main(int argc, char* argv[]) {
	int money = 0;
	int incometax = 0;
	int residentTax = 0;
	int insurance = 0;
	int pay = 0;

	printf("�޿��� �Է��ϼ��� : ");
	scanf_s("%d", &money);
	incometax = (int)(money * 0.1);
	residentTax = (int)(incometax * 0.1);
	insurance = (int)(money * 0.0589);
	pay = money - incometax - residentTax - insurance;

	printf("%-10s : %10d\n", "�� �޿�", money);
	printf("%-10s : %10d\n", "�ҵ漼", incometax);
	printf("%-10s : %10d\n", "�ֹμ�", residentTax);
	printf("%-10s : %10d\n", "�����", insurance);
	printf("%-10s : %10d", "�����޾�", pay);

	return 0;
}