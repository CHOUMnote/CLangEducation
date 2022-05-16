/*
이름 : 김지호
학번 : 20195141
문자열을 입력받아 문자열의 길이 , 알파벳 , 숫자 , 특수기호의 개수를 구분하는 프로그램
실습 4번
*/

#include <stdio.h>
#include <string.h> //문자열 관련 헤더
#include <ctype.h>	//islower, isupper포함 헤더

void stringInfoPrint(char* str);
int main(int argc, char* argv[]) {
	char* str[100];
	printf("문자열을 입력하세요 : ");
	scanf_s("%s", str, 100);	//str은 주소 상수이기 때문에 &사용 X

	printf("입력 문자열 : %s\n", str);
	stringInfoPrint(str);


	return 0;
}
void stringInfoPrint(char* str) {
	int alpha_cnt = 0;
	int numerric_cnt = 0;
	int special_cnt = 0;
	printf("문자열의 길이 : %d\n", strlen(str));//내장함수 사용 strlen() -> 문자열의 길이 반환
	while (*str != '\0') {
		if (islower(*str) || isupper(*str))		//소문자 || 대문자 이면 해당 포인터는 알파벳
			alpha_cnt++;
		else if (*str >= '0' && *str <= '9')	//0~9이면 숫자
			numerric_cnt++;
		else									//이도저도 아니라면 특수문자
			special_cnt++;
		str++;
	}

	printf("알파벳의 갯수 : %d\n", alpha_cnt);
	printf("숫자의 갯수 : %d\n", numerric_cnt);
	printf("특수문자의 갯수 : %d\n", special_cnt);
}