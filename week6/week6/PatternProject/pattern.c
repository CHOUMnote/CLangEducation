/*
이름 : 김지호
학번 : 20195141
반복문을 이용하여 여러가지 모양의 별 찍기
*/
#include <stdio.h>

void printRect(int height, int width);
void printRightAngledTriangle(int height);
void printIsoscelesTriangle(int height);
void printInvertedTriangle(int height);
int main(int argc, char* argv[]) {
	int height = 0;
	int width = 0;

	printf("도형의 높이 : ");
	scanf_s("%d", &height);
	printf("\n도형의 너비 : ");
	scanf_s("%d", &width);
	
	printf("사각형\n");
	printRect(height, width);
	printf("직각삼각형\n");
	printRightAngledTriangle(height);
	printf("이등변삼각형\n");
	printIsoscelesTriangle(height);
	printf("역삼각형\n");
	printInvertedTriangle(height);
	return 0;
} 
void printRect(int height, int width) {
	int i, j;
	for (i = 0; i < height; i++) {
		for (j = 0; j < width; j++)
			printf("*");
		printf("\n");
	}
}
void  printRightAngledTriangle(int height) {
	int i, j;
	for (i = 0; i < height; i++) {
		for (j = 0; j <= i; j++)
			printf("*");
		printf("\n");
	}
}
void printIsoscelesTriangle(int height) {
	int i, j;
	for (i = 0; i < height; i++) {
		for (j = 0; j < height-i-1 ; j++)
			printf(" ");
		for (j = 0; j < i*2+1 ; j++)
			printf("*");
		printf("\n");
	}
}
void printInvertedTriangle(int height) {
	int i, j;
	for (i = 0; i < height; i++) {
		for (j = 0; j < i; j++)
			printf(" ");
		for (j = height; j > i*2 - 3; j--)
			printf("*");
		printf("\n");
	}
}