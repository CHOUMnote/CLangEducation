/*
이름 : 김지호
학번 : 20195141
키보드로 부터 입력 받은 정수가 정수인지 홀수인지 판단하는 프로그램
*/

#include <stdio.h>

int main(int argc, char* argv[]) {
	int num = 0;
	printf("정수 값을 입력 하세요 : ");
	scanf_s("%d", &num);
	
	if (num % 2 == 0)
		printf("입력한 값 %d는 짝수입니다.", num);
	else
		printf("입력한 값 %d는 홀수입니다.", num);

	return 0;
}