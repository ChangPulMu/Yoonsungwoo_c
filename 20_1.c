#include <stdio.h>
void Chng(int [][4]);

int main(void){
	int arr[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};

	Chng(arr);

	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++)
			printf("%d ",arr[i][j]);
		printf("\n");
	}

	return 0;
}

void Chng(int Arr[][4]){
	int tmp[4][4];

	for(int m=0;m<4;m++)
		for(int n=0;n<4;n++)
			tmp[m][n]=Arr[m][n];

	for(int m=0;m<4;m++)
		for(int n=0;n<4;n++)
			Arr[n][3-m]=tmp[m][n];
}
