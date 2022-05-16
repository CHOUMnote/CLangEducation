/*
이름 : 김지호
학번 : 20195141
문자열을 복사하는 프로그램
실습 5번
*/

#include <stdio.h>

int main(int argc, char* argv[]) {
	char* str = "copy string";
	char* start = str;	//처음 포인터 위치 기억
	char dest[50];
	int i = 0;

	while (*str != '\0') {	//배열 0번부터 str이 가르키는거 하나씩 복사
		dest[i++] = *str;
		str++;
	}
	dest[i] = '\0';	//문자열은 문자 배열에 들어있는 \0로 판단, 만약 없다면 그냥 문자

	str = start;	//위 반복문에서 포인터 위치를 바꿨기 때문에 str의 초기 포인터 위치로 이동
	printf("원본 문자열 : %s\n", str);
	printf("복사 문자열 : %s", dest);



	return 0;
}