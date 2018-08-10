#include <stdio.h>
int main(void){
	int num=0, n=0;
	printf("몇 번 출력 할까요? : ");
	scanf("%d", &num);
	while(n<num){
		printf("Hello world!\n");
		n++;
	}
	return 0;
}
