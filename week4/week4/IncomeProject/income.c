/*
작성자 : 김지호
학번 : 20195141
수를 입력받아 여러 수식을 계산하는 함수를 구현하고 표시하는 프로그램
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

	printf("급여를 입력하세요 : ");
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
	printf("%-12s : %10d(원)\n", ">>총급여(+)", pay);
	printf("%-12s : %10d(원)\n", ">>소득세(-)", tax);
	printf("%-12s : %10d(원)\n", ">>주민세(-)", localTax);
	printf("%-12s : %10d(원)\n", ">>보험료(-)", insurance);
	printf("%-12s : %10d(원)\n", ">>지금액(+)", realPay);
}