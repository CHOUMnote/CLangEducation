/*
�ۼ��� : ����ȣ
�й� : 20195141
�����͸� �̿��Ͽ� 1���� �迭���� Ư�� ���Ǳ��� ����ϴ� ���α׷�
�ǽ� 3��
*/

#include <stdio.h>

void printArray(int* p);
int main(int argc, char* argv[]) {

	int arr[10] = { 1,2,3,4,5,-1,7,8,9,10 };
	int i;
	int* p = arr;	//arr[0]�� �ּ�
	//char name[50] = "kim"; [ k i m \0 ]�� ���� �迭   ���ڹ迭�� \0������ String ������ ���� �迭
	/*
	for (i = 0; arr[i] != -1; i++) {
		printf("%d\n",arr[i]);
	}
	*/

	/*	���ڿ��� ������ ����
	i = 0;
	p = name;
	while (*p) {	//p�� ����Ű�� ���� ���ڿ��� ��������(\n) �ƴϸ�...
		printf("%c\n", *p++);
	}
	*/

	printArray(p);

	return 0;
}
void printArray(int* p) {
	while (*p != -1) {			//p�� ����Ű�� ���� -1�� �ƴϸ�...
		printf("%d\n", *p++);	//p+i => i��ŭ �ּ� ����X i���� ���� ����O
	}
}