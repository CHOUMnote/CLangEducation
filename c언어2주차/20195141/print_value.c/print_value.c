/* �ǽ� 1 : print_value.c
   �ۼ��� : 2022/03/07
   �ۼ��� : ����ȣ
   ���α׷� ���� : ����� ������ ���
   */

#include <stdio.h>

int main() {
	char ch = 'M';
	int iValue = 95;
	double dValue = 3.14;
	float fValue = 1.1414f;

	printf("\n[ Print value ]\n");
	printf("char : %c\n",'W');
	printf("char variable : %c\n",ch);
	printf("int value : %d\n", 20);
	printf("int constants formula : %d\n",10+20);
	printf("int variable : %d\n",iValue);
	printf("double value : %f\n",3.1415);
	printf("double variable : %f\n", dValue);
	printf("float variable :%f\n", fValue);
	printf("int variable : %d and float variable : %f\n", iValue,fValue);


	return 0;
}