#include <stdio.h>
int SquareByValue(int);
void SquareByReference(int *);

int main(void){
	int num=0;

	printf("제곱 값을 알고 싶은 수를 입력하시오 : ");
	scanf("%d", &num);

	printf("값에 의한 함수 결과 : %d \n", SquareByValue(num));
	SquareByReference(&num);
	printf("참조에 의한 함수 결과 : %d \n", num);

	return 0;
}

int SquareByValue(int n){
	return n*n;
}

void SquareByReference(int * m){
	(*m) *= (*m);
}
