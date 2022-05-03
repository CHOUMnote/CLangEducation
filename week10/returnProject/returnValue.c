/*
작성자 : 김지호
학번 : 20195141
포인터를 이용해서 두 수를 더하기
포인터를 이용하는 이유2 - c언어 함수는 리턴값이 무조건 1개이다.
*/

#include <stdio.h>

int sum(int v1, int v2, double *p) {	//하나는 리턴 다른 하나는 간접 참조로 리턴 대신
	*p = (v1 + v2) / 2;
	return v1 + v2;
}
int main(int argc, char* argv[]) {

	int value1 = 100;
	int value2 = 120;
	int sumvalue;
	double avg;
	sumvalue = sum(value1, value2, &avg);	//avg를 주소로 넘김

	printf("합계 : %d    평균 : %.2f", sumvalue, avg);
	return 0;
}