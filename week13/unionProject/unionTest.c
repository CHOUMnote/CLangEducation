/*
작성자 : 김지호
학번 : 20195141
enum 열거형은 표준 정수에 기반을 둔 사용자 정의 형식이다. 각 정수는 열거 상수이고 표시는 기호로 표시한다. 이를 연습하는 프로그램
실습 2번
*/

#include <stdio.h>

int main(int argc, char* argv[]) {
	union {
		short num;
		char chAry[2];
	}data;
	//공용체의 필드는 하나만 접근 가능하다 - 동시에 접근 불가능
	data.num = 16706;

	printf("short: %hd\n", data.num);

	data.chAry[0] = 'A';
	data.chAry[1] = 'B';
	// 더 이상 data.num에 해당하는 값은 사용할 수 없다.
	printf("Ch[0] : %c\n", data.chAry[0]);
	printf("Ch[1] : %c\n", data.chAry[1]);
	// printf ("short: %hd\n" , data.num);  // 결과를 확인해 보세요.
	//위 테스트 문구는 변조된 값이 나온다 -> 공용체 필드 chAry에 메모리를 할당함에 따라 num의 값은 더 이상 원래 초기화된 값을 잃어 버렸기 때문

	return 0;
}