#include <stdio.h>
void MaxAndMin(int **,int **,int *);

int main(void){
	int * maxPtr, * minPtr;
	int arr[5];

	printf("5개의 정수를 입력하시오.\n");
	for(int i=0;i<5;i++){
		printf("%d번째 입력 : ",i+1);
		scanf("%d", &(arr[i]));
	}

	MaxAndMin(&maxPtr,&minPtr,arr); //배열 크기를 인자로 전달받는 것이 나음

	printf("%d %d",*maxPtr,*minPtr);

	return 0;
}

void MaxAndMin(int ** M, int ** N, int Arr[]){
	int tmp;

	for(int i=0;i<4;i++)
		for(int j=0;j<4-i;j++)
			if(Arr[j]>Arr[j+1]){
				tmp = Arr[j];
				Arr[j] = Arr[j+1];
				Arr[j+1] = tmp;
			}
	//버블 소트 말고 Arr[0]의 주소값을 받을 수 있는 int 포인터 형 변수 두개를 만들어서 하나는 최댓값 하나는 최솟값 변수로 Arr[1]부터 비교해서 크면 최댓값에 대입 작으면 최솟값에 대입하는 형태로 할 수 있음

	*M = Arr + 4, *N = Arr;
}
