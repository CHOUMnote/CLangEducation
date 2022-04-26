/*
이름 : 김지호
학변 : 20195141
코드 작성일 : 220426
1 ~ 45 6개 중복 되지 않은 난수 생성하기
*/

#include <stdio.h>	//표준 입출력
#include <stdlib.h>	//표준 라이브러리
#include <time.h>	//시간 함수

int main(int argc, char* argv[]) {
	int lotto[6] = { 0 };	//배열 선언
	int check[46] = { 0 };	//난수 배열
	int rv = 0;
	int i = 0;
	int j = 0;
	srand(time(NULL));	//현재 시간 기준 랜덤 시드 변경

	for (i = 0; i < 6; i++) {
		rv = rand() % 45 + 1; //rand()의 범위 = rand() % (마지막 값 - 시작값 +1) + 시작 값 => rand() % 45 +1
		lotto[i] = rv;
		if (check[rv] == 0)	//중복된 값이 아니면 해당배열 충복처리
			check[rv] += 1;
		else				//중복된 값이면 i-- 후 다시 실행
			i--;
	}
	for (i = 0; i < 6; i++)	//배열 출력
		printf("%d\n", lotto[i]);
}