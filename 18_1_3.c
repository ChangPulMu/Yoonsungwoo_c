#include <stdio.h>
void ComplexFuncOne(int *[], int *[][5]);
void ComplexFuncTwo(int **[], int ***[][5]);

int main(void){
	int * arr1[3]={1,2,3};
	int * arr2[3][5]={{4},{5},{15}};
	int ** arr3[5]={6,7,8,9,10};
	int *** arr4[3][5]={{11},{12},{13}};

	ComplexFuncOne(arr1, arr2);
	ComplexFuncTwo(arr3, arr4);

	return 0;
}

void ComplexFuncOne(int * Arr1[], int * Arr2[][5]){
	printf("%d %d\n",Arr1[0], (*(Arr2+1))[0]);
}

void ComplexFuncTwo(int ** Arr3[], int *** Arr4[][5]){
	printf("%d %d",Arr3[0], *(Arr4[0]+0));
}
