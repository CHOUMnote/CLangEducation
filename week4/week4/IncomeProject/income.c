/*
�ۼ��� : ����ȣ
�й� : 20195141
���� �Է¹޾� ���� ������ ����ϴ� �Լ��� �����ϰ� ǥ���ϴ� ���α׷�
*/
#include <stdio.h>
int getIncomeTax(int pay);
int getLocalinhabitantsTax(int tax);
int getInsurance(int Pay);
int getPay(int pay, int tax, int insurance);
void printResult(int pay, int tax, int localTax, int insurance, int realPay);

int main(int argc, char* argv) {
	int pay = 0;
	int tax = 0;
	int localTax = 0;
	int insurance = 0;
	int realPay = 0;

	printf("�޿��� �Է��ϼ��� : ");
	scanf_s("%d", &pay);

	tax = getIncomeTax(pay);
	localTax = getLocalinhabitantsTax(tax);
	insurance = getInsurance(pay);
	realPay = getPay(pay, tax, localTax, insurance);
	printResult(pay, tax, localTax, insurance, realPay);

	return 0;
}
int getIncomeTax(int pay) {
	return (int)(pay * 0.1);
}
int getLocalinhabitantsTax(int tax) {
	return (int)(tax * 0.1);
}
int getInsurance(int pay) {
	return (int)(pay * 0.0589);
}
int getPay(int pay, int tax, int localTax, int insurance) {
	return pay - tax - localTax - insurance;
}
void printResult(int pay, int tax, int localTax, int insurance, int realPay) {
	printf("%-12s : %10d(��)\n", ">>�ѱ޿�(+)", pay);
	printf("%-12s : %10d(��)\n", ">>�ҵ漼(-)", tax);
	printf("%-12s : %10d(��)\n", ">>�ֹμ�(-)", localTax);
	printf("%-12s : %10d(��)\n", ">>�����(-)", insurance);
	printf("%-12s : %10d(��)\n", ">>���ݾ�(+)", realPay);
}