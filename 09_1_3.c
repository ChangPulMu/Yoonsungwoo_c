#include <stdio.h>
void Fibonachi(int);
int main(void){
	int a=0;
	printf("몇 개의 피보나치 수열을 보시겠습니까? : ");
	scanf("%d", &a);
	Fibonachi(a);
	return 0;
}
void Fibonachi(int n){
	int m=0, l=1, sum=0, i;
	if(n==1)
		printf("%d", m);
	else if(n<=0)
		return;
	else
		printf("%d %d ",m,l);
	//printf("%d %d ",m,l); 틀림
	for(i=2;i<n;i++){
		sum = m + l;
		printf("%d ", sum);
		m = l;
		l = sum;
	}
}
