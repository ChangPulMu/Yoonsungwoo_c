#include <stdio.h>
int main(void){
	int i=0, sum=0;
	do
	{
		sum += i;
		i += 2;
	}while(i<=100);
	printf("총합 : %d", sum);
	return 0;
}
