/*
이름 : 김지호 
학번 : 20195141
문자열 상수를 배열로(포인터 배열)로 저장하여 인덱싱 해서 사용하는 프로그램
실습 1번
*/

#include <stdio.h>

int main(int argc, char* argv[]) {
	char* Menu[] = { "1. 이름  : " ,"2. 나이  : " ,"3. 직업  : " };	//문자상수 이기 때문에 포인터 배열 선언한다.
	// 문자열 상수 => char* str = "나는 문자열 상수";

	printf("┏━━━━━━━━━━━━━━━━━━┓\n");
	printf("┃    데이터입력    ┃\n");
	printf("┣━━━━━━━━━━━━━━━━━━┫\n");
	printf("┃%-18s┃\n", Menu[0]);
	printf("┣━━━━━━━━━━━━━━━━━━┫\n");
	printf("┃%-18s┃\n", Menu[1]);
	printf("┣━━━━━━━━━━━━━━━━━━┫\n");
	printf("┃%-18s┃\n", Menu[2]);
	printf("┗━━━━━━━━━━━━━━━━━━┛\n");

	return 0;
}