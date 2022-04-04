/*
이름 : 김지호
학번 : 20195141
반복문을 이용하여 피보나치 수열과 수열의 합 구하기
*/
#include <stdio.h>

int main(int argc, char* argv[]) {
	int first = 0;
	int second = 1;
	int next = 0;
	int i = 0;
	int last = 0;
	int sum = 1;
	printf("피보나치 수열의 마지막 항을 입력하세요 : ");
	scanf_s("%d", &last);

	if (last == 0) {
		printf("피보나치 수열 %d", 0);
		printf("\n수열 합계 : %d", 0);
	}
	else if (last == 1){
		printf("피보나치 수열 %d", 1);
		printf("\n수열 합계 : %d", 1);
	}
	else {
		printf("피보나치 수열 %d, %d, ", 0, 1);
		for (i = 2; i < last; i++) {
			next = first + second;
			sum += next;
			if (i == last - 1) 
				printf("%d", next);
			else 
				printf("%d, ", next);
			first = second;
			second = next;
		}
		printf("\n수열 합계 : %d", sum);
	}
	return 0;
}