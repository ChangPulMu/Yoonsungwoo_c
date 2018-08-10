#include <stdio.h>
int main(void){
	int kuk=0, su=0, young=0;
	double avg=0.0;
	printf("국어, 수학, 영어 점수를 입력하시오 : ");
	scanf("%d %d %d", &kuk, &su, &young);
	avg = (double)(kuk+su+young)/3;
	//avg = (kuk+su+young)/3.0 이 좀더 좋은 코드
	if(avg>=90)
		printf("A\n");
	else if(avg>=80)
		printf("B\n");
	else if(avg>=70)
		printf("C\n");
	else if(avg>=50)
		printf("D\n");
	else if(avg<50)
		printf("F\n");
	return 0;
}
