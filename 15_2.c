#include <stdio.h>
void Ijinsu(int);
int Igop(int);

int main(void){
	int num;

	printf("10진수 정수를 입력하세요 : ");
	scanf("%d", &num);

	Ijinsu(num);

	return 0;
}

void Ijinsu(int n){
	int i, sum=0;

	if(n==1){
		printf("1 \n");
		return;
	}
	else if(n==0){
		printf("0 \n");
		return;
	}

	for(i=1;Igop(i)<=n;i++){}

	int arr[i];
	arr[0]=1;

	i=i-1;
	sum+=Igop(i);

	for(int m=1;m<=i;m++){
		if((sum+Igop(i-m))<=n){
			arr[m]=1;
			sum+=Igop(i-m);
		}
		else
			arr[m]=0;
	}

	for(int w=0;w<=i;w++)
		printf("%d",arr[w]);
}

int Igop(int a){
	if(a==0)
		return 1;
	else
		return 2*Igop(a-1);
}
