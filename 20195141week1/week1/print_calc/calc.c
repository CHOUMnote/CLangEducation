/* 실습 3 : print_calc 프로젝트
   소스파일명 :  calc.c
   작성일 : 2022 .  2 . 28
   작성자 : 김지호
   최종수정일 : 2022 .  2 . 28
   프로그램 버전 : printCalc v1.0
   프로그램 설명 : 간단한 연산수행과 결과값 출력 프로그램
*/
#include <stdio.h>

void main() {
	int a = 10, b = 3;
	float c = 10, d = 3;
	float res1, res2, res3;
	res1 = a / b;
	res2 = c / d;
	res3 = (float)a / b;
	printf(" %6.2f\n", res1);
	printf(" %6.2f\n", res2);
	printf(" %6.2f\n", res3);
	return 0;
}