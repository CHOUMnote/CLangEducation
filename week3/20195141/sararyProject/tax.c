//급여를 입력하여 세금을 정산하는 프로그램
//작성자 : 김지호
//학번 : 20195141

#include <stdio.h>

int main(int argc, char* argv[]) {
	int money = 0;
	int incometax = 0;
	int residentTax = 0;
	int insurance = 0;
	int pay = 0;

	printf("급여를 입력하세요 : ");
	scanf_s("%d", &money);
	incometax = (int)(money * 0.1);
	residentTax = (int)(incometax * 0.1);
	insurance = (int)(money * 0.0589);
	pay = money - incometax - residentTax - insurance;

	printf("%-10s : %10d\n", "총 급여", money);
	printf("%-10s : %10d\n", "소득세", incometax);
	printf("%-10s : %10d\n", "주민세", residentTax);
	printf("%-10s : %10d\n", "보험료", insurance);
	printf("%-10s : %10d", "실지급액", pay);

	return 0;
}