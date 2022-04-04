/* 실습 3 : variable.c
   작성일 : 2022/03/07
   작성자 : 김지호
   프로그램 설명 : 알맞은 자료형의 사용
*/

#include <stdio.h>

int main() {
	int age = 128;
	unsigned int salary = 2500000000;
	float pi = 3.14f;
	int grade = 2;
	char credit = 'A';

	printf("age = %d\n",age);
	printf("salary = %u\n",salary);
	printf("pi = %.2f\n",pi);
	printf("grade = %d\n",grade);
	printf("credit = %c\n",credit);

	return 0;
}