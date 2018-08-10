#include <stdio.h>
int main(void){
	int dan=2, i=1;
	do
	{
		do
		{
			printf("%dX%d=%d\n",dan,i,dan*i);
			i++;
		}while(i<10);
		i=1;
		dan++;
	}while(dan<10);
	return 0;
}
