//연산자 우선순위, 증감연산자, 형변환 개념을 익히는 문제
//작성자 : 김지호
//학번 : 20195141

#include <stdio.h>

int main() {
	int x = 2;
	int y = 3;
	double z = 2.4;
	double result = 0.0;

	//a.
	//result = x++ + y++ + z;
	//printf("x값 %d, y값 %d, z값 %4.1f 일때 수식 x++ + y++ + z의 결과 %f;",x, y, z, result);

	//b.
	//result = ++x + y / 2 * 2 - (int)z;
	//printf("x값 %d, y값 %d, z값 %4.1f 일때 수식 ++x + y / 2 * 2 - (int)z의 결과 %4.1f;",x, y, z, result);

	//c.
	//result = (int)z - (x + (int)z) % 2 + 4.0;
	//printf("x값 %d, y값 %d, z값 %4.1f 일때 수식 (int)z - (x + (int)z) %% 2 + 4.0의 결과 %4.1f;", x, y, z, result);

	result = x * 6 - 2 * (3 + z) + y;
	printf("x값 %d, y값 %d, z값 %4.1f 일때 수식 x * 6 - 2 * (3 + z) + y의 결과 %4.1f;", x, y, z, result);

	return 0;
}