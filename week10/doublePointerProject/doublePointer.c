/*
작성자 : 김지호
학번 : 20195141
이중포인터와 그 입력을 테스트 해보는 프로그램
실습 5번 문제
*/

#include <stdio.h>
int main(int argc, char* argv[]) {
	int a;		//직접 참조
	int* p;		//간접 참조 포인터
	int** pp;	//이중 간접 참조 포인터
	p = &a;		//*p == a 
	pp = &p;	//a의 주소를 갖고있는 p의 메모리 주소를 넣음

	printf("정수 하나를 입력하세요 : ");
	scanf_s("%d", &a);
	printf("a의 값 : %d\n", a);	

	printf("정수 하나를 입력하세요 : ");
	scanf_s("%d", p);	//&p > p의 주소! p == &a 이기 때문에 p에 입력!
	printf("p의 값 % d\n", *p);

	printf("정수 하나를 입력하세요 : ");
	scanf_s("%d", *pp);	//*pp => p의 주소, p => &a
	printf("pp의 값 %d\n", **pp); 

	printf("a의 값 : %d\n", a);	//최종적으로 a의 값이 변함

	printf("%p %p %p",&a ,p, *pp); //서로의 값이 같음을 볼 수 있다.
	/*
	printf("a의 값 : %d  a의 주소 : %p\n", a, &a);
	printf("p가 참조 하고 있는 값 : %d	p의 값 : %p	p의 주소 : %p\n", *p, p, &p);
	printf("pp가 참조 하고 있는 값 : %d	pp의 값 : %p	pp의 주소 : %p\n", **pp, pp, &pp);
	*/

	return 0;
}