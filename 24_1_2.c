#include <stdio.h>

int main(void){
	FILE * fp = fopen("C:\\cygwin64\\home\\a\\yoon_c\\mystory.txt","at");

	fputs("#즐겨먹는 음식 : 고기\n",fp);
	fputs("#취미 : EDM 음악 듣기\n",fp);

	fclose(fp);

	return 0;
}
