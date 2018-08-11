#include <stdio.h>
int main(void){
	int arr[10], tmp[10], m=0, t=0, tp=0;
	
	printf("총 10개의 숫자를 입력하세요 : \n");
	
	for(int i=0;i<10;i++){
		printf("%d번째 입력 : ",i+1);
		scanf("%d",&(tmp[i]));
	}

	for(int n=0;n<10;n++){
		if(tmp[n]%2==1){
			arr[m]=tmp[n];
			m++;
		}
	}

	t=m;

	for(int nn=0;nn<t-1;nn++){
		for(int nnn=nn+1;nnn<t;nnn++){
			if(arr[nn]>arr[nnn]){
				tp = arr[nn];
				arr[nn] = arr[nnn];
				arr[nnn] = tp;
			}
		}
	}

	for(int k=0;k<10;k++){
		if(tmp[k]%2==0){
			arr[m]=tmp[k];
			m++;
		}
	}

	for(int kk=t;kk<m-1;kk++){
		for(int kkk=kk+1;kkk<m;kkk++){
			if(arr[kk]>arr[kkk]){
				tp = arr[kk];
				arr[kk] = arr[kkk];
				arr[kkk] = tp;
			}
		}
	}

	printf("배열 요소의 출력 : ");
	for(int l=0;l<10;l++)
		printf("%d ",arr[l]);

	return 0;
}
