/*
이름 : 김지호
학번 : 20195141
gets()메소드로 문자열을 입력받고, 접근하여 대소문자 변환, 공백 수, 문자열을 거꾸로 접근하는 프로그램
실습 3번
*/

#include <stdio.h>
#include<ctype.h>	//isupper(), islower()
#include <string.h> //문자열 관련 헤더

void reversePrint(char* str);
int spaceCount(char* str);
void toUpperLower(char str[]);
int main(int argc, char* argv[]) {
	char inputString[20];

	printf("문자열 입력 : ");
	gets_s(inputString);	//공백 포함 한줄의 값을 입력받음
	printf("입력 문자열 : %s\n", inputString);

	toUpperLower(inputString);	//대문자->소문자, 소문자->대문자
	printf("대소문자 변환 후 : %s\n",inputString);

	printf("문자열의 공백 수는 %d 입니다.\n", spaceCount(inputString));	//입력한 문자열의 공백 수 리턴	isspace() 메소드 존재

	printf("문자열 거꾸로 출력 : ");
	reversePrint(inputString);
	return 0;
}
void toUpperLower(char str[]) {
	int i;
	for (i = 0; str[i] != '\0'; i++) {	//\n이 나올때 까지 반복 
		if (islower(str[i]))	//소문자이면 대문자로
			str[i] -= 32;	//소문자는 대문자보다 32만큼 큼
		else if (isupper(str[i]))	//대문자이면 소문자로
			str[i] += 32;
	}
}
int spaceCount(char* str) {	//배열을 포인터로 접근
	int len = 0;
	while (*str != '\0') {	//접근한 문자가 \0이 아니면 => 문자열 한줄을 읽음(gets이기 때문에 공백도 포함함)
		if (*str == ' ')	//공백이면...
			len++;
		str++;
	}
	return len;
}
void reversePrint(char* str) {	//배열 포인터로 접근
	int len = strlen(str);
	int i;

	for (i = len - 1; i >= 0; i--)	//문자열 마지막 인덱싱(\0 제외) ~ 문자열 0번 까지
		printf("%c", str[i]);
}