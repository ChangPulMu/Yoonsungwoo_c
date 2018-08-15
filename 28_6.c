#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
	char name[20];
	char num[20];
}Phonebook;

int main(void){
	Phonebook * pb[15];
	char tmpname[20];
	int n, i=0, tmp=0, sch=0;

	while(1){
		printf("***** 메뉴 *****\n");
		printf("1. 등록\n");
		printf("2. 삭제\n");
		printf("3. 찾기\n");
		printf("4. 전부 출력\n");
		printf("5. 종료\n");
		printf("항목을 고르시오 : ");
		scanf("%d",&n);
		getchar();

		switch(n){
			
			case 1:
				pb[i] = (Phonebook *)malloc(40);
				
				printf("이름을 입력하시오 : ");
				fgets(pb[i]->name,sizeof(Phonebook),stdin);
				pb[i]->name[strlen(pb[i]->name)-1]=0;

				printf("전화번호를 입력하시오 : ");
				fgets(pb[i]->num,sizeof(Phonebook),stdin);
				pb[i]->num[strlen(pb[i]->num)-1]=0;

				printf("데이터가 입력되었습니다.\n");

				i++;
				break;

			case 2:
				printf("삭제하실 전화번호부의 이름을 입력하시오 : ");
				
				fgets(tmpname,20,stdin);
				tmpname[strlen(tmpname)-1]=0;

				while(tmp<i){
					if(!strcmp(pb[tmp]->name,tmpname)){
						strcpy(pb[tmp]->name,"Delete");
						printf("정상적으로 삭제 되었습니다.\n");
						break;
					}
					tmp++;
				}

				tmp=0;
				break;

			case 3:
				printf("찾으실 전화번호부의 이름을 입력하시오 : ");

				fgets(tmpname,20,stdin);
				tmpname[strlen(tmpname)-1]=0;

				while(tmp<i){
					if(!strcmp(pb[tmp]->name,tmpname))
						break;
					tmp++;
				}

				if(tmp>=i){
					printf("존재하지 않는 이름입니다.\n");
					tmp=0;
					break;
				}

				printf("이름 : %s\n",pb[tmp]->name);
				printf("전화번호 : %s\n",pb[tmp]->num);

				tmp=0;
				break;

			case 4:
				while(1){
					if(tmp==i){
						tmp=0;
						break;
					}
					
					if(!strcmp(pb[tmp]->name,"Delete")){
						tmp++;
						continue;
					}

					sch++;

					printf("%d번째분의 이름 : %s\n",sch,pb[tmp]->name);
					printf("%d번째분의 전화번호 : %s\n",sch,pb[tmp]->num);

					tmp++;
				}

				tmp=0;
				sch=0;

				break;

			case 5:
				for(int m=0;m<i;m++)
					free(pb[m]);
				return 0;

		}
	}
}
