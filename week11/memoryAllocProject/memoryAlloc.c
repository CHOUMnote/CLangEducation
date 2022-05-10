/*
작성자 : 김지호
학번 : 20195141
동적 메모리 할당을 하는 프로그램
실습 5번
*/

#include <stdio.h>
#include <stdlib.h>
void fillArray(int*, int);
void printArray(int*, int);
int main(int argc, char* argv[]) {

	int size;
	int* p;
	printf("사용할 배열의 크기 입력 : ");
	scanf_s("%d", &size);
	p = (int*)malloc(size*sizeof(int)); //동적할당 리턴값 = void -> 형변환		 매개변수 = 바이트 수

	fillArray(p,size);
	printArray(p, size);

	free(p);	//메모리 할당 해제

	return 0;
}
void printArray(int*p, int size) {	//배열 출력
	int i;
	for (i = 0; i < size; i++) {
		printf("[%d] : %d  \n",i ,*(p + i));	//p[i]
	}
}
void fillArray(int* p, int size) {	//배열 초기화
	int i;
	int r;
	printf("1부터 몇까지 난수 생성??? : ");
	scanf_s("%d", &r);
	for (i = 0; i < size; i++) {
		p[i] = rand()%r+1;	//*(p+i)
	}
}
