/*
�ۼ��� : ����ȣ
�й� : 20195141
2�� �迭�� �����ͻ��� ���踦 �˾ƺ��� ���α׷�
�ǽ� 4��
*/

#include <stdio.h>

/*		���� �ǽ� ����
//void printTwoDimArray(int arr[2][5])	int arr[2][5] : �ּ� ��� || int* arr : �ּ� ����
//void printTwoDimArray(int* arr)		�迭�� [0][0] �ε��� �ּҸ� ����
void printTwoDimArray(int(* arr)[5]) {	//�ڷ��� (*�������̸�)[����ũ��]
	int i, j;

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 5; j++) {
			printf("%d  ", arr[i][j]);
		}
		printf("\n");
	}

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 5; j++) {
			printf("%d  ", *((* (arr + i))+j));
			//arr[i][j] == *(arr[i]+j) == (*(arr+i))[j] == *((* (arr + i))+j)
		}
		printf("\n");
	}

	for (i = 0; i < 10; i++)
		printf("%d  ", *arr++);	//2�����迭 -> 1���� �迭ó�� ǥ��(���������� 2���� �迭�� 1���� �迭)
	//					arr[i]


	for (i = 0; i < 2; i++) {
		for (j = 0; j < 5; j++) {
			printf("%d  ", *(*arr+j));
		}
		arr++;
		printf("\n");
		//0�� = *(*arr+j)
		//n�� = *(*(arr+i)+j)
	}
}
*/

void printArray(int(*ary)[4]);	
int main(int argc, char* argv[]) {
	int array[][4] = { {1,2,3,4},{5,6,7,8} };

	printArray(array);	//2���� �迭�� 1���� �迭�� ���� �̸��� ����

	return 0;
}
void printArray(int(*ary)[4]) {	//ary�� ���̰� 4�� �迭�� �ּҸ� �����Ѵٴ� ��
	int i, j;
	
	printf("�ε��� ����\n");
	for (i = 0; i < 2; i ++ ) {
		for (j = 0; j < 4; j++) {
			printf("%d  ", ary[i][j]);
		}
		printf("\n");
	}

	printf("�ּҿ��� ����\n");
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 4; j++) {
			printf("%d  ", *(*(ary + i)+j));
		}
		printf("\n");
	}

	/*
	*(*(ary + i)+j) ->	*(ary + i) == ary�� ���̰� 4�� �迭���� ���� ���� ary+i�� �� i��° �迭���� ����
						*(*(ary + i)+j) == ���� �����ʹ� �� i�� �迭���� ���� -> +j�� ���� i���� j�� ���ҷ� ����
						�� ���ҵ鵵 �ּҵ��̱� ������ ���������� ���
	*/
}