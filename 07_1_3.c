#include <stdio.h>
int main(void){
	int num=0, n=1;
	while(n){
		printf("값을 입력하세요 : ");
		scanf("%d", &n);
		num += n;
	}
	printf("합 : %d\n",num);
	return 0;
}
