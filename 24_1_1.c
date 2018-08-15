#include <stdio.h>

int main(void){
	FILE * fp = fopen("C:\\cygwin64\\home\\a\\yoon_c\\mystory.txt","wt");

	fputs("#이름 : 장두혁\n",fp);
	fputs("#주민번호 : 970117-10*****\n",fp);
	fputs("#전화번호 : 010-****-****\n",fp);

	fclose(fp);

	return 0;
}
