#include <stdio.h>
int main(void){
	int arr[] = {1, 2, 3, 4, 5}, sum=0;
	int * ptr = &(arr[4]);

	for(int i=0;i<5;i++)
		sum += *(ptr-i); //문제에 따르면 sum += *(ptr--);이 조금 더 맞는 코드

	printf("합은 : %d \n",sum);
	
	return 0;
}
