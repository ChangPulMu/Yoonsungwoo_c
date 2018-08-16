#include <stdio.h>
#define PI 3.14
#define AREA(r) ((r)*(r)*PI)

int main(void){
	double ri;

	printf("원의 반지름 길이를 입력하시오 : ");
	scanf("%lf",&ri);

	printf("원의 넓이는 %f\n",AREA(ri));

	return 0;
}
