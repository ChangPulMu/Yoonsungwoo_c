#include <stdio.h>
long Much(FILE *);

int main(void){
	long tmp;
	FILE * fp = fopen("C:\\cygwin64\\home\\a\\yoon_c\\mystory.txt","rt");

	tmp = ftell(fp);

	printf("바이트 크기는 %ld입니다.",Much(fp));

	fseek(fp, tmp, SEEK_SET);

	fclose(fp);

	return 0;
}

long Much(FILE * f){
	while(1){
		fgetc(f);
		
		if(fgetc(f)==EOF){
			
			if(feof(f)!=0)
				printf("정상적인 출력\n");
			
			else
				printf("비정상적인 출력\n");
			
			break;
		}
	}
	return ftell(f);
} //맞긴 하지만 5, 8, 12 행을 함수안에 넣었다면 조금더 완벽하다..!
