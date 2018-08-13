#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	int i, j;

	srand((int)time(NULL));

	i=rand()%6+1, j=rand()%6+1;

	printf("주사위 1의 결과 %d\n",i);
	printf("주사위 2의 결과 %d",j);

	return 0;
}
