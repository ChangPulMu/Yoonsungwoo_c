#include <stdio.h>
int main(void){
	int num1=0, num2=0, cha=0;
	printf("두 개의 정수를 입력하시오 : ");
	scanf("%d %d", &num1, &num2);
	cha = num1>num2?num1-num2:num2-num1;
	printf("두 수의 차 : %d\n", cha);
	return 0;
}
