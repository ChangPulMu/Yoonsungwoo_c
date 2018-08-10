#include <stdio.h>
void Gcd(int, int);
int main(void){
	int a=0, b=0;
	printf("최대 공약수를 알고 싶다면 두 개의 수를 입력하시오 : ");
	scanf("%d %d",&a,&b);
	Gcd(a,b);
	return 0;
}
void Gcd(int n, int m){
	int i;
	if(n>m)
		i=m;
	else if(n<m)
		i=n;
	else
		printf("최대 공약수는 %d입니다.\n",n);
	for(;i>0;i--)
		if(n%i==0&&m%i==0){
			printf("최대 공약수는 %d입니다.\n", i);
			break;
		}
}
