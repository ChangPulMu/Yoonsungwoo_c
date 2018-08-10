#include <stdio.h>
double ISeung(int);
int main(void){
	int a=0;
	printf("정수 입력 : ");
	scanf("%d", &a);
	printf("2의 %d승은 %f\n",a,ISeung(a));
	return 0;
}
double ISeung(int n){
	if(n==0)
		return 1.0;
	else if(n>=1)
		return 2.0*ISeung(n-1);
	else
		return ISeung(n+1)/2.0;
}
