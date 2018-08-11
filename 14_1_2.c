#include <stdio.h>
void Swap3(int *,int *, int *);

int main(void){
	int a=0, b=0, c=0;
	
	printf("세 개의 수를 입력하세요 : ");
	scanf("%d %d %d", &a, &b, &c);

	Swap3(&a,&b,&c);
	printf("%d %d %d \n",a,b,c);

	return 0;
}

void Swap3(int * n, int * m, int * l){
	int tmp1=0, tmp2=0;
	tmp1 = *m;
	*m = *n;
	tmp2 = *l;
	*l = tmp1;
	*n = tmp2;
}/*
	int tmp=0;
	tmp = *m;
	*m = *n;
	*n = *l;
	*l = tmp;
	이게 좀 더 좋은 코드! 창의력 키우자..!
	*/
