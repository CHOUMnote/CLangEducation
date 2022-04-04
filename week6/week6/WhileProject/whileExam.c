/*
이름 : 김지호
학번 : 20195141
do~while 사용하여 입력의 합과 평균 구하기
*/
#include <stdio.h>

double average(int total, int count);
int main(int argc, char * argv[]) {
	int inputN = 0;
	int total = 0;
	double avg = 0.0;
	int count = 0;
	do {
		printf("정수입력 : ");
		scanf_s("%d", &inputN);

		if (inputN == 0) {
			printf("-> 종료");
			break;
		}
		total += inputN;
		avg = average(total, ++count);
		printf("-> 합 : %d, 평균 %.2f\n", total, avg);
	} while (1);

	return 0;
}
double average(int total, int count) {
	return (double)total / count;
}