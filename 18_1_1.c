#include <stdio.h>

int main(void){
	int a=3, b=4;
	int * arr1[5] = {&a};
	int * arr2[3][5] = {&b};

	int ** Arr1 = arr1;
	int *(* Arr2)[5] = arr2; //(** Arr2)[5]가 아니라 * (*Arr2)[5]라고 선언해야함!

	printf("%d %d \n",arr1[0],*(Arr1));
	printf("%d %d",arr2[0][0],**(Arr2));

	return 0;
}
