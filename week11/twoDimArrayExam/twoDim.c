/*
작성자 : 김지호
학번 : 20195141
2차 배열과 포인터사이 관계를 알아보는 프로그램
실습 4번
*/

#include <stdio.h>

/*		영상 실습 내용
//void printTwoDimArray(int arr[2][5])	int arr[2][5] : 주소 상수 || int* arr : 주소 변수
//void printTwoDimArray(int* arr)		배열의 [0][0] 인덱스 주소를 참조
void printTwoDimArray(int(* arr)[5]) {	//자료형 (*포인터이름)[가로크기]
	int i, j;

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 5; j++) {
			printf("%d  ", arr[i][j]);
		}
		printf("\n");
	}

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 5; j++) {
			printf("%d  ", *((* (arr + i))+j));
			//arr[i][j] == *(arr[i]+j) == (*(arr+i))[j] == *((* (arr + i))+j)
		}
		printf("\n");
	}

	for (i = 0; i < 10; i++)
		printf("%d  ", *arr++);	//2차원배열 -> 1차원 배열처럼 표현(내부적으론 2차원 배열도 1차원 배열)
	//					arr[i]


	for (i = 0; i < 2; i++) {
		for (j = 0; j < 5; j++) {
			printf("%d  ", *(*arr+j));
		}
		arr++;
		printf("\n");
		//0행 = *(*arr+j)
		//n행 = *(*(arr+i)+j)
	}
}
*/

void printArray(int(*ary)[4]);	
int main(int argc, char* argv[]) {
	int array[][4] = { {1,2,3,4},{5,6,7,8} };

	printArray(array);	//2차원 배열도 1차원 배열과 같이 이름만 전달

	return 0;
}
void printArray(int(*ary)[4]) {	//ary는 길이가 4인 배열의 주소를 참조한다는 뜻
	int i, j;
	
	printf("인덱스 접근\n");
	for (i = 0; i < 2; i ++ ) {
		for (j = 0; j < 4; j++) {
			printf("%d  ", ary[i][j]);
		}
		printf("\n");
	}

	printf("주소연산 접근\n");
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 4; j++) {
			printf("%d  ", *(*(ary + i)+j));
		}
		printf("\n");
	}

	/*
	*(*(ary + i)+j) ->	*(ary + i) == ary는 길이가 4인 배열들을 참조 따라서 ary+i는 각 i번째 배열들을 접근
						*(*(ary + i)+j) == 안쪽 포인터는 각 i행 배열들의 접근 -> +j를 통해 i행의 j열 원소로 접근
						각 원소들도 주소들이기 때문에 이중포인터 사용
	*/
}