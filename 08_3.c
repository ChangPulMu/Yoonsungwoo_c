#include <stdio.h>
int main(void){
	int n=0;
	printf("수를 입력하시오 : ");
	scanf("%d", &n);
	switch(n/10)
	{
		case 0:
			printf("0이상 10미만");
			break;
		case 1:
			printf("10이상 20미만");
			break;
		case 2:
			printf("20이상 30미만");
			break;
		default:
			printf("30이상");
	}
	return 0;
}
//창의력을 길러야겠다.. 틀림
