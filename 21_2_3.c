#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void Compar(char [],char []);

int main(void){
	char str1[20], str2[20];

	printf("첫 번째 사람의 이름과 나이를 입력하시오 : ");
	fgets(str1,sizeof(str1),stdin);
	str1[strlen(str1)-1]=0;
	printf("%s\n",str1);
	
	printf("두 번째 사람의 이름과 나이를 입력하시오 : ");
	fgets(str2,sizeof(str2),stdin);
	str2[strlen(str2)-1]=0;
	printf("%s\n",str2);

	Compar(str1, str2);

	return 0;
}

void Compar(char Str1[], char Str2[]){
	int i=0, j=0, k, m=1, ii=0, jj=0, a, b;
	char s1[10], s2[10];

	if(!strcmp(Str1,Str2)){
		printf("이름과 나이가 둘 다 같습니다!");
		return;
	}

	while(1){
		if(Str1[i]==' '&&Str2[j]==' ')
			break;
		if(Str1[i]!=' ')
			i++;
		if(Str2[j]!=' ')
			j++;
	}
	
	if(i<j)
		k=j;
	else
		k=i;

	if(!strncmp(Str1,Str2,k)){
		printf("이름은 같습니다.");
		return;
	}

	while(1){
		if(Str1[i+m]==0&&Str2[j+m]==0)
			break;
		if(Str1[i+m]!=0){
			s1[ii]=Str1[i+m];
			ii++;
		}
		if(Str2[j+m]!=0){
			s2[jj]=Str2[j+m];
			jj++;
		}
		m++;
	}
	
	s1[ii]=0, s2[jj]=0;

	a = atoi(s1), b = atoi(s2);

	if(a==b){
		printf("나이는 같습니다.");
		return;
	}

	printf("이름과 나이 둘 다 같지 않습니다.");
}
