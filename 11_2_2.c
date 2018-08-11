#include <stdio.h>
int main(void){
	char s[50], l[50];
	int i=0;
	printf("영단어를 입력하세요 : ");
	scanf("%s",  s);
	while(s[i]!=0){
		l[i]=s[i];
		i++;
	}
	for(int n=0;s[n]!='\0';n++){
		s[n]=l[i-1];
		i--;
	}
	printf("거꾸로 : %s",s);
} //답지의 코드를 보면서 창의성을 키우자! 굉장한 창의성..!
