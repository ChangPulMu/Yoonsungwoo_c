#include <stdio.h>
int main(void){
	int num=2147483640;
	while(!(num==-2147483640)){
		printf("%d\n", ++num);
	}
	num=2147483648;
	printf("%d",num);
	return 0;
}
