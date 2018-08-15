#include <stdio.h>
#include <stdlib.h>
char * Chng(char *,int);

int main(void){
	int tmp;
	char * str;

	printf("얼마만큼의 문자를 쓰시겠습니까? : ");
	scanf("%d", &tmp);
	getchar();

	str = (char *)malloc(tmp+2);

	printf("문자를 입력해주세요 : ");
	fgets(str,sizeof(char)*(tmp+2),stdin);
	str[tmp]='\0';

	printf("바뀐 문자 : %s",Chng(str,tmp+1));

	free(str);

	return 0;
}

char * Chng(char * s, int t){
	char * smp = (char *)malloc(t);
	char st;
	int i, m=0, tm=0, ttt=0;

	for(i=0;i<t-1;i++)
		smp[t-i-2] = s[i];

	smp[t-1] = s[i];

	while(smp[ttt]!='\0'){
		
		for(m=0;smp[ttt]!=' '&&smp[ttt]!='\0';m++,ttt++){}

		for(int k=0;k<m/2;k++){
			st = smp[tm+k];
			smp[tm+k] = smp[ttt-1-k];
			smp[ttt-1-k] = st;
		}

		ttt++;
		tm = ttt;
	}

	return smp;
}
