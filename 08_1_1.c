#include <stdio.h>
int main(void){
	int i=1;
	while(i<100){
		if(i%7==0&&i%9==0)
			printf("%d는 7과 9의 배수\n",i);
		else if(i%7==0)
			printf("%d는 7의 배수\n",i);
		else if(i%9==0)
			printf("%d는 9의 배수\n",i);
		i++;
	}
	return 0;
}
