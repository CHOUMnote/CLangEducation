/*
작성자 : 김지호
학번 : 20195141
포인터를 이용하여 두 값을 변경하는 프로그램
포인터를 사용해야하는 이유1 - 함수간 변수를 참조할수 있는 방법
						    - 호출시 주소 전달 -> 참조시 포인터로 참조
*/

#include <stdio.h>

void swap(int* a, int* b) {	//매개변수로 주소를 받아서 포인터 변수에 저장
	int temp = *a;			//a = &value1, b = &value2
	*a = *b;
	*b = temp;
}
int main(int argc, char* argv[]) {
	int value1 = 10;
	int value2 = 20;
	int temp;

	printf("before swap\n");
	printf("%d  %d\n", value1, value2);

	swap(&value1, &value2);	//매개변수가 포인터 변수이기 때문에 주소를 넘겨줌

	printf("after swap\n");
	printf("%d  %d\n", value1, value2);

	return 0;
}