/*
작성자 : 김지호
학번 : 20195141
구조체를 이용하여 분수의 곱을 계산하는 프로그램 (다양한 구조체 형식과 직접참조와 간접참조 실습하기)
실습 3,4,5번
*/

#include <stdio.h>

/*
struct FRACTION{
	int numerator;
	int denominator;
};
전역변수 선언 후 다른 함수에서도 똑같이 사용가능
struct (태그명) (변수명) 으로 선언

struct {	//형식 정의
	int numerator;
	int denominator;
} (변수명) 구조체 변수로 사용 -> 매개변수 전달 불가능(자료형 존재X)
*/
typedef struct {	//형식 정의
	int numerator;
	int denominator;
}FRACTION;	//FRACTION 타입의 구조체

//구조체는 변수이기 때문에 일반적으로 call by value!!
/*	실습 4번
void  multiplication(FRACTION fr1, FRACTION fr2) {
	FRACTION res;
	res.numerator = fr1.numerator * fr2.numerator;
	res.denominator = fr1.denominator * fr2.denominator;
	//FRACTION res = { fr1.numerator * fr2.numerator, fr1.denominator * fr2.denominator };//배열로 초기화 가능
	printf("\n The result of %d/%d * %d/%d is %d/%d", fr1.numerator, fr1.denominator, fr2.numerator, fr2.denominator, res.numerator, res.denominator);
}
*/
//	실습 5번
void multiplication(FRACTION* f1, FRACTION* f2, FRACTION* res) {
	(*res).numerator = (*f1).numerator * (*f2).numerator;	//'.' 연산자가 우선순위가 높기 때문 포인팅을 제대로 해야함
	res->denominator = f1->denominator * f2->denominator;	//위와 같은 뜻임
}
int main(int argc, char* argv[]) {
	//FRACTION (변수명)
	FRACTION fr1;
	FRACTION fr2;
	FRACTION res;

	printf("Key first fraciton in the form of x/y: ");
	scanf_s("%d / %d", &fr1.numerator, &fr1.denominator);	//'/'입력으로 두 문자를 문할
	printf("Key second fraciton in the form of x/y: ");
	scanf_s("%d / %d", &fr2.numerator, &fr2.denominator);	//각 구조체의 필드에 값들을 입력

	//multiplication(fr1, fr2);	//call by value 
	multiplication(&fr1, &fr2, &res);	//call by reference 
	printf("\n The result of %d/%d * %d/%d is %d/%d", fr1.numerator, fr1.denominator, fr2.numerator, fr2.denominator, res.numerator, res.denominator);

	return 0;
}
