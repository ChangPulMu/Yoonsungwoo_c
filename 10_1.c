#include <stdio.h>
int main(void){
	int num=0;
	printf("10진수 정수를 입력하세요 : ");
	scanf("%d", &num);
	printf("16진수로 바꾼 값은 %#X입니다.", num);
	return 0;
}
