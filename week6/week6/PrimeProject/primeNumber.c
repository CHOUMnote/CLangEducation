/*
이름 : 김지호
학번 : 20195141
소수 구하기
*/
#include <stdio.h>

int isPrimeNumber(int n);
int main(int argc, char* argv[]) {
	int inputNumber = 0;
	int c = 0; //1이면 소수 이상이면 소수x
	int i;
	printf("출력 최대값 : ");
	scanf_s("%d", &inputNumber);
	
	
	for (i = 1; i <= inputNumber; i++) 
	/*
		c = 0;
		for (j = 1; j < i; j++) 
			if (i % j == 0)
				c++;
		if (c == 1)
			printf("%d    ",i);	
	*/

		if (isPrimeNumber(i) == 1)//return 소수(1)이면
			printf("%d    ", i);

	

	return 0;
}
int isPrimeNumber(int n) { //소수면 1 소수가 아니면 0 리턴
	int i;
	int c = 0;
	for (i = 1; i < n; i++)
		if (n % i == 0)
			c++;
	if (c == 1)
		return 1;
	else
		return 0;

}