//두개의 정수를 입력받아 사각형의 부피를 구하기
//작성자 : 김지호
//학번 : 20195141

#include <stdio.h>

int main() {
	int width, height;

	printf("밑변의 길이를 입력하세요 : ");
	scanf_s("%d", &width);
	printf("높이의 길이를 입력하세요 : ");
	scanf_s("%d", &height);

	printf("밑변의 길이 %d, 높이의 길이 %d 사각형의 부피는 %d입니다.",width, height,  width * height);
	return 0;
}