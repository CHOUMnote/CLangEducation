//조건에 따른 논리연산 구현하기
//작성자 : 김지호
//학번 : 20195141

#include <stdio.h>

int main(int argc, char* argv[]) {

	int age = 19;
	char gender = 'm';
	int com = 100, eng = 60, math = 90;
	int sum= 210, avg = 70;
	int value = 100, count = 5;
	int year = 2022;
	int input = 12;

	printf("나이가 19세 이상이고 남자인가 ? %d\n", age >= 19 && gender == 'm'); //1
	printf("컴퓨터와 영어 그리고 수학 모두가 90점 이상인가 ? %d\n", com >= 90 && eng >= 90 && math >= 90); //0
	printf("총점이 200점 이상이거나 평균이 60점 이상인가 ? %d\n", sum >= 200 || avg >= 60); //1
	printf("점수가 60점 미만이거나 결석횟수가 4번 이상인가 ? %d\n", value < 60 || count >= 4); //1
	printf("현재의 년도가 윤년인가 ? %d\n", year % 4 == 0 && year % 100 !=0 || year % 400 == 0); //0
	printf("입력된 숫자가 짝수인가 ? %d\n", input % 2 == 0); //1
	printf("입력된 숫자가 3과 5의 공배수인가 %d\n", input % 3 == 0 && input % 5 == 0); //0
}