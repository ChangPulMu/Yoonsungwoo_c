#include <stdio.h>

int main(void){
	char str[30];
	FILE * fp = fopen("C:\\cygwin64\\home\\a\\yoon_c\\mystory.txt","rt");

	while(1){
		fgets(str,sizeof(str),fp);
		if(feof(fp)!=0)
			break;
		printf("%s",str); //printf(str); 가능
	} //while(fgets(str,sizeof(str),fp)!=NULL)이 좀 더 짧은 코드

	fclose(fp);

	return 0;
}
