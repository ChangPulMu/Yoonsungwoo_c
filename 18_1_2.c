#include <stdio.h>
void SimpleFuncOne(int [],int []);
void SimpleFuncTwo(int [][4],int[][4]);

int main(void){
	int arr1[3]={1,2,3}, arr2[4]={4,5,6};
	int arr3[3][4]={{7},{8},{9}}, arr4[2][4]={{10},{11}};

	SimpleFuncOne(arr1, arr2);
	SimpleFuncTwo(arr3, arr4);

	return 0;
}

void SimpleFuncOne(int Arr1[], int Arr2[]){
	printf("%d %d\n",Arr1[1],Arr2[2]);
}

void SimpleFuncTwo(int Arr3[][4], int Arr4[][4]){
	printf("%d %d\n",*(*(Arr3+2)+0),(*(Arr4+1))[0]);
}
