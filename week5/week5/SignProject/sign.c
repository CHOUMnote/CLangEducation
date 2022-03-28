/*
이름 : 김지호
학번 : 20195141
키보드로 부터 입력 받은 정수의 부호를 판단하는 프로그램
*/

#include <stdio.h>

int main(int argc, char* argv[]) {
	int num = 0;
	printf("정수 값을 입력 하세요 : ");
	scanf_s("%d", &num);

	if (num > 0)
		printf("입력한 값 %d는 양수입니다.", num);
	else if (num < 0)
		printf("입력한 값 %d는 음수입니다.", num);
	else
		printf("0입니다.");
	return 0;
}