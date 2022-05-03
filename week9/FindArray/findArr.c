/*
이름 : 김지호
학변 : 20195141
코드 작성일 : 220426
사용자 입력으로 배열을 초기화 하고 출력, 그리고 찾고자 하는 값의 인덱스를 찾는 프로그램
*/

#include <stdio.h>

void scan(int arr[]);	//사용자 입력으로 배열 초기화
void printArray(int arr[]);	//배열 전체 출력 함수
int findArray(int arr[], int key);	//배열 내 특정 값의 위치 리턴
int main(int argc, char* argv[]) {
	int arr[10] = { 0 }; //배열 선언
	int key = 0;
	int loc = -1;

	scan(arr);	//배열 입력
	printArray(arr);	//배열 출력
	printf("찾을 값을 입력하세요 : ");
	scanf_s("%d", &key);
	loc = findArray(arr, key);	//키값 인덱스 서치
	if (loc == -1)	//출력 제어
		printf("찾고자 하는 키값 %d 값은 배열에 없습니다.", key);
	else
		printf("찾고자 하는 키값 %d 값은 인덱스 [%d]에 있습니다.", key, loc);

	return 0;
}

void scan(int arr[]) {	//배열을 사용자 입력으로 초기화
	int i = 0;
	for (i = 0; i < 10; i++) {
		printf("%d/10 번째 값을 입력해주세요 : ",i+1);
		scanf_s("%d", &arr[i]);
	}
}
void printArray(int arr[]) { //배열 출력
	int i = 0;
	for (i = 0; i < 10; i++) 
		printf("배열의 [%d]번째 값은 : %d\n", i, arr[i]);
}
int findArray(int arr[], int key) {	//배열의 키값 서칭
	int i = 0;
	for (i = 0; i < 10; i++) 
		if (arr[i] == key) 
			return i;	//있으면 인덱스 리턴
	return -1;	//없으면 -1
}