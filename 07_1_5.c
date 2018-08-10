#include <stdio.h>
int main(void){
	int num=0, n=0, div=0, sum=0;
	printf("몇 개의 정수를 입력하시겠습니까? : ");
	scanf("%d", &num);
	div = num;
	while(num>0){
		printf("정수를 입력하세요 : ");
		scanf("%d", &n);
		sum += n;
		num--;
	}
	printf("평균값 : %f", (double)sum/div);
	return 0;
}
