/*
�ۼ��� : ����ȣ
�й� : 20195141
����ü�� �̿��Ͽ� �м��� ���� ����ϴ� ���α׷� (�پ��� ����ü ���İ� ���������� �������� �ǽ��ϱ�)
�ǽ� 3,4,5��
*/

#include <stdio.h>

/*
struct FRACTION{
	int numerator;
	int denominator;
};
�������� ���� �� �ٸ� �Լ������� �Ȱ��� ��밡��
struct (�±׸�) (������) ���� ����

struct {	//���� ����
	int numerator;
	int denominator;
} (������) ����ü ������ ��� -> �Ű����� ���� �Ұ���(�ڷ��� ����X)
*/
typedef struct {	//���� ����
	int numerator;
	int denominator;
}FRACTION;	//FRACTION Ÿ���� ����ü

//����ü�� �����̱� ������ �Ϲ������� call by value!!
/*	�ǽ� 4��
void  multiplication(FRACTION fr1, FRACTION fr2) {
	FRACTION res;
	res.numerator = fr1.numerator * fr2.numerator;
	res.denominator = fr1.denominator * fr2.denominator;
	//FRACTION res = { fr1.numerator * fr2.numerator, fr1.denominator * fr2.denominator };//�迭�� �ʱ�ȭ ����
	printf("\n The result of %d/%d * %d/%d is %d/%d", fr1.numerator, fr1.denominator, fr2.numerator, fr2.denominator, res.numerator, res.denominator);
}
*/
//	�ǽ� 5��
void multiplication(FRACTION* f1, FRACTION* f2, FRACTION* res) {
	(*res).numerator = (*f1).numerator * (*f2).numerator;	//'.' �����ڰ� �켱������ ���� ���� �������� ����� �ؾ���
	res->denominator = f1->denominator * f2->denominator;	//���� ���� ����
}
int main(int argc, char* argv[]) {
	//FRACTION (������)
	FRACTION fr1;
	FRACTION fr2;
	FRACTION res;

	printf("Key first fraciton in the form of x/y: ");
	scanf_s("%d / %d", &fr1.numerator, &fr1.denominator);	//'/'�Է����� �� ���ڸ� ����
	printf("Key second fraciton in the form of x/y: ");
	scanf_s("%d / %d", &fr2.numerator, &fr2.denominator);	//�� ����ü�� �ʵ忡 ������ �Է�

	//multiplication(fr1, fr2);	//call by value 
	multiplication(&fr1, &fr2, &res);	//call by reference 
	printf("\n The result of %d/%d * %d/%d is %d/%d", fr1.numerator, fr1.denominator, fr2.numerator, fr2.denominator, res.numerator, res.denominator);

	return 0;
}
