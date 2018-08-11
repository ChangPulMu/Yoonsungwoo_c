#include <stdio.h>
void DesSort(int *,int);

int main(void){
	int num[7];

	for(int i=0;i<sizeof(num)/sizeof(int);i++){
		printf("%d번째 입력 : ",i+1);
		scanf("%d", &(num[i]));
	}

	DesSort(num, sizeof(num)/sizeof(int));

	for(int g=0;g<sizeof(num)/sizeof(int);g++)
		printf("%d ",num[g]);

	return 0;
}

void DesSort(int * n, int m){
	int tmp=0, k;

	for(int l=0;l<m-1;l++)
		for(k=0;k<m-l;k++)
			if(n[k]<n[k+1]){
				tmp = n[k];
				n[k] = n[k+1];
				n[k+1] = tmp;
			}
}
