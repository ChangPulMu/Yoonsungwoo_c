#include <stdio.h>
int main(void){
	int num=0, fac=1, i;
	printf("몇의 계승을 구하시겠습니까? : ");
	scanf("%d", &num);
	for(i=1;i<=num;i++){
		fac *= i;
	}
	printf("%d의 계승 : %d\n",num,fac);
	return 0;
}
