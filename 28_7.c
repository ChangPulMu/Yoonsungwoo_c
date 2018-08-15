#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
	char name[20];
	char num[20];
}Phonebook;

int main(void){
	Phonebook * pb[15];
	int i=0;
	
	if(fopen("C:\\cygwin64\\home\\a\\yoon_c\\PhoneBook.bin","rb")!=NULL){
		FILE * f = fopen("C:\\cygwin64\\home\\a\\yoon_c\\PhoneBook.bin","rb");
	
		while(!feof(f)){
			pb[i] = (Phonebook *)malloc(40);
			fread((void*)pb[i],sizeof(Phonebook),1,f);
			i++;
		}

		i--;

		fclose(f);
	}

	FILE * fp = fopen("C:\\cygwin64\\home\\a\\yoon_c\\PhoneBook.bin","wb");
	char tmpname[20];
	int n, tmp=0, sch=0, sum;

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
				sum++;
				break;

			case 2:
				printf("삭제하실 전화번호부의 이름을 입력하시오 : ");
				
				fgets(tmpname,20,stdin);
				tmpname[strlen(tmpname)-1]=0;

				while(tmp<i){
					
					if(!strcmp(pb[tmp]->name,tmpname)){
						
						for(int l=tmp;l<i-1;l++){
							strcpy(pb[l]->name,pb[l+1]->name);
							strcpy(pb[l]->num,pb[l+1]->num);
						}
						
						printf("정상적으로 삭제 되었습니다.\n");
						
						i--;
						
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
					fwrite((void*)pb[m],sizeof(Phonebook),1,fp);
				
				for(int m=0;m<sum;m++)
					free(pb[m]);

				fclose(fp);

				return 0;

		}
	}
}
