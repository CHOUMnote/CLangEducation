/*
�̸� : ����ȣ
�й� : 20195141
�Ҽ� ���ϱ�
*/
#include <stdio.h>

int isPrimeNumber(int n);
int main(int argc, char* argv[]) {
	int inputNumber = 0;
	int c = 0;
	int i;
	printf("��� �ִ밪 : ");
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

		if (isPrimeNumber(i) == 1)
			printf("%d    ", i);

	

	return 0;
}
int isPrimeNumber(int n) {
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