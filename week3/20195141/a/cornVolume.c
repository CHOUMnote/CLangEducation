//원뿔의 부피를 계산하기
//작성자 : 김지호
//학번 : 20195141

#include <stdio.h>

int main() {
	int h = 0;
	int r = 0;
	double pi = 3.14;
	double v = 0.0;

	printf("원뿔의 높이(정수)를 입력하세요 : ");
	scanf_s("%d", &h);
	printf("원뿔의 반지름(정수)을 입력하세요 : ");
	scanf_s("%d", &r);
	v = 1.0 / 3.0 * pi * (r * r) * h;

	printf("높이가 %d, 반지름이 %d인 원뿔의 부피는 %.2f", h, r, v);

	return 0;
}