#include <stdio.h>
#define MAX(n,m) (n>m)?n:m //(((n)<(m))?(n):(m)) 이런식으로 괄호로 잘 묶어주자!

int main(void){
	double a, b;

	printf("두 개의 수를 입력하시오 : ");
	scanf("%lf %lf", &a, &b);

	printf("큰 값은 %f\n",MAX(a,b));

	return 0;
}
