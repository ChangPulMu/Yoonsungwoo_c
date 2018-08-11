#include <stdio.h>
int main(void){
	char s[50], tmp;
	printf("영단어를 입력하세요 : ");
	scanf("%s", s);
	tmp = s[0];
	for(int i=1;s[i]!='\0';i++){
		if(tmp<s[i])
			tmp=s[i];
	}
	printf("아스키 코드 값이 가장 큰 문자는 %c",tmp);
	return 0;
}
