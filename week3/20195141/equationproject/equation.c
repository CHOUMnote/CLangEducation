//3개의 수를 입력받아 2차방정식의 근을 구하는 프로그램
//작성자 : 김지호
//학번 : 20195141

#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]) {
	int a, b, c;
	double x1 = 0.0, x2 = 0.0;
	a = b = c = 0;

	printf("정수를 3개를 입력하세요(a b c) : ");
	scanf_s("%d %d %d", &a, &b, &c);

	x1 = (-b + (sqrt(b * b - 4 * a * c))) / (2 * a);
	x2 = (-b - (sqrt(b * b - 4 * a * c))) / (2 * a);
	printf("첫번째 근 : %lf, 두번재 근 : %lf", x1, x2);
	return 0;
}