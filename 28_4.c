#include <stdio.h>

int main(void){
	FILE * fp = fopen("C:\\cygwin64\\home\\a\\yoon_c\\IamAorP.txt","rt");
	char c;
	int a=0, p=0;

	while(1){
		c = fgetc(fp);

		if(c==EOF)
			break;
	
		if(c=='A'||c=='a')
			a++;
		else if(c=='P'||c=='p')
			p++;

		while((c!=' '&&c!='\t')&&c!='\n'){
			c = fgetc(fp);
			if(c==EOF)
				break;
		}
	}

	printf("A,a로 시작하는 단어의 수 : %d\n",a);
	printf("P,p로 시작하는 단어의 수 : %d\n",p);

	fclose(fp);
	
	return 0;
}
