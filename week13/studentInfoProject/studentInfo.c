/*
�ۼ��� : ����ȣ
�й� : 20195141
����ü�� �� �迭�� �̿��Ͽ� �л������� ����ϴ� ���α׷�(���� ����ü�� �ٸ� �Լ��� �Ű������� �̿��ϱ�)
�ǽ� 5��
*/

#include <stdio.h>

//���� ����ü ���� �ٸ� �Լ������� ���� ����
typedef struct {
	char name[20];
	int age;
	int score[2];
}STUDENT;	//���� �ڷ��� STUDENT

void inputArray(STUDENT std[]);		//std[0]	,	*(std+1)
void printArray(STUDENT* p);	//p[0]	, *p++
int sum(int score[]);
double average(int s);
int main(int argc, char* argv[]) {
	STUDENT std[5];	//����ü �迭	->	std	�迭 �̸� = �ּ� ��� 
	inputArray(std);

	printArray(std);

	return 0;
}
void inputArray(STUDENT std[]) {	//��������!
	int i;
	for (i = 0; i < 5; i++ ) {
		printf("%d ��° �л��� �̸��� �Է��ϼ��� : ", i+1);
		scanf_s("%s", std[i].name, 20);	//20�� �ִ� �Է� ����Ʈ => scanf_s �⺻ �Ķ����!
		printf("%d ��° �л��� ���̸� �Է��ϼ��� : ", i + 1);
		scanf_s("%d", &std[i].age);
		printf("%d ��° �л��� �߰���� ������ �Է��ϼ��� : ", i + 1);
		scanf_s("%d", &std[i].score[0]);
		printf("%d ��° �л��� �⸻��� ������ �Է��ϼ��� : ", i + 1);
		scanf_s("%d", &std[i].score[1]);	//call by value�̱⶧���� �ּҰ��� �޴´�!
	}
}
void printArray(STUDENT* p) {	//��� �Լ�
	int i;
	printf("%-10s %-3s %-3s %-3s %-3s %-3s\n","�̸�","����","�߰�","�⸻","����","���");
	for (i = 0; i < 5; i++) {
		printf("%-10s %-3d %-3d %-3d %-3d %-3.1f\n", p->name, p->age, p->score[0], p->score[1], sum(p->score), average(sum(p->score)));
		p++;
	}//�迭�� ����ִ� �� ����ü�� ���Ͽ� ���
}
int sum(int score[]) {	//����
	return score[0] + score[1];
}
double average(int s) {	//���
	return s / 2.0;
}