#include <stdio.h>

int main(void){
	FILE * fp1 = fopen("C:\\cygwin64\\home\\a\\yoon_c\\compare1.txt","rt");
	FILE * fp2 = fopen("C:\\cygwin64\\home\\a\\yoon_c\\compare2.txt","rt");
	char c1, c2;
	int a=0, p=0;

	while(1){
		c1 = fgetc(fp1);
		c2 = fgetc(fp2);

		if(c1!=c2){
			printf("두 개의 파일은 다릅니다.\n");
			break;
		}
		
		else if(c1==EOF&&c2==EOF){
			printf("두 개의 파일은 완전히 일치 합니다.\n");
			break;
		}
	}

	fclose(fp1);
	fclose(fp2);
	
	return 0;
}
