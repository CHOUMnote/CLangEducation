/*
작성자 : 김지호
학번 : 20195141
구조체와 그 배열을 이용하여 학생정보를 출력하는 프로그램(전역 구조체로 다름 함수에 매개변수로 이용하기)
실습 5번
*/

#include <stdio.h>

//전역 구조체 지정 다른 함수에서도 접근 가능
typedef struct {
	char name[20];
	int age;
	int score[2];
}STUDENT;	//유도 자료형 STUDENT

void inputArray(STUDENT std[]);		//std[0]	,	*(std+1)
void printArray(STUDENT* p);	//p[0]	, *p++
int sum(int score[]);
double average(int s);
int main(int argc, char* argv[]) {
	STUDENT std[5];	//구조체 배열	->	std	배열 이름 = 주소 상수 
	inputArray(std);

	printArray(std);

	return 0;
}
void inputArray(STUDENT std[]) {	//간접참조!
	int i;
	for (i = 0; i < 5; i++ ) {
		printf("%d 번째 학생의 이름을 입력하세요 : ", i+1);
		scanf_s("%s", std[i].name, 20);	//20은 최대 입력 바이트 => scanf_s 기본 파라미터!
		printf("%d 번째 학생의 나이를 입력하세요 : ", i + 1);
		scanf_s("%d", &std[i].age);
		printf("%d 번째 학생의 중간고사 점수를 입력하세요 : ", i + 1);
		scanf_s("%d", &std[i].score[0]);
		printf("%d 번째 학생의 기말고사 점수를 입력하세요 : ", i + 1);
		scanf_s("%d", &std[i].score[1]);	//call by value이기때문에 주소값에 받는다!
	}
}
void printArray(STUDENT* p) {	//출력 함수
	int i;
	printf("%-10s %-3s %-3s %-3s %-3s %-3s\n","이름","나이","중간","기말","총점","평균");
	for (i = 0; i < 5; i++) {
		printf("%-10s %-3d %-3d %-3d %-3d %-3.1f\n", p->name, p->age, p->score[0], p->score[1], sum(p->score), average(sum(p->score)));
		p++;
	}//배열에 들어있는 각 구조체에 대하여 출력
}
int sum(int score[]) {	//총점
	return score[0] + score[1];
}
double average(int s) {	//평균
	return s / 2.0;
}