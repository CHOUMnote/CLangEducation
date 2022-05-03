/*
작성자 : 김지호
학번 : 20195141
주소 연산좌와 간접연산자를 사용해서 포인터의 사용법을 익히는 프로그램
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {	
	int* p;	//정수를 가르키는 포인터 변수 int* p  || int *p 상관 없음
	int value = 10;
	int arr[] = {0,1};
	p = &value; //정수형 주소를 대입

	value = 0;	//직접 접근
	*p = 100;	//간점 점근
	printf("%d\n", *p); //간접참조
	printf("%d\n", value);	//직접참조
	printf("p에 들어있는 주소 값 : %p\n", p); //p의 들어있는 주소 값
	printf("value의 주소 값 : %p\n", &value);	//자기 자신 변수의 주소값

	p = arr; //배열의 변수이름은 주소 상수! &arr아님!
	p = &arr[0];	//주소연산자는 이렇게 사용! 위와 같은거
	
	printf("%d\n", *p); 
	*p++;	//arr[1]참조
	printf("%d\n", *p);

	return 0;
}
