#include <stdio.h>
void HighNum(int);
int Iseung(int);
int main(void){
	int a=0;
	printf("상수를 입력하세요 : ");
	scanf("%d", &a);
	HighNum(a);
}
void HighNum(int n){
	int i;
	for(i=0;;i++)
		if(Iseung(i)>n){
			printf("공식을 만족하는 최댓값은 %d\n",i-1);
			break;
		}
}
int Iseung(int A){
	if(A<1)
		return 1;
	else
		return 2*Iseung(A-1);
}
