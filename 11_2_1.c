#include <stdio.h>
int main(void){
	char s[50];
	int a;
	printf("영단어를 입력하세요 : ");
	scanf("%s", s);
	for(a=0;s[a]!='\0';a++){}
	printf("영단어의 길이는 %d입니다.",a);
	return 0;
}
