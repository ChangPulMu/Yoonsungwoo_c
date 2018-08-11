#include <stdio.h>
int main(void){
	int arr[] = {1, 2, 3, 4, 5, 6}, tmp=0;
	int * f = &(arr[0]), * b = &(arr[5]);

	for(int i=0;i<(sizeof(arr)/sizeof(int))/2;i++){
		tmp = *(f+i);
		arr[i] = *(b-i);
		arr[(sizeof(arr)/sizeof(int))-1-i] = tmp;
	}

	for(int m=0;m<sizeof(arr)/sizeof(int);m++)
		printf("%d ", arr[m]);

	return 0;
}
