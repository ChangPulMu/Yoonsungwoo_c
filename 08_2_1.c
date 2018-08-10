#include <stdio.h>
int main(void){
	int dan=2, i=1;
	while(dan<10){
		if(dan%2!=0){
			dan++;
			continue;
		}
		while(i<10){
			printf("%dX%d=%d\n",dan,i,dan*i);
			i++;
		}
		i=1;
		/*
		 * for(i=1;i<10;i++){
		 * 		printf();
		 * } 이게 줄 수도 줄이고 조금 더 유용함*/
		dan++;
	}
	/*
	 * for(dan=2;dan<10;dan++) 이것 또한 그럼*/
	return 0;
}
