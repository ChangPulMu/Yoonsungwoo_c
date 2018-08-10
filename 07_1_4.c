#include <stdio.h>
int main(void){
	int num=0, n=9;
	printf("몇 단? : ");
	scanf("%d", &num);
	while(n!=0){
		printf("%dX%d=%d\n",num,n,num*n);
		n--;
	}
	return 0;
}
