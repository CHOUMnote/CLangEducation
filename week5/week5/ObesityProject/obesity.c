/*
�̸� : ����ȣ
�й� : 20195141
Ű�� �����Ը� �Է¹޾Ƽ� �񸸵��� ����ϴ� ���α׷�
*/

#include <stdio.h>
double calcStandard(double h);
double calcBmi(double w, double s);
double calcBmi(double w, double s);
void printResult(double bmi);

int main(int argc, char* argv[]) {
	double height = 0.0;
	double weight = 0.0;
	double standardWeight = 0.0;
	double bmi = 0.0;

	printf("Ű�� �Է��ϼ��� : ");
	scanf_s("%lf", &height);
	printf("�����Ը� �Է��ϼ��� : ");
	scanf_s("%lf", &weight);

	standardWeight = calcStandard(height);
	bmi = calcBmi(weight, standardWeight);
	printResult(bmi);

	return 0;
}
double calcStandard(double h) {
	return (h - 100) * 0.9;
}
double calcBmi(double w, double s) {
	double bmi = 0.0;
	bmi = (w - s) / s * 100;
	return bmi;
}
void printResult(double bmi) {
	if (bmi < 20)
		printf("������ %.2f ����ü��",bmi);
	else if (bmi < 30)
		printf("������ %.2f �浵��", bmi);
	else if (bmi < 50)
		printf("������ %.2f ��������", bmi);
	else
		printf("������ %.2f ����", bmi);
}