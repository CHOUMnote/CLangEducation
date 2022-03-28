/*
이름 : 김지호
학번 : 20195141
키와 몸무게를 입력받아서 비만도를 출력하는 프로그램
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

	printf("키를 입력하세요 : ");
	scanf_s("%lf", &height);
	printf("몸무게를 입력하세요 : ");
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
		printf("비만지수 %.2f 정상체중",bmi);
	else if (bmi < 30)
		printf("비만지수 %.2f 경도비만", bmi);
	else if (bmi < 50)
		printf("비만지수 %.2f 중증도비만", bmi);
	else
		printf("비만지수 %.2f 고도비만", bmi);
}