#include <stdio.h>
int main(void){
	int i=0, n=0;
	while(i<5){
		while(n<i){
			printf("%c ",'o');
			n++;
		}
		printf("%c \n",'*');
		i++;
		n=0;
	}
	return 0;
}
