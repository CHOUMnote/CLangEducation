/*
이름 : 김지호
학번 : 20195141
1~n까지 수식의 값 구하기
*/
#include <stdio.h>

int calc(int number);
int main(int argc, char* argv[]) {
	int n = 0;

	printf("반복 수행할 횟수를 입력하세요 : ");
	scanf_s("%d", &n);
	
	printf("함수 식 결과는 : %d", calc(n));

	return 0;
}
int calc(int number) { //결과 리턴
	int result = 0;
	for (int i = 1; i <= number; i++)
		result += (i * i + 1);
	return result;
}