#include <stdio.h>
int main(void){
	int num1=0,num2=0,num3=0;
	printf("세 개의 정수 입력 : ");
	scanf("%d%d%d", &num1, &num2, &num3);
	printf("%dX%d+%d=%d",num1,num2,num3,num1*num2+num3);
	return 0;
}
