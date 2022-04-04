/*
이름 : 김지호
학번 : 20195141
반복문을 이용하여 n! 구하기
*/
#include <stdio.h>

int main(int argc, char * argv[]) {
	int n = 0; 
	long long factorialvalue = 1L;//팩토리얼 총 합
	
	printf("펙토리얼 n값을 입력하시오 : ");
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++) {
		factorialvalue *= i;	
	}

	printf("%d! = %lld", n, factorialvalue);
	return 0;
}