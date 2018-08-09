#include <stdio.h>
int main(void){
	int num1=0;
	printf("한 개의 정수 입력 : ");
	scanf("%d", &num1);
	num1 = (~num1)+1;
	printf("음수로 바뀐 결과 : %d",num1);
	return 0;
}
//왜 2의31승까지만 음수로 바뀔까.. 애초에 2의31승-1까지만 바뀌어야하는것 아닌가?
