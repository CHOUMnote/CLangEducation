/*
�ۼ��� : ����ȣ
�й� : 20195141
1���� �迭 ������ ���� ū ���� �޸��ּҸ� ��ȯ�ϴ� ���α׷�
�ǽ� 1��
*/

#include <stdio.h>

int* find_max(int arr[]);
int main(int argc, char* argv[]) {
	int arr[] = { 12,22,4,54,17,1,19,44,29,37 };
	int* p = find_max(arr);
	printf("�ִ밪 : %d, �ּ� : %p", *p, p);

	return 0;
}
int* find_max(int arr[]) {
	int index = 0;
	int i;
	for (i = 0; i < 10; i++) {
		if (arr[index] < arr[i])
			index = i;
	}
	return &arr[index];
}