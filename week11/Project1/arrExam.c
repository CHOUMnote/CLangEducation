/*
�ۼ��� : ����ȣ
�й� : 20195141
����° ������ ��� ���� - �迭���� ���� : �迭�� �̸� == �ּ� ��� => �ּҸ� �����ϴ� ������ ����(�迭�� 0�� �ε��� �ּҰ� ����)
*/

#include <stdio.h>

void printArray(int *p, int size) {	//�迭 ó���ϴ� �Լ��� ������� �迭�� ���� �޴°� ����.
	int i;
	for (i = 0; i < size; i++)
		printf("%d\n", *p++); //p[i]�� �Ǵٸ� ǥ�� ... *(p+i)�� ���� p�� �ּ� ����� �ƴ϶� �����̱� ������ �����ϴ�.

}
int main(int argc, char* argv[]) {
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int size = sizeof(arr) / sizeof(arr[0]);	// sizeof(arr) = 4 * 10 = 40, sizeof(arr[0]) = 4 ... 40/4 = 10(�迭�� ����)

	printArray(arr,size); //�迭 ���� ��� -> �迭�̸� (n���� �迭�� ����)




	return 0;
}