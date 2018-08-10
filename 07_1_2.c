#include <stdio.h>
int main(void){
	int num=0, n=1;
	printf("3의 배수, 어디까지 보실래요? : ");
	scanf("%d", &num);
	while(n<=num){
		printf("%dX%d=%d\n",3,n,3*n);
		n++;
	}
	return 0;
}
