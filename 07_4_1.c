#include <stdio.h>
int main(void){
	int num1=0, num2=0, sum=0;
	printf("두 개의 정수를 입력하세요(두 번째 정수가 첫 번째 정수보다 커야 합니다) : ");
	scanf("%d %d",&num1, &num2);
	for(;num1<=num2;num1++){
		sum+=num1;
	}
	printf("총합 : %d\n", sum);
	return 0;
}
