/*
작성자 : 김지호
학번 : 20195141
세번째 포인터 사용 이유 - 배열과의 관계 : 배열의 이름 == 주소 상수 => 주소를 저장하는 포인터 변수(배열의 0번 인덱스 주소값 참조)
*/

#include <stdio.h>

void printArray(int *p, int size) {	//배열 처리하는 함수는 사이즈와 배열을 같이 받는게 좋다.
	int i;
	for (i = 0; i < size; i++)
		printf("%d\n", *p++); //p[i]의 또다른 표현 ... *(p+i)와 동일 p는 주소 상수가 아니라 변수이기 때문에 가능하다.

}
int main(int argc, char* argv[]) {
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int size = sizeof(arr) / sizeof(arr[0]);	// sizeof(arr) = 4 * 10 = 40, sizeof(arr[0]) = 4 ... 40/4 = 10(배열의 길이)

	printArray(arr,size); //배열 전달 방법 -> 배열이름 (n차원 배열도 동일)




	return 0;
}