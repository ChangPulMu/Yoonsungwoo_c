#include <stdio.h>
void Gunjil(int, int, int, int);
int main(void){
	int mon=0, a=0, b=0, c=0;
	printf("남은 잔액과 크림빵, 새우깡, 콜라의 가격을 입력하시오 : ");
	scanf("%d %d %d %d",&mon,&a,&b,&c);
	Gunjil(mon,a,b,c);
	return 0;
}
void Gunjil(int mn, int n, int m, int l){
	int i, j, k;
	printf("현재 당신이 소유하고 있는 금액 : %d\n",mn);
	for(i=1;n*i<mn;i++)
		for(j=1;m*j<mn;j++)
			for(k=1;l*k<mn;k++){
				if(n*i+m*j+l*k==mn)
					printf("크림빵 %d개, 새우깡 %d개, 콜라 %d개\n",i,j,k);
			}
	printf("어떻게 구입하시겠습니까?\n");
}
