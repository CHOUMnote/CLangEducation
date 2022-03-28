/* 실습 3 : overflow.c
   작성일 : 2022/03/07
   작성자 : 김지호
   프로그램 설명 : 언더,오버 플로우의 표현
*/
#include <stdio.h>

int main(void)
{
	unsigned char uc = 255 + 1;
	short s = 32767 + 1;
	float min = 1.175E-50;
	float max = 3.403E39;

	printf("%u\n", uc);
	printf("%d\n", s);
	printf("%e\n", min);
	printf("%f\n", max);

	return 0;
}