#include <stdio.h>
int main(void){
	double num1=0, num2=0;
	printf("두 개의 실수 입력 : ");
	scanf("%lf %lf", &num1 ,&num2);
	printf("%f+%f=%f", num1, num2, num1+num2);
	return 0;
}
