/*
작성자 : 김지호
학번 : 20195141
2차원 배열을 동적 메모리 할당이용해 초기화 하는 프로그램
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
	int size;
	int* p;
	int** q;		//2차원 배열 할당
	int* r[5];		//정수의 주소를 갖는 길이가 5인 배열
	//int(* r)[5];	//r이라는 변수는 5개짜리 정수 배열을 가리키는 주소
	q = &r; // r은 포인터 배열 -> r의 주소 참조는 2차 배열이 가능
			//*(q+n) 는 각 r[n] 참조

	q = (int**)malloc(20);	//r의 길이는 5 따라서 5*4 = 20
	for (int i = 0; i < 5; i++) {	//길이가 50인 배열을 총 5개 만듬
		q[i] = (int*)malloc(200);
	}

	for (int i = 0; i < 5; i++) {	//초기화
		for (int j = 0; j < 50; j++) {
			q[i][j] = i;
		}
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 50; j++) {
			printf("%d ", *(* (q + i) + j));	//출력 q[i][j]
		}
		printf("\n");
	}
	
	return 0;
}