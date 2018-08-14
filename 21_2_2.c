#include <stdio.h>
#include <string.h>
void GaeHaengSiRu(char *);

int main(void){
	char str1[20], str2[20], str3[40];

	printf("str1 입력 : ");
	fgets(str1,sizeof(str1),stdin); //함수 만들지 않고 str1[strlen(str1)-1]=0;라고 하면 됨!
	printf("str2 입력 : ");
	fgets(str2,sizeof(str2),stdin);
	GaeHaengSiRu(str1);
	GaeHaengSiRu(str2);

	strncpy(str3,str1,sizeof(str3));
	strcat(str3,str2);

	fputs(str3,stdout);

	return 0;
}

void GaeHaengSiRu(char * s){
	int i=0;

	while(1){
		if(s[i]=='\n')
			break;
		i++;
	}

	s[i]=0;
}
