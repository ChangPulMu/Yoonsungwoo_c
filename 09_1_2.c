#include <stdio.h>
double CelToFah(double);
double FahToCel(double);
int main(void){
	char c=0;
	double a=0.0;
	printf("화씨 온도면 f를 섭씨 온도면 c를 입력해주세요 : ");
	scanf("%c", &c);
	printf("온도를 입력하세요 : ");
	scanf("%lf", &a);
	if(c=='f')
		printf("섭씨 온도는 %f입니다.", FahToCel(a));
	else if(c=='c')
		printf("화씨 온도는 %f입니다.", CelToFah(a));
	else
		printf("화씨 혹은 섭씨 온도를 입력해주세요");
	return 0;
}
double CelToFah(double n){
	return 1.8*n+32;
}
double FahToCel(double m){
	return (m-32)*(5.0/9.0);
	//그냥 (m-32)/1.8하면됨
}
