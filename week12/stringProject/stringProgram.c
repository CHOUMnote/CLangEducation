/*
이름 : 김지호
학번 : 20195141
문자열에 접근하여 문자열을 변환하고, 길이를 구하는 프로그램
실습 2번
*/

#include <stdio.h>
#include <string.h>

void toUpperCase2(char* str);	//포인터 접근 방식
void toUpperCase(char str[]);	//인덱스 접근 방식
int length(char str[]);			//길이 구하기 메소드
int main(int argc, char* argv[]) {
	char inputString[20]; //영문 기준 \0제외 19글자 배열
	//char* inputString => 문자 상수, 저장X
	printf("문자열을 입력하세요 : ");
	scanf_s("%s", inputString, 20);	//배열의 이름은 배열 첫번째의 주소 상수이기 때문에 &연산자 X 
									//&inputString[0]로 사용 가능

	printf("%s\n", inputString);//" "이거나 \0까지 읽음

	toUpperCase2(inputString);
	printf("대문자 변환\n");
	printf("%s\n", inputString);

	printf("문자열의 길이 : %d", length(inputString));//strlen(inputString) 내장함수를 이용하여 바로 구할 수 있다.

	return 0;
}
void toUpperCase(char str[]) {
	int i = 0;
	for (i = 0; str[i] != '\0'; i++) {	//\n이 나올때 까지 반복 
		if (str[i] >= 'a' && str[i] <= 'z')	//a~z일경우... (isupper(), islower()내장 함수 존재함
			str[i] -= 32;	//소문자는 대문자보다 32만큼 큼
	}
}
void toUpperCase2(char* str) {	//포인터를 통한 접근방법
	while (*str != '\0') {
		if (islower(*str))	//\0이 나올때 까지 반복
			*str -= 32;
		str++;
	}
}
int length(char str[]) {
	int len = 0;
	for (int i = 0; str[i] != '\0'; i++)
		len++;
	return len;
}