#include <stdio.h>
void SecToOth(int);
int main(void){
	int a=0;
	printf("초를 입력하세요 : ");
	scanf("%d", &a);
	SecToOth(a);
}
void SecToOth(int n){
	int h=0, m=0, s=0;
	h = n/3600;
	m = (n-h*3600)/60;
	s = n-h*3600-m*60;
	printf("%d시간 %d분 %d초 입니다.",h,m,s);
}
