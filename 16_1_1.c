#include <stdio.h>

int main(void){
	int arr[3][9], m;

	for(m=2;m<5;m++)
		for(int i=1;i<10;i++)
			arr[m-2][i-1] = m*i;

	for(m=0;m<3;m++){
		for(int i=0;i<9;i++)
			printf("%d ",arr[m][i]);
		printf("\n");
	}

	return 0;
}
