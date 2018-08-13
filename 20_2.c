#include <stdio.h>
void Dalpaeng(int);

int main(void){
	int n;

	printf("달팽이 배열을 만들 숫자를 입력하시오 : ");
	scanf("%d", &n);

	Dalpaeng(n);

	return 0;
}

void Dalpaeng(int m){
	int arr[m][m], sum=m*m, i, j, k, h, g, tmp=1;

	for(i=0;i<m;i++){
		for(j=i;j<m-i;j++){
			arr[i][j]=tmp;
			if(tmp==sum)
				break;
			tmp++;
		}

		for(k=i;k<m-i;k++){
			if(arr[k][j-1]==arr[i][j-1])
				continue;
			arr[k][j-1]=tmp;
			if(tmp==sum)
				break;
			tmp++;
		}
		
		for(h=m-i-1;h>i-1;h--){
			if(arr[j-1][h]==arr[j-1][m-i-1])
				continue;
			arr[j-1][h]=tmp;
			if(tmp==sum)
				break;
			tmp++;
		}

		for(g=m-i-1;g>i;g--){
			if(arr[g][i]==arr[m-i-1][i])
				continue;
			arr[g][i]=tmp;
			if(tmp==sum)
				break;
			tmp++;
		}
	}

	for(int t=0;t<m;t++){
		for(int w=0;w<m;w++)
			printf("%5d", arr[t][w]);
		printf("\n");
	}
}
