/*
�ۼ��� : ����ȣ
�й� : 20195141
�ּ� �����¿� ���������ڸ� ����ؼ� �������� ������ ������ ���α׷�
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {	
	int* p;	//������ ����Ű�� ������ ���� int* p  || int *p ��� ����
	int value = 10;
	int arr[] = {0,1};
	p = &value; //������ �ּҸ� ����

	value = 0;	//���� ����
	*p = 100;	//���� ����
	printf("%d\n", *p); //��������
	printf("%d\n", value);	//��������
	printf("p�� ����ִ� �ּ� �� : %p\n", p); //p�� ����ִ� �ּ� ��
	printf("value�� �ּ� �� : %p\n", &value);	//�ڱ� �ڽ� ������ �ּҰ�

	p = arr; //�迭�� �����̸��� �ּ� ���! &arr�ƴ�!
	p = &arr[0];	//�ּҿ����ڴ� �̷��� ���! ���� ������
	
	printf("%d\n", *p); 
	*p++;	//arr[1]����
	printf("%d\n", *p);

	return 0;
}
