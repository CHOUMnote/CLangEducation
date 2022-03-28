/*
이름 : 김지호
학번 : 20195141
두 수를 입력에 따른 메뉴 처리 프로그램
*/

#include <stdio.h>
void min(int a, int b);
void max(int a, int b);
void sum(int a, int b);
void avg(int a, int b);

int main(int argc, char* argv[]) {
	int a = 0; int b = 0;
	int menu = 0;

	printf("두 수를 입력하세요 : ");
	scanf_s("%d %d", &a, &b);

	printf("메뉴\n");
	printf("1. 작은수\n");
	printf("2. 큰수\n");
	printf("3. 합계\n");
	printf("4. 평균\n");
	printf("5. 종료\n");
	printf("메뉴를 선택하세요 : ");
	scanf_s("%d", &menu);

	switch (menu) {
	case 1:
		min(a, b);
		break;
	case 2:
		max(a, b);
		break;
	case 3:
		sum(a, b);
		break;
	case 4:
		avg(a, b);
		break;
	case 5:
		break;
	}

	return 0;
}
void min(int a, int b) {
	printf("결과 : %d", a < b ? a : b);
}
void max(int a, int b) {
	printf("결과 : %d", a < b ? b : a);
}
void sum(int a, int b) {
	printf("결과 : %d", a + b);
}
void avg(int a, int b) {
	printf("결과 : %f", (a + b) / 2.0);
}