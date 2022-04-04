/*
이름 : 김지호
학번 : 20195141
반복문을 이용하여 합을 구하는 프로그램
*/
#include <stdio.h>

int sum(int end, int mode);

int main(int argc, char* argv[]) {
	int end = 0;
	int i;
	int total = 0;

	printf("합을 출력할 마지막 값을 입력 : ");
	scanf_s("%d", &end);

	printf("1부터 %d까지의 짝수의 합 : %d\n", end, sum(end, 2));
	printf("1부터 %d까지의 홀수의 합 : %d\n", end, sum(end, 1));
	printf("1부터 %d까지의 총 합 : %d\n", end, sum(end, 0));

	return 0;
}

int sum(int end, int mode) {
	int total = 0;
	int i;
	if (mode == 2) {
		for (i = 1; i <= end; i++)
			if (i % 2 == 0)
				total += i;
	}
	else if (mode == 1) {
		for (i = 1; i <= end; i++)
			if (i % 2 != 0)
				total += i;
	}
	else {
		for (i = 1; i <= end; i++)
			total += i;
	}
	return total;
}