#include <stdio.h>
void Holsu(const int *, const int);
void Chaksu(const int *, const int);

int main(void){
	int num[10];

	printf("총 10개의 정수 입력 \n");
	for(int i=0;i<10;i++){
		printf("%d번 째 입력 : ",i+1);
		scanf("%d", &num[i]);
	}

	Holsu(num, 10);
	Chaksu(num, 10);

	return 0;
}

void Holsu(const int * n, const int m){
	printf("홀수 출력 : ");

	for(int a=0;a<m;a++)
		if(n[a]%2==1)
			printf("%d ", n[a]);

	printf("\n");
}

void Chaksu(const int * o, const int l){
	printf("짝수 출력 : ");

	for(int b=0;b<l;b++)
		if(o[b]%2==0)
			printf("%d ", o[b]);

	printf("\n");
}
