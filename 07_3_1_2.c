#include <stdio.h>
int main(void){
	int num=0, sum=0;
	printf("정수를 입력하세요 : ");
	scanf("%d", &num);
	sum += num;
	while(num!=0){
		printf("정수를 입력하세요 : ");
		scanf("%d", &num);
		sum += num;
	}
	printf("총합 : %d\n", sum);
	return 0;
}
