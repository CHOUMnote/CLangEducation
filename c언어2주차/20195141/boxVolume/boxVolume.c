/* 실습 1 : boxVolume.c
   작성일 : 2022/03/07
   작성자 : 김지호
   프로그램 설명 : 부피 구하기
   */

#include <stdio.h>

int main() {
	int width = 2;
	int height = 3;
	int length = 2;
	int volume = width * height * length;

	printf("너비 %d 높이 %d 깊이 %d의 부피는 %d입니다.",width,height,length,volume);

	return 0;
}