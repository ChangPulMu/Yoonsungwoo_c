#include <stdio.h>
//int Gugudan(int, int);
void gugudan(int, int);
int main(void){
	int a=0, b=0;
	printf("몇 단부터 몇 단까지 출력할까요? : ");
	scanf("%d %d",&a,&b);
	gugudan(a,b);
	return 0;
}
/*int Gugudan(int n, int m){
	int l, i;
	if(n>m){
		for(l=m;l<=n;l++)
			for(i=1;i<10;i++)
				printf("%dX%d=%d\n",l,i,l*i);
	}
	else if(n<m){
		for(l=n;l<=m;l++)
			for(i=1;i<10;i++)
				printf("%dX%d=%d\n",l,i,l*i);
	}
	else
		for(i=1;i<10;i++)
			printf("%dX%d=%d\n",n,i,n*i);
}*/
void gugudan(int N, int M){
	int L, O, I;
	if(N>M)
		L=M, O=N;
	else if(N<M)
		L=N, O=M;
	else
		L=N, O=M;
	for(;L<=O;L++)
		for(I=1;I<10;I++)
			printf("%dX%d=%d\n",L,I,L*I);
} //캬 생각 끝에 더 효율적인 함수 만들어 버리기~~
