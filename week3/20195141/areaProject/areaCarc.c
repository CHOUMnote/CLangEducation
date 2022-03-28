//평방미터를 입력받아 m로 반환하는 프로그램
//작성자 : 김지호
//학번 : 20195141

#include <stdio.h>

int main() {
	int area = 0;
	printf("평수를 입력하세요 : ");
	scanf_s("%d", &area);
	double v = 3.3*area;
	printf("%d평의 면적은 %.2lfm^2", area, v);
}