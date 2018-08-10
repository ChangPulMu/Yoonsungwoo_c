#include <stdio.h>
int main(void){
	int num=0, sum=0, i=0;
	while(i<5){
		printf("1이상의 정수를 입력하세요 : ");
		while(num<1){
			//printf("정수를 입력하시오 %d번째 입력 : ", i+1);
			//이게 위에것보다 좋은 코드
			scanf("%d", &num);
		}
		sum += num;
		num = 0;
		i++;
	}
	printf("총합 : %d\n", sum);
	return 0;
}
