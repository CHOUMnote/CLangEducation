/*
�̸� : ����ȣ
�к� : 20195141
�ڵ� �ۼ��� : 220426
����� �Է����� �迭�� �ʱ�ȭ �ϰ� ���, �׸��� ã���� �ϴ� ���� �ε����� ã�� ���α׷�
*/

#include <stdio.h>

void scan(int arr[]);	//����� �Է����� �迭 �ʱ�ȭ
void printArray(int arr[]);	//�迭 ��ü ��� �Լ�
int findArray(int arr[], int key);	//�迭 �� Ư�� ���� ��ġ ����
int main(int argc, char* argv[]) {
	int arr[10] = { 0 }; //�迭 ����
	int key = 0;
	int loc = -1;

	scan(arr);	//�迭 �Է�
	printArray(arr);	//�迭 ���
	printf("ã�� ���� �Է��ϼ��� : ");
	scanf_s("%d", &key);
	loc = findArray(arr, key);	//Ű�� �ε��� ��ġ
	if (loc == -1)	//��� ����
		printf("ã���� �ϴ� Ű�� %d ���� �迭�� �����ϴ�.", key);
	else
		printf("ã���� �ϴ� Ű�� %d ���� �ε��� [%d]�� �ֽ��ϴ�.", key, loc);

	return 0;
}

void scan(int arr[]) {	//�迭�� ����� �Է����� �ʱ�ȭ
	int i = 0;
	for (i = 0; i < 10; i++) {
		printf("%d/10 ��° ���� �Է����ּ��� : ",i+1);
		scanf_s("%d", &arr[i]);
	}
}
void printArray(int arr[]) { //�迭 ���
	int i = 0;
	for (i = 0; i < 10; i++) 
		printf("�迭�� [%d]��° ���� : %d\n", i, arr[i]);
}
int findArray(int arr[], int key) {	//�迭�� Ű�� ��Ī
	int i = 0;
	for (i = 0; i < 10; i++) 
		if (arr[i] == key) 
			return i;	//������ �ε��� ����
	return -1;	//������ -1
}