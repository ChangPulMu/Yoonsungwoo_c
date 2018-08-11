#include <stdio.h>
int main(void){
	int num[5], b=0, s=0, sum=0;
	printf("5개의 정수를 입력하시오 : ");
	for(int i=0;i<5;i++)
		scanf("%d", &num[i]);
	b=num[0], s=num[0], sum=num[0]; //b=s=sum=num[0];도 가능!
	for(int m=0;m<4;m++){
		if(b<num[m+1])
			b=num[m+1];
		if(s>num[m+1])
			s=num[m+1];
		sum+=num[m+1];
	} //m=1;m<5;m++로 하고 num[m]하는 것이 좀 더 효율적!
	printf("최댓값 : %d, 최솟값 : %d, 총합 : %d",b,s,sum);
	return 0;
}
