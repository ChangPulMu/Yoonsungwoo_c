#include <stdio.h>
int main(void){
	int i, m, num=2;
	for(m=0;m<10;num++){
		for(i=num-1;i>0;i--){
			if(num%i==0&&i!=1)
				break;
			else if(i==1){
				printf("%d ",num);
				m++;
			}
		}
	}
}
