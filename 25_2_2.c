#include <stdio.h>
#include <stdlib.h>

int main(void){
	int * tak = (int *)calloc(sizeof(int),5), i=0;

	printf("-1을 입력하기 전까지 난 수를 받는다!\n");
	
	while(1){
		printf("%d번째 입력하시오 : ",i+1);

		if((tak+i)==0)
			tak = (int *)realloc(tak, sizeof(tak)+sizeof(int)*3);
		//이거 말고 5의 값을 int형 변수로 정해서 i+1==5의값변수 면 5의값 변수에 3을 더해줘서 하는 식으로 하는것이 정답!

		scanf("%d", &(tak[i]));

		if(tak[i]==-1)
			break;

		i++;
	}

	for(int m=0;m<i;m++)
		printf("%d \n",tak[m]);

	return 0;
}
