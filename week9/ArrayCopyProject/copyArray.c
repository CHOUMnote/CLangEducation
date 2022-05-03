/*
이름 : 김지호
학변 : 20195141
코드 작성일 : 220426
2차원 배열을 1차원 배열로 복사하는 프로그램
*/

#include <stdio.h>

void printArray(int arr[]);	//배열 출력
void copyArray(int arr1[], int arr2[][8]);	//2차 배열을 1차 배열로 전환
void selectionSort(int arr[]);	//선택 정렬
int binarySearch(int arr[], int key);	//특정 키값 바이너리 서치
int main(int argc, char* argv[]) {
	int twoDimArr[2][8] = { {1,3,5,7,9,11,13,15},{2,4,6,8,10,12,14,16} };	//2차원 배열 선언 및 초기화
	int oneDimArr[16] = { 0 };
	int key = 0;
	int index = -1;

	copyArray(oneDimArr, twoDimArr);	//2차배열 -> 1차 배열
	printArray(oneDimArr);	//배열 출력
	selectionSort(oneDimArr);	//선택정렬
	printArray(oneDimArr);	//배열 출력
	
	printf("찾고자하는 값을 입력하세요 : ");
	scanf_s("%d", &key);
	index = binarySearch(oneDimArr, key);	//key값 바이너리 서치
	if (index == -1)
		printf("%d 값을 배열에서 찾을수 없습니다.",key);
	else
		printf("%d값은 배열의 %d 번 인덱스에 있습니다.",key,index);

	return 0;
}
void printArray(int arr[]) {	//배열 출력
	int i = 0;
	for (i = 0; i < 16; i++)
		printf("%d  ", arr[i]);
	printf("\n");
}
void copyArray(int arr1[], int arr2[][8]) {	//2차배열 -> 1차 배열
	int i, j;
	for (i = 0; i < 16; i++)
		arr1[i] = arr2[i / 8][i % 8];
}
void selectionSort(int arr[]) {		//선택정렬
	int i, j;
	int min;
	int temp;
	for (i = 0; i < 15; i++) {	//n-1까지? -> 이너 반복문이 n+1부터 탐색하기 때문
		min = i;	//최소값 인덱스 저장
		for (j = i+1; j < 16; j++) {	//i+1 ~ 끝까지
			if (arr[min] > arr[j])	//최소값  인덱스 저장
				min = j;
		}
		temp = arr[min];		//swap
		arr[min] = arr[i];
		arr[i] = temp;
	}
}
int binarySearch(int arr[], int key) {	//바이너리 서치
	int start = 0;
	int end = 15;
	int mid = (start + end) / 2;

	while (start <= end) {
		if (arr[mid] == key)	//찾으면 리턴
			return mid;
		else if (arr[mid] < key)	//키값이 크면 미드 기준 오른쪽 탐색
			start = mid + 1;
		else						//키값이 작으면 미드 기준 왼쪽 탐색
			end = mid - 1;
		mid = (start + end) / 2;	//미드 재설정
	}
	return -1;
}