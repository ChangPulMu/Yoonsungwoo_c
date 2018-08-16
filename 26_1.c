#include <stdio.h>
#define MULTIPLE(a,b,c) ((a)*(b)*(c))
#define SUM(a,b,c) ((a)+(b)+(c))

int main(void){
	int n,m,l;

	printf("세 개의 인자를 입력하시오 : ");
	scanf("%d %d %d",&n,&m,&l);

	printf("덧셈 : %d, 곱셈 : %d\n",SUM(n,m,l),MULTIPLE(n,m,l));

	return 0;
}
