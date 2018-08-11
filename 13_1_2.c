#include <stdio.h>
int main(void){
	int arr[] = {1, 2, 3, 4, 5};
	int * ptr = arr;

	for(int i=0;i<sizeof(arr)/sizeof(int);i++){
		*ptr += 2; //이렇게도 메모리 공간 접근 가능! *(ptr+i) += 2;
		printf("%d ", *ptr);
		ptr++;
	}
	
	return 0;
}
