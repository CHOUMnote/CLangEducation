//#define _CRT_SECURE_NO_WARNININGS
/* 실습 7 : scanfExample.c
   작성일 :
   작성자 : 본인이름
   프로그램 설명 : 자료형에 따른 scanf 형식지정자 사용
*/
#include <stdio.h>

int main() {
	short s;
	long l;
	unsigned u;

	printf("Enter a short number : ");
	scanf_s("%hd", &s);
	printf("Enter a long number : ");
	scanf_s("%ld", &l);
	printf("Enter an unsigned number : ");
	scanf_s("%u", &u);

	printf("%hd %ld %u \n",s,l,u);
	return 0;
}