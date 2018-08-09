#include <stdio.h>
int main(void){
	double leftx=0, lefty=0, rightx=0, righty=0;
	printf("좌 상단의 x,y 좌표 : ");
	scanf("%lf %lf", &leftx, &lefty);
	printf("우 상단의 x,y 좌표 : ");
	scanf("%lf %lf", &rightx, &righty);
	printf("두 점이 이루는 직사각형의 넓이는 %f입니다.",(rightx-leftx)*(righty-lefty));
	return 0;
}
