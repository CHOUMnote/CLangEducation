/* �ǽ� 3 : print_calc ������Ʈ
   �ҽ����ϸ� :  calc.c
   �ۼ��� : 2022 .  2 . 28
   �ۼ��� : ����ȣ
   ���������� : 2022 .  2 . 28
   ���α׷� ���� : printCalc v1.0
   ���α׷� ���� : ������ �������� ����� ��� ���α׷�
*/
#include <stdio.h>

void main() {
	int a = 10, b = 3;
	float c = 10, d = 3;
	float res1, res2, res3;
	res1 = a / b;
	res2 = c / d;
	res3 = (float)a / b;
	printf(" %6.2f\n", res1);
	printf(" %6.2f\n", res2);
	printf(" %6.2f\n", res3);
	return 0;
}