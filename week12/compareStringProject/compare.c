/*
이름 : 김지호
학번 : 20195141
문자열 2개를 입력받고, 그 문자열 두개가 같인지 판별하는 프로그램
실습 6번
*/

#include <stdio.h>

int main(int argc, char* argv[]) {

	char a[100];
	char b[100];
	int i = 0;

	printf("문자열 2개를 입력해 주세요\n");
	gets_s(a,100);
	gets_s(b, 100);
	printf("%s %s",a,b);
	
	//strcmp() 내장 함수 존재
	while (a[i] != '\0' || b[i] != '\0') {	//문자열의 길이가 다를 수 있기 때문에 큰거 만큼 반복
		if(a[i] != b[i]){	//각 문자열 자릿수를 비교해서 틀리면 프로그램 종료
			printf(" 두 문자열은 다릅니다.");
			return 0;
		}
		i++;
	}
	printf("두 문자열은 같습니다.");	//두 문자열이 같다면 반복문 탈출후 종료


	return 0;
}