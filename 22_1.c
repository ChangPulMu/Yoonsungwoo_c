#include <stdio.h>
struct employee{
	char name[10];
	char num[20];
	int info;
};

int main(void){
	struct employee e;

	printf("사원의 이름을 입력하시오 : ");
	scanf("%s",e.name);

	printf("사원의 주민등록번호 입력하시오 : ");
	scanf("%s",e.num);

	printf("사원의 급여정보를 입력하시오 : ");
	scanf("%d",&(e.info));

	printf("사원의 이름 : %s\n사원의 주민등록번호 : %s\n사원의 급여정보 : %d",e.name,e.num,e.info);
	
	return 0;
}
