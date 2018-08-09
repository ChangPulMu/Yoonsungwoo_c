#include <stdio.h>
int main(void){
	int num1=0, num2=0, num3=0;
	printf("세 개의 정수 입력 : ");
	scanf("%d %d %d", &num1, &num2, &num3);
	printf("(%d-%d)X(%d+%d)X(%d나머지%d) = %d",num1,num2,num2,num3,num3,num1,(num1-num2)*(num2+num3)*(num3%num1));//나머지대신에 %를 쓰고 싶었지만 서식문자 취급이 되서 안됨
	return 0;
}
