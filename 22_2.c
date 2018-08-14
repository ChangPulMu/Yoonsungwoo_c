#include <stdio.h>
struct employee{
	char name[10];
	char num[20];
	int info;
};

int main(void){
	struct employee e[3];

	for(int i=0;i<3;i++){
		printf("사원의 이름을 입력하시오 : ");
		scanf("%s",e[i].name);

		printf("사원의 주민등록번호 입력하시오 : ");
		scanf("%s",e[i].num);

		printf("사원의 급여정보를 입력하시오 : ");
		scanf("%d",&(e[i].info));
	}

	for(int j=0;j<3;j++)
		printf("사원의 이름 : %s\n사원의 주민등록번호 : %s\n사원의 급여정보 : %d\n",e[j].name,e[j].num,e[j].info);
	
	return 0;
}
