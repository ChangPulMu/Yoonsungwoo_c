#include <stdio.h>

typedef struct{
	double actl;
	double imag;
}Complx;

void Sum(Complx,Complx);
void Mult(Complx,Complx);

int main(void){
	Complx cp1, cp2;

	printf("복소수 입력1[실수 허수] : ");
	scanf("%lf %lf",&(cp1.actl),&(cp1.imag));
	
	printf("복소수 입력2[실수 허수] : ");
	scanf("%lf %lf",&(cp2.actl),&(cp2.imag));

	Sum(cp1,cp2);
	Mult(cp1,cp2);

	return 0;
}

void Sum(Complx c1, Complx c2){
	printf("합의 결과] 실수 : %f, 허수 : %f\n",c1.actl+c2.actl,c1.imag+c2.imag);
}

void Mult(Complx p1, Complx p2){
	printf("곱의 결과] 실수 : %f, 허수 : %f\n",(p1.actl*p2.actl)-(p1.imag*p2.imag),(p1.imag*p2.actl)+(p1.actl*p2.imag));
}
