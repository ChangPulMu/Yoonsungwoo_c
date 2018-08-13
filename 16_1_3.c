#include <stdio.h>

int main(void){
	int arr[5][5] = {};

	for(int i=0;i<4;i++){
		printf("%d번째 사람의 점수를 입력합니다. \n",i+1);
		printf("국어, 영어, 수학, 국사 순으로 입력해주세요. \n");
		for(int j=0;j<4;j++){
			printf("%d번째 입력입니다 : ",j+1);
			scanf("%d", &(arr[i][j]));
		}
	}

	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			arr[i][4] += arr[i][j];
			arr[4][i] += arr[j][i];
		}
	}

	for(int i=0;i<4;i++){
		arr[4][4] += arr[i][4];
	}

	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++)
			printf("%d ", arr[i][j]);
		printf("\n");
	}

	return 0;
}
